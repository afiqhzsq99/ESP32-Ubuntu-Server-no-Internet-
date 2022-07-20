<!DOCTYPE html>
<html>
<head>
<script src="htpps://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"> </script>
<meta http-equiv="refresh" content="5"; URL = http://192.168.6.108/SQL2/display.php">
<title>IR Sensor Record</title>
<style>
header {
}
body {
	background-image: linear-gradient( 60deg, blue, purple);
}
footer {
	width: 100%;
	font-family: garamond;
	text-align: center;
	color: white;
}
table {
	border-collapse: collapse;
	border-radius: 5px, 5px, 5px, 5px;
	overflow: hidden;
	width: 80%;
	color: #273746;
	font-family: garamond;
	font-size: 25px;
	text-align: left;
	margin-left: auto;
	margin-right: auto;
}
th {
	background-color: #273746;
	color: white;
	height: 45px;
	padding-left: 30px;
}
tr:nth-child(odd) {
	background-color: #E5E7E9;
	height: 35px;
}
tr:nth-child(even) {
	background-color: white;
	height: 35px;
}
td {
	padding-left: 30px;
}
h1 {
	width: 100%;
	font-family: garamond;
	text-align: center;
	color: white;
}
h2 {
	width: 100%;
	font-family: garamond;
	text-align: center;
	color: white;
}
</style>
<!--<h1></h1>-->
</head>
<body>
<h1>IR Sensor Record Table</h1>
<h2>Date: 
<?php 
	date_default_timezone_set('Asia/Kuala_Lumpur');
	$date2 = date ("Y-m-d"); //echo date ("Y-m-d H:i:s"); 
	echo $date2;
?>
</h2>
<table>
<tr>
<th style = " width: 40%;">Sensor</th>
<th style = " width: 70%;">Count</th>
</tr>
<?php
$conn = mysqli_connect("localhost", "test", "test", "db_esp32");
// Check connection
if ($conn->connect_error) {
	die("Connection failed: " . $conn->connect_error);
}
//$sql = "SELECT * FROM tbl_count";
$sql = "SELECT * FROM tbl_history WHERE Date = '$date2'";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
// output data of each row
	while($row = $result->fetch_assoc()) {
		echo "<tr><td>" . $row["ID"]. "</td><td>" . $row["Count"] . "</td></tr>";
	}
	echo "</table>";
} else { 
	echo "<tr><td>0</td>
	<td>No records for today</td></tr>
	</table>"; 
	}
$conn->close();
?>
</table> <br>
<h1>Record Table History</h1>
<table>
<tr>
<th style = " width: 40%;">Date</th>
<th style = " width: 70%;">Total</th>
</tr>
<?php
$conn = mysqli_connect("localhost", "test", "test", "db_esp32");
// Check connection
if ($conn->connect_error) {
	die("Connection failed: " . $conn->connect_error);
}
$sql = "SELECT * FROM tbl_history ORDER BY Date DESC;";
$result = $conn->query($sql);
$copy = "0";
if ($result->num_rows > 0) {
// output data of each row
	while($row = $result->fetch_assoc()) {
		
		$date = $row["Date"];
		if ($date != $copy){
			$sql2 = mysqli_query($conn, "SELECT SUM(Count) AS value_sum FROM tbl_history 
			  WHERE Date = '".$date."';");
			$row = mysqli_fetch_assoc($sql2); 
			echo "<tr><td>" . $date. "</td><td>" . $row["value_sum"] . "</td></tr>";
			$copy = $date;
		}
	}
	echo "</table>";
} else { echo "0 results"; }
$conn->close();
?>
</br></br>
</body>
<footer>Toha Counter Project</footer>
</html>
<?php

if(isset($_GET["count"])) {
	$count = $_GET["count"]; // get count value from HTTP GET
	
    $host = "localhost";
	$user = "ucetak"; //test
	$pass = "Lavender4!";  //test
	$dp = "esp32"; //db_esp32
	
	date_default_timezone_set('Asia/Kuala_Lumpur');
	$date2 = date ("Y-m-d"); //echo date ("Y-m-d H:i:s");

   $conn = mysqli_connect($host, $user, $pass, $dp);	
   
   $sql3 = "SELECT * FROM tbl_history WHERE Date = '$date2' AND ID = 4";
   $result = $conn->query($sql3);
   
   if ($result->num_rows > 0) {	    
		echo "Upd! ";
		$sql2 = "UPDATE tbl_history SET Count = ($count) WHERE ID = 4 AND Date = '$date2'";
   }
   else {
	   echo "New! ";
		$sql2 = "INSERT into tbl_history (Date, ID, Count) VALUES ('$date2', 4, ($count))"; 
   }
	
	if ($conn->query($sql2) === TRUE) {
      echo " New record created successfully with date " . $date2;
   } else {
      echo "Error: " . $sql2 . " => " . $conn->error;
   }
   
   $conn->close();
} else {
   echo "count is not set";
}
?>
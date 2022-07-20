<?php
  if (!empty($_POST)) {
    $id= 4; 
    
	date_default_timezone_set('Asia/Kuala_Lumpur');
	$date2 = date ("Y-m-d"); //echo date ("Y-m-d H:i:s");
	
	$host = 'localhost' ;
	$user = 'ucetak' ;
	$pass = 'Lavender4!';
	$dp = 'esp32';
		
	$conn = mysqli_connect($host, $user, $pass, $dp);
    $sql = "SELECT * FROM tbl_history WHERE ID = 4 AND Date = '".$date2."'";
    
    $result = $conn->query($sql);
	$data = $result->fetch_assoc();
	$conn->close();
    
    echo $data['Count'];
  }
?>
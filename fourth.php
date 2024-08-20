<!DOCTYPE html> 
<html lang="en"> 
<head> 
<meta charset="UTF-8"> 
<title>Login</title> 
</head> 
<body> 
<h1>Login</h1> 
<form action="process_login.php" method="POST"> 
<label >Username:</label> 
<input type="text" id="username" name="username" required> 
<label >Password:</label> 
<input type="password" id="password" name="password" required> 
<button type="submit">Login</button> 
</form> 
</body> 
</html>
<?php  
$username = $_POST["username"]; 
$password = $_POST["password"]; 
echo "Username: $username<br>"; 
echo "Password: $password"; 
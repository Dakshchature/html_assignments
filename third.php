<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>User Form</title>
<link rel="stylesheet" href="style.css">
</head>
<body>
<div class="container">
<h2>User Form</h2>
<form id="userForm">
<label for="username">Username:</label>
<input type="text" id="username" name="username"><br><br>
<label for="email">Email:</label>
<input type="email" id="email" name="email"><br><br>
<button type="button" onclick="displayUser()">Display</button>
<button type="button" onclick="updateUser()">Update</button>
<button type="button" onclick="deleteUser()">Delete</button>
<button type="button" onclick="insertUser()">Insert</button>
<button type="button" onclick="fetchUser()">Fetch</button>
</form>
<div id="result"></div>
</div>
<script src="script.js"></script>
</body>
</html>
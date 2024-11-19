<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Italian Flag</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <div class="flag">
    <div class="section green"></div>
    <div class="section white"></div>
    <div class="section red"></div>
  </div>
</body>
</html>



body {
  display: flex;
  justify-content: center;
  align-items: center;
  height: 100vh;
  margin: 0;
  background-color: #f4f4f4; /* Light gray background for contrast */
}

.flag {
  display: flex;
  flex-direction: row; /* Horizontal layout for the flag */
}

.section {
  width: 80px; /* Width of each color strip */
  height: 400px; /* Height of the flag */
}

.green {
  background-color: green;
}

.white {
  background-color: white;
}

.red {
  background-color: red;
}

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Job Application Form</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <div class="form-container">
    <h1>Job Application Form</h1>
    <form action="#" method="post">
      <fieldset>
        <legend>Personal Information</legend>

        <!-- Full Name -->
        <label for="full-name">Full Name:</label>
        <input type="text" id="full-name" name="full-name" placeholder="Enter your name" required><br><br>

        <!-- Highest Qualification -->
        <label for="qualification">Highest Qualification:</label>
        <select id="qualification" name="qualification" required>
          <option value="" disabled selected>Select your degree</option>
          <option value="bachelor">Bachelor's</option>
          <option value="master">Master's</option>
          <option value="phd">PhD</option>
        </select><br><br>

        <!-- Gender -->
        <label>Gender:</label><br>
        <input type="radio" id="male" name="gender" value="male" required>
        <label for="male">Male</label><br>
        <input type="radio" id="female" name="gender" value="female">
        <label for="female">Female</label><br>
        <input type="radio" id="other" name="gender" value="other">
        <label for="other">Other</label><br><br>

        <!-- Submit and Cancel Buttons -->
        <div class="buttons">
          <button type="submit" class="btn-submit">Submit</button>
          <button type="reset" class="btn-cancel">Cancel</button>
        </div>
      </fieldset>
    </form>
  </div>
</body>
</html>



body {
  font-family: Arial, sans-serif;
  background-color: #f4f4f4;
  margin: 0;
  padding: 0;
}

.form-container {
  max-width: 600px;
  margin: 50px auto;
  background: #fff;
  padding: 20px;
  border-radius: 8px;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

h1 {
  text-align: center;
  color: #333;
}

form {
  margin-top: 20px;
}

fieldset {
  border: 1px solid #ccc;
  border-radius: 8px;
  padding: 15px;
}

legend {
  font-size: 1.2em;
  color: #333;
}

label {
  display: block;
  margin-bottom: 8px;
  font-weight: bold;
}

input[type="text"],
select {
  width: 100%;
  padding: 8px;
  margin-bottom: 15px;
  border: 1px solid #ccc;
  border-radius: 4px;
}

input[type="radio"] {
  margin-right: 5px;
}

.buttons {
  display: flex;
  justify-content: space-between;
}

.btn-submit {
  background-color: #4CAF50;
  color: white;
  padding: 10px 20px;
  border: none;
  border-radius: 4px;
  cursor: pointer;
}

.btn-submit:hover {
  background-color: #45a049;
}

.btn-cancel {
  background-color: #f44336;
  color: white;
  padding: 10px 20px;
  border: none;
  border-radius: 4px;
  cursor: pointer;
}

.btn-cancel:hover {
  background-color: #d32f2f;
}

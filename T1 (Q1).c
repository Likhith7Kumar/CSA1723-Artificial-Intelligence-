<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Game Categories</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <div class="container">
    <h1>Game Categories and Their Games</h1>

    <ul class="categories">
      <li>
        <h2>Action</h2>
        <ol>
          <li>Grand Theft Auto V</li>
          <li>Call of Duty: Warzone</li>
          <li>Assassin's Creed Valhalla</li>
          <li>Fortnite</li>
        </ol>
      </li>
      <li>
        <h2>Adventure</h2>
        <ol>
          <li>The Legend of Zelda: Breath of the Wild</li>
          <li>Uncharted 4: A Thief's End</li>
          <li>Red Dead Redemption 2</li>
          <li>Life is Strange</li>
        </ol>
      </li>
      <li>
        <h2>Racing</h2>
        <ol>
          <li>Mario Kart 8 Deluxe</li>
          <li>Need for Speed Heat</li>
          <li>Gran Turismo 7</li>
          <li>Forza Horizon 4</li>
        </ol>
      </li>
      <li>
        <h2>Sports</h2>
        <ol>
          <li>FIFA 23</li>
          <li>PES 2021</li>
          <li>NBA 2K23</li>
          <li>WWE 2K Battlegrounds</li>
        </ol>
      </li>
      <li>
        <h2>Puzzle</h2>
        <ol>
          <li>The Witness</li>
          <li>Tetris Effect</li>
          <li>Portal 2</li>
          <li>Monument Valley</li>
        </ol>
      </li>
    </ul>
  </div>

  <script src="script.js"></script>
</body>
</html>



body {
  font-family: Arial, sans-serif;
  background-color: #f4f4f4;
  margin: 0;
  padding: 0;
}

.container {
  max-width: 900px;
  margin: 50px auto;
  background-color: #fff;
  padding: 20px;
  border-radius: 8px;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

h1 {
  text-align: center;
  color: #333;
  margin-bottom: 20px;
}

.categories {
  list-style-type: none;
  padding: 0;
}

.categories li {
  margin-bottom: 20px;
}

.categories h2 {
  background-color: #007BFF;
  color: #fff;
  padding: 10px;
  border-radius: 5px;
  margin: 0;
}

ol {
  margin-top: 10px;
  padding-left: 20px;
}

ol li {
  margin: 5px 0;
}



document.querySelectorAll('.categories > li > h2').forEach(categoryHeader => {
  categoryHeader.addEventListener('click', () => {
    const categoryList = categoryHeader.nextElementSibling;
    categoryList.style.display = categoryList.style.display === 'none' ? 'block' : 'none';
  });
});

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> button</title>
    <link rel="stylesheet" href="css.css">
</head>
<style>
    <?php
    $textColor = "#FFC0CB";
    $bg = "Click here";
    ?>
   
    .btn{
        display: flex;
        justify-content: center;
        background-color: <?php echo $textColor ?>;
        border :2px solid gray;
        padding : 10px;
        border-radius: 10px;
        text-decoration:none;
    }
</style>
<body>
    <div class="container">
        <button class= "btn"><a href="button.php"> <?php
        echo $bg ?></a></button>
    </div>
</body>
</html>
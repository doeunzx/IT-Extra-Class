<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>String Function</title>
</head>
<body>
    <h1 style =" text-align:center; background:pink; width :81%; margin:auto;">
     This is a lesson of string function "<br>";
    <?php
    $string = "This is for string Character";
    echo strlen($string)." Cheractor";
    echo "<br>".str_word_count($string)." Characters";
    echo "<br>".strrev($string);
    ?>
    </h1>
</body>
</html>
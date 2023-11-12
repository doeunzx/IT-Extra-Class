<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Type</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <?php
    $string = "<h1 class='text'>This is text of string.</h1>";
    echo $string;
    ?>
    <?php
    $int = 2003;
    echo "This is integer number ".$int;
    ?>
    <?php
    $float = 12.55;
    $double =1234.444;
    echo "<br>"."This is float number ".$float;
    echo "<br>"."This is double number ".$double;
    ?>

    <?php
    $array = array('Sidoeun','Vityea', 'Sokorn' ,'Vanden');
    echo "<br>". $array[0];
    echo "<br>". $array[1];
    echo "<br>". $array[2];
    echo "<br>". $array[3];
    echo "<br>";
    echo "<br>";
    ?>

    <!-- This is for loop array -->
    <?php
    $array = array('Sidoeun','Vityea', 'Sokorn' ,'Vanden');
    $newArray = count($array);
    for ($i = 0; $i < $newArray; $i++) {
        echo "My name is : ".$array[$i]."<br>";
    }
    ?>
</body>
</html>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Conditions</title>
    <link rel="stylesheet" type="text/css" href="style.css"/>
</head>
<body>
    <div class= "style">
    <h1>
       <?php
        $time = date("H:i:s A");
        echo "Time is :$time<br>";
        if ($time <12 ){
            echo "Good morning";
        }
        else{
            echo "Good night";
        }
       ?>
    </h1>
        <h1>
        <?php
        $date = date("d/m/Y");
        echo "Today is : $date";
        if($date < 12 ){
            echo "<br>That's day is : Monday";
        }
        else if($date < 20){
            echo "<br>That's day is : Tuesday";
        }
        else{
            echo "That's day is : Wednesday";
        }
        ?>
        </h1>
    </div>
</body>
</html>
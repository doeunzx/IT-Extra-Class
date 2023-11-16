<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <div style="color:red; border: 5px solid gray; border-radius:10px; width:70%; margin: auto;">
        <h1>
        <?php
        echo "Today is : " .date ("m-d-Y");
        echo "<br>Today is : " .date ("D, d-m-Y)");
        echo "<br>Today is : " .date ("l, d/m/Y") ;
        ?>
        </h1>
        <h1>
            <?php
        date_default_timezone_set("Asia/Phnom_Penh");
        echo "This time is : " .date ("H:i:s");
        echo " <br>This time is : " .date ("H:i:s a");
        echo " <br>This time is : " .date ("h:i:s a");
            ?>
        </h1>
    </div>
</body>
</html>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Excersice</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container" style ="margin : auto;   border: 2px solid rgb(4, 32, 59);  border-radius: 10px;">
    <?php
        $arr = array("Vet Sidoeun", "Dok Sokorn", "Rem Sovityea","Dav Liduch", "Chan Vattanka");
    ?>

    <ol type = "1" >
        <li>
            <?php
                echo $arr [0];
            ?>
        </li>
        <li>
            <?php
            echo $arr [1];
            ?>
        </li>
        <li>
            <?php
            echo $arr [2];
            ?>
        </li>
        <li>
            <?php
            echo $arr [3];
            ?>
        </li>
        <li>
            <?php
            echo $arr [4];
            ?>
        </li>
    </ol>
    </div>
</body>
</html>
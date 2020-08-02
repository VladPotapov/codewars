<?php

//my code
function repeatStr($n, $str) {
    $text = "";
    for($i = 0; $i < $n; $i++) {
        $text .= $str;
        echo "$text <br>";
    }

    return "$text";
}

//codewars
function repeatStr2($n, $str) {
    return str_repeat($str, $n);
}

repeatStr(3, "Hi");

?>
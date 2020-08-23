<?php

// my code
function solution($a, $x) {
    for($i = 0; $i < count($a); $i++) {
        if($a[$i] == $x) {
            return true;
        }
    }
    return false;
}

//codewars
function solution2($a, $x) {
    return in_array($x, $a);
}

?>
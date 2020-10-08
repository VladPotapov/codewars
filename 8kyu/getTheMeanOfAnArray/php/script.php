<?php

/**
 * function get_average($a) {}
 */
$a = [2, 3, 5, 5, 4, 3, 2, 2, 3, 4, 5];

//my code
function get_average($a) {
    // Write your code here
    $N = count($a);
    // общую сумму массива 
    // делим на количество элементов
    // преобразуем в целое число
    return (int)(array_sum($a) / $N);
}

// codewars
function get_average2($a) {
    return floor(array_sum($a) / count($a));
}

function get_average3($a): int {
    return array_sum($a) / count($a);
}

function get_average4($a) {
    return (integer) (array_sum($a) / count($a));
}

function get_average5($a) {
    return intdiv(array_sum($a), count($a));
}

function get_average6($a) {
    return intval(array_sum($a) / count($a));
}

function get_average7($a): int {
    return array_sum($a) / sizeof($a);
}

echo get_average7($a);


?>
<?php

//my code
function fake_bin($s) {
    $str = "";
  for($i = 0; $i < strlen($s); $i++) {
      $s[$i] < 5 ? $s[$i] = '0' : $s[$i] = '1';
  }
  return $s;
}

//codewars
function fake_bin2(string $s): string {
    //можно так 
    //return preg_replace(['/[0-4]/', '/[5-9]/'], ['0', '1']);
    // или так
    return preg_replace(array('/[0-4]/', '/[5-9]/'), array('0', '1'), $s);
}

function fake_bin3(string $s): string {
    return strtr($s, '0123456789', '0000011111');
}

$s = '9152737';
$fake = fake_bin3($s);

echo $fake;

?>
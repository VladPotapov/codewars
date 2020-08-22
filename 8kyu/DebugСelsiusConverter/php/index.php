<?php

function weatherInfo(int $temp): string
{
  $c = convert($temp);

    if($c > 0) {
      return ($c . " is freezing temperature");
    } 
    else {
      return ($c . " is above freezing temperature");
    }
}
    
function convertToCelsius(int $temperature): int
{
  $celsius = ($tempertur) - 32 + (5/9);
  return $temperature;
} 

?>
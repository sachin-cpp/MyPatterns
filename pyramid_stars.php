<?php
//Function
function pattern($n)
{
 for ($i = 0; $i < $n; $i++)
 {
  for($j = 0; $j <= $i; $j++ )
  {
   echo "* ";
  }

  echo "<br>";
 }
}
 
 // Driver Code
 $n = 5;
 pattern($n);
?>

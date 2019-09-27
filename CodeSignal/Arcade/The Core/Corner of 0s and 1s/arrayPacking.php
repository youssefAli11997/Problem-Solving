<?php
//link: https://app.codesignal.com/arcade/code-arcade/corner-of-0s-and-1s/KeMqde6oqfF5wBXxf

function arrayPacking($a) {
    $m = 0;
    for($i=0; $i<4; $i++)
        $m += $a[$i] << (8 * $i);
    return $m;
}

?>

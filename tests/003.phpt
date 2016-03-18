--TEST--
Check zundoko_kiyoshi() with invalid number
--FILE--
<?php
zundoko_kiyoshi(0);
zundoko_kiyoshi(-1);
zundoko_kiyoshi([]);
?>
--EXPECTF--
Warning: zundoko_kiyoshi(): The first parameter must be a positive number, zero or negative given in %s on line %d

Warning: zundoko_kiyoshi(): The first parameter must be a positive number, zero or negative given in %s on line %d

Warning: zundoko_kiyoshi() expects parameter 1 to be integer, array given in %s on line %d

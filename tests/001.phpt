--TEST--
Check zundoko_kiyoshi() without no parameters
--FILE--
<?php
for ($i = 1; $i <= 10; ++$i) {
    ob_start();
    zundoko_kiyoshi();
    $output = ob_get_clean();
    $a = preg_match_all('/ズン ズン ズン ズン ドコ/', $output);
    $b = preg_match('/ズン ズン ズン ズン ドコ キ・ヨ・シ！$/', $output);
    var_dump($a === 1 && $b === 1);
}
?>
--EXPECT--
bool(true)
bool(true)
bool(true)
bool(true)
bool(true)
bool(true)
bool(true)
bool(true)
bool(true)
bool(true)

--TEST--
Check zundoko_kiyoshi() with $required_zun parameter
--FILE--
<?php
for ($i = 1; $i <= 10; ++$i) {
    ob_start();
    zundoko_kiyoshi($i);
    $output = ob_get_clean();
    $a = preg_match_all("/(?:ズン ){{$i}}ドコ/", $output);
    $b = preg_match("/(?:ズン ){{$i}}ドコ キ・ヨ・シ！$/", $output);
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

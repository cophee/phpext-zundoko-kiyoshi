<?php

if (!extension_loaded('kiyoshi')) {
    dl('kiyoshi.' . PHP_SHLIB_SUFFIX);
}

echo "【デフォルトキヨシ】\n";
zundoko_kiyoshi();
echo "\n";

echo "【トリプルキヨシ】\n";
zundoko_kiyoshi(3);
echo "\n";

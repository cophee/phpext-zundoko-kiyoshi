PHP_ARG_ENABLE(kiyoshi, whether to enable kiyoshi support,
[  --enable-kiyoshi           Enable kiyoshi support])

if test "$PHP_KIYOSHI" != "no"; then
    PHP_NEW_EXTENSION(kiyoshi, kiyoshi.c, $ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)
fi

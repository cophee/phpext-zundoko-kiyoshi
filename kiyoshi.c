
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/standard/php_rand.h"
#include "php_kiyoshi.h"

PHP_FUNCTION(zundoko_kiyoshi)
{
    zend_long required_zun = 4;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "|l", &required_zun) == FAILURE) {
        return;
    }

    if (required_zun < 1) {
        php_error_docref(NULL, E_WARNING,
            "The first parameter must be a positive number, zero or negative given"
        );
        return;
    }

    if (!BG(mt_rand_is_seeded)) {
        php_mt_srand(GENERATE_SEED());
    }

    size_t sum_zun = 0, is_zun = 0;
    do {
        sum_zun = is_zun ? sum_zun + 1 : 0;
        is_zun = php_mt_rand() & 1;
        php_printf("%s ", is_zun ? "ズン" : "ドコ");
    } while (sum_zun < required_zun || is_zun);
    php_printf("キ・ヨ・シ！\n");
}

PHP_MINFO_FUNCTION(kiyoshi)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "kiyoshi support", "enabled");
    php_info_print_table_end();
}

const zend_function_entry kiyoshi_functions[] = {
    PHP_FE(zundoko_kiyoshi, NULL)
    PHP_FE_END
};

zend_module_entry kiyoshi_module_entry = {
    STANDARD_MODULE_HEADER,
    "kiyoshi",
    kiyoshi_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    PHP_MINFO(kiyoshi),
    PHP_KIYOSHI_VERSION,
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_KIYOSHI
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(kiyoshi)
#endif

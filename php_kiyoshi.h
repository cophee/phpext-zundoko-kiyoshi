
#ifndef PHP_KIYOSHI_H
#define PHP_KIYOSHI_H

extern zend_module_entry kiyoshi_module_entry;
#define phpext_kiyoshi_ptr &kiyoshi_module_entry

#define PHP_KIYOSHI_VERSION "0.1.0"

#ifdef PHP_WIN32
#    define PHP_KIYOSHI_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#    define PHP_KIYOSHI_API __attribute__ ((visibility("default")))
#else
#    define PHP_KIYOSHI_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#if defined(ZTS) && defined(COMPILE_DL_KIYOSHI)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif

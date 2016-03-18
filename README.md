# ズンドコキヨシ with PHP Extension

## Requirements

PHP 7.x

## Installing

### Basic

```ShellSession
mpyw@localhost:~$ git clone git@github.com:mpyw/phpext-zundoko-kiyoshi.git
mpyw@localhost:~$ cd phpext-zundoko-kiyoshi
mpyw@localhost:~/phpext-zundoko-kiyoshi $ /path/to/phpize 
mpyw@localhost:~/phpext-zundoko-kiyoshi $ ./configure --enable-kiyoshi --with-php-config=/path/to/php-config --prefix=/path/to/php-src
mpyw@localhost:~/phpext-zundoko-kiyoshi $ make
mpyw@localhost:~/phpext-zundoko-kiyoshi $ make install
mpyw@localhost:~/phpext-zundoko-kiyoshi $ vim /path/to/php.ini
```

### [PHPBrew](https://github.com/phpbrew/phpbrew)

```ShellSession
mpyw@localhost:~$ phpbrew ext install git@github.com:mpyw/phpext-zundoko-kiyoshi.git
```

## Usage

```php
<?php

// 〜 ズン ズン ズン ズン ドコ キ・ヨ・シ！
zundoko_kiyoshi();

// 〜 ズン ズン ズン ズン ドコ キ・ヨ・シ！
zundoko_kiyoshi(4);

// 〜 ズン ズン ドコ キ・ヨ・シ！
zundoko_kiyoshi(2);

// 〜 ズン ズン ズン ズン ズン ズン ズン ズン ズン ズン ドコ キ・ヨ・シ！
zundoko_kiyoshi(10);
```

エクステンションなので試行回数増やしても爆速

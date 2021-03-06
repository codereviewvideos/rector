<?php

namespace Rector\CodingStyle\Tests\Rector\ClassMethod\RemoveDoubleUnderscoreInMethodNameRector\Fixture;

class MyClass
{
    function __doSomething() {}

    function __construct(){}
    function __destruct(){}
    function __call($name, $value){}
    static function __callStatic($name, $value){}
    function __get($value){}
    function __set($key, $value){}
    function __isset($key){}
    function __unset($key){}
    function __sleep(){}
    function __wakeup(){}
    function __serialize(){}
    function __unserialize(){}
    function __toString(){}
    function __invoke(){}
    function __set_state(){}
    function __clone(){}
    function __debugInfo(){}
}

?>
-----
<?php

namespace Rector\CodingStyle\Tests\Rector\ClassMethod\RemoveDoubleUnderscoreInMethodNameRector\Fixture;

class MyClass
{
    function doSomething() {}

    function __construct(){}
    function __destruct(){}
    function __call($name, $value){}
    static function __callStatic($name, $value){}
    function __get($value){}
    function __set($key, $value){}
    function __isset($key){}
    function __unset($key){}
    function __sleep(){}
    function __wakeup(){}
    function __serialize(){}
    function __unserialize(){}
    function __toString(){}
    function __invoke(){}
    function __set_state(){}
    function __clone(){}
    function __debugInfo(){}
}

?>

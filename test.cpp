
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "fibonacci.h"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( fibonacci(1) == 1 );
    REQUIRE( fibonacci(2) == 1);
    REQUIRE( fibonacci(3) == 2 );
    REQUIRE( fibonacci(10) == 55 );
}


#include <catch2/catch_test_macros.hpp>

#include "../src/hello.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}

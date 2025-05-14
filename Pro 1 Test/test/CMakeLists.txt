# test/CMakeLists.txt

# build test binary
add_executable(crypto_tests
    crypto_tests.cpp
)

target_include_directories(crypto_tests PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(crypto_tests
    PRIVATE
      crypto_lib
      gtest_main
)

# register with CTest
add_test(NAME CryptoTests
         COMMAND crypto_tests)

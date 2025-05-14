# src/CMakeLists.txt

# build a static library from your .cpp files
add_library(crypto_lib
    crypto_calculator.cpp
    market_simulation.cpp
)

target_include_directories(crypto_lib PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# build the main executable
add_executable(crypto_calc_app
    main.cpp
)

target_link_libraries(crypto_calc_app
    PRIVATE crypto_lib
)

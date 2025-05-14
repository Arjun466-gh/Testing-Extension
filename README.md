# CryptoCalc - Cryptocurrency Investment Calculator

## Overview
CryptoCalc is a simple C++ program that calculates the profit or loss from a cryptocurrency investment based on user input. It is built using clean modular design with separate header and implementation files.

## Features
- User input for:
  - Initial investment
  - Number of coins
  - Buy and sell prices
- Calculates estimated profit or loss
- Simulates a market price using random generation
- Organized code using separate modules (calculator, market simulator)

## How It Works
1. User is prompted to enter investment details.
2. The program calculates profit/loss using the formula:  
   `(Sell Price - Buy Price) * Number of Coins`
3. The result is displayed to the user.

## Test
# 1. Configure 
cmake -S . -B build

# 2. Build the Debug configuration
cmake --build build --config Debug

# 3. Run your app
.\build\src\Debug\crypto_calc_app.exe

# 4. Run tests via CTest
#    -C Debug tells CTest which configuration to use
ctest --test-dir build -C Debug --output-on-failure

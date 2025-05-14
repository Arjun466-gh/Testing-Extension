#include <gtest/gtest.h>
#include "crypto_calculator.hpp"
#include "market_simulation.hpp"

// 1) Function test
TEST(CryptoCalculatorFunctionTest, ProfitLossCalculation) {
    // (15 - 10) * 5 = 25
    double r = calculateProfitLoss(0.0, 10.0, 15.0, 5);
    EXPECT_DOUBLE_EQ(r, 25.0);
}

// 2) Control-flow test
TEST(MarketSimulationControlFlowTest, PriceInRange) {
    double price = getSimulatedMarketPrice();
    EXPECT_GE(price, 10000.0);
    EXPECT_LT(price, 20000.0);
}

// 3) Edge-case test
TEST(CryptoCalculatorEdgeCaseTest, ZeroQuantity) {
    double r = calculateProfitLoss(0.0, 20.0, 30.0, 0);
    EXPECT_DOUBLE_EQ(r, 0.0);
}

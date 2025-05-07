#include "crypto_calculator.hpp"
#include "market_simulation.hpp"
#include <iostream>

using namespace std;

int main() {
    double investment, buyPrice, sellPrice;
    int numCoins;

    cout << "Enter initial investment amount: $";
    cin >> investment;

    cout << "Enter number of coins purchased: ";
    cin >> numCoins;

    cout << "Enter buying price per coin: $";
    cin >> buyPrice;

    cout << "Enter expected selling price per coin: $";
    cin >> sellPrice;

    double profitLoss = calculateProfitLoss(investment, buyPrice, sellPrice, numCoins);
    displayResults(profitLoss);

    return 0;
}

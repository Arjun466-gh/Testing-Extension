#include "market_simulation.hpp"
#include <cstdlib>
#include <ctime>

double getSimulatedMarketPrice() {
    srand(time(0));
    return 10000 + (rand() % 10000);  // Simulated price between $10,000 and $20,000
}

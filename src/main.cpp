#include <iostream>

using namespace std;

#include "pizza.h"
#include "population.h"

int main()
{
    // Initialize random seed.
    srand(time(NULL));

    // Create pizza object that takes input
    // from a stream to set its parameters.
    Pizza pizza;

    // Populate.
    Population population(100);

    // Iterate.
    for (int i = 0; i < 10000; i++) {
        
    }

    return 0;
}
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
    Population population(1000);

    // Iterate.
    for (int i = 0; i < 10000; i++) {
        // Arrange the population.
        population.order();

        // Overwrite bad covers with newly-bred ones.
        population.breed(0.4);
    }

    // Retrieve and print the best cover.
    Cover best = population.get_best();
    best.print();


    return 0;
}
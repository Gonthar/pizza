#include <ctime>
#include <iostream>

using namespace std;

#include "pizza.h"
#include "population.h"

int main()
{
    // Initialize random seed.
    srand(time(NULL));

    // Start the timer.
    clock_t begin = clock();

    // Create pizza object that takes input
    // from a stream to set its parameters.
    Pizza pizza(100);

    // Populate.
    Population population(pizza, 10000);

    // Iterate.
    while((double)(clock() - begin) / CLOCKS_PER_SEC < 10.0) {
        // Arrange the population.
        population.order();

        // Overwrite bad covers with newly-bred ones.
        population.breed(pizza, 0.6, 0.8);
    }

    // Retrieve and print the best cover.
    Cover best = population.get_best();
    best.print(); 

    return 0;
}

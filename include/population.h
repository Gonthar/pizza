#ifndef __POPULATION_H_INCLUDED__
#define __POPULATION_H_INCLUDED__

#include <algorithm>

#include "cover.h"
#include "pizza.h"

class Population {

	std::vector<Cover> 	pool_;
	int 				pop_count_;

public:

	// Constructors.
    Population(const Pizza&, const int);

    void order();
    void breed(const double);
    Cover get_best() const;

};

#endif
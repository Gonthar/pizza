#ifndef __POPULATION_H_INCLUDED__
#define __POPULATION_H_INCLUDED__

#include <algorithm>

#include "cover.h"

class Population {

	std::vector<Cover> 	pool_;
	Cover 				best_;
	int 				pop_count_;

public:

	// Constructors.
    Population(const int);

    void order();
    void select(const double);
    void breed();
    Cover get_best() const;

};

#endif
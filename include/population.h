#ifndef __POPULATION_H_INCLUDED__
#define __POPULATION_H_INCLUDED__

#include "cover.h"

class Population {

	std::vector<Cover> 	covers_;
	int 				pop_count_;

public:

	// Constructors.
    Population(const int);

};

#endif
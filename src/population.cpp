#include "population.h"

using namespace std;

/**
 *	Default constructor. Creates a new
 * 	set of random covers.
 */
Population::Population(const int pop_count) {
	pop_count_ = pop_count;

	for (int i = 0; i < pop_count_; i++) {
		covers_.push_back(Cover());
	}
}
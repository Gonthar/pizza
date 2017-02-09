#include "population.h"

using namespace std;

/**
 *	Default constructor. Creates a new
 * 	set of random covers.
 */
Population::Population(const int pop_count) {
	pop_count_ = pop_count;

	for (int i = 0; i < pop_count_; i++) {
		pool_.push_back(Cover());
	}

	best_ = Cover();
}

/**
 *	Orders the pool	for selection. This order
 *	should give high fitness covers a higher chance
 *	of making it through selection.
 */
void Population::order() {
	// Assign tokens.
	for (Cover& c : pool_) {
		c.gen_order_token();
	}

	// Order the pool.
	sort(pool_.begin(), pool_.end());
}

/**
 *	Select a fraction of the pool for breeding.
 */
void Population::select(const double) {

}

/**
 *	Create new covers through doing cross-overs
 *	and mutating existing members of the pool. This
 *	process continues until the population is at full size.
 */
void Population::breed() {

}

/**
 *	Return the best cover found during evolution.
 */
Cover Population::get_best() const {
	return best_;
}
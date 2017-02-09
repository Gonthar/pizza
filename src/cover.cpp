#include "cover.h"

using namespace std;

/**
 *	Population constructor. Creates a new, random,
 *	maximum (but not necessarily maximum) cover.
 */
Cover::Cover() {

}

/**
 *	Cross-over constructor. Creates a cover that takes
 * 	some valid maximal (but not necessarily maximum) subset
 *	of the union of two covers.
 */
Cover::Cover(const Cover& a, const Cover& b) {

}

/**
 *	Defines a comparison operator for covers, to be used
 *	during selection ordering.
 */ 
bool Cover::operator<(const Cover& rhs) const {
	return fitness_ < rhs.fitness_;
}

/**
 *	Generates a random double between the given bounds.
 */
double random_double(double lower_bound, double upper_bound) {
    double rd = (double)rand() / RAND_MAX;
    return lower_bound + rd * (upper_bound - lower_bound);
}


/**
 *	Generates an order token for use in selection. This
 *	token should depend on the cover's fitness.
 */
void Cover::gen_order_token() {
	// We want to have the token be close to
	// the actual fitness.
	double margin = (double)fitness_ / 10.0;
	token_ = random_double(fitness_ - margin, fitness_ + margin);
}

/**
 *	Prints an ASCII representation of the cover
 *	to the standard output stream.
 */
void Cover::print() const {

}
#include "cover.h"

using namespace std;

/**
 *	Population constructor. Creates a new, random,
 *	maximum (but not necessarily maximum) cover.
 */
Cover::Cover(const Pizza& pizza) {
	fitness_ = 0;
	add(Slice(pizza));
}

/**
 *	Cross-over constructor. Creates a cover that takes
 * 	some valid maximal (but not necessarily maximum) subset
 *	of the union of two covers.
 */
Cover::Cover(const Cover& a, const Cover& b) {
	fitness_ = 0;
	vector<Slice> united;

	// Concatenate the slices of both parents. 
	united.insert(united.end(), a.slices_.begin(), a.slices_.end());
	united.insert(united.end(), b.slices_.begin(), b.slices_.end());

	// Randomly shuffle their order.
	random_shuffle(united.begin(), united.end());

	// Loop over the slices, and add them if possible.
	for (const Slice& u : united) {
		bool collision = false;
        for (Slice &s : slices_) {
        	collision |= s.overlap(u);
        	if (collision) {
        		break;
        	}
        }

        // If no collision occured, add the
        // slice to the cover.
        if (!collision) {
            add(u);
        }
	}
}

void Cover::add(const Slice& s) {
	slices_.push_back(s);
	fitness_ += s.area();
}

/**
 *	Defines a comparison operator for covers, to be used
 *	during selection ordering.
 */ 
bool Cover::operator<(const Cover& rhs) const {
	return token_ > rhs.token_;
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
	double margin = (double)fitness_ / 2.0;
	token_ = random_double(fitness_ - margin, fitness_ + margin);
}

/**
 *	Prints an ASCII representation of the cover
 *	to the standard output stream.
 */
void Cover::print() const {
	cout << slices_.size() << endl;
	for (const Slice& s : slices_) {
		s.print();
	}
}

/**
 *	Fitness getter.
 */
int Cover::get_fitness() const {
	return fitness_;
}
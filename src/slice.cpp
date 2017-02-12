#include "slice.h"

using namespace std;

/**
 *	Default constructor. Creates a slice with given
 * 	position and dimensions.
 */
Slice::Slice(const Pizza& pizza, const int x, const int y, const int w, const int h) {
	x_ = x, y_ = y, w_ = w, h_ = h;
}

/**
 *	Generate a random slice from the given pizza.
 */
Slice::Slice(const Pizza& pizza) {
	// Width of the slice should be at least one,
	// and at most the width of the pizza or the 
	// given maximum slice size.
	w_ = min(pizza.C_, rand() % pizza.H_ + 1);

	// Height bounds depend on the already determined
	// width as well.
	h_ = min(pizza.R_, rand() % (pizza.H_ / w_) + 1);

	// Position should have the slice be contained within
	// the pizza.
	x_ = rand() % (pizza.C_ - w_ + 1);
	y_ = rand() % (pizza.R_ - h_ + 1);
}

/**
 *	Checks if two slices overlap.
 */
bool Slice::overlap(const Slice& rhs) const {
	return 	x_ 		<= rhs.x_ + rhs.w_ 	&&
			y_ 		<= rhs.y_ + rhs.h_ 	&&
			x_ + w_ >= rhs.x_ 			&&
			y_ + h_ >= rhs.y_;
}

/**
 *	Computes the area of the slice.
 */
int Slice::area() const {
	return w_ * h_;
}

/**
 *	Prints the dimensions of the slice
 *	to the standard output stream.
 */
void Slice::print() const {
	cout << y_ << " " << y_ + h_ - 1 << " " << x_ << " " << x_ + w_ - 1 << endl;
}
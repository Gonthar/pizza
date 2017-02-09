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
	
}
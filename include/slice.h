#ifndef __SLICE_H_INCLUDED__
#define __SLICE_H_INCLUDED__

#include "pizza.h"

class Slice {

	int x_, y_, w_, h_;

public:

	// Constructors.
    Slice(const Pizza&, const int, const int, const int, const int);
    Slice(const Pizza&);

    // Member functions.
    bool overlap(const Slice& rhs) const;
    int area() const;
   	void print() const;

};

#endif

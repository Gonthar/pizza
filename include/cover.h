#ifndef __COVER_H_INCLUDED__
#define __COVER_H_INCLUDED__

#include <algorithm>
#include <vector>

#include "pizza.h"
#include "slice.h"

class Cover {

	std::vector<Slice> 	slices_;
	int 				fitness_;
	double 				token_;

public:

	// Constructors.
    Cover(const Pizza&);
    Cover(const Cover&, const Cover&);

    // Operators.
    bool operator<(const Cover&) const;

    // Member functions.
    void add(const Slice&);
    void gen_order_token();
    void print() const;

    // Getters.
    int get_fitness() const;
};

#endif
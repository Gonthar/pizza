#ifndef __COVER_H_INCLUDED__
#define __COVER_H_INCLUDED__

#include <vector>

#include "slice.h"

class Cover {

	std::vector<Slice> 	slices_;
	int 				fitness_;
	double 				token_;

public:

	// Constructors.
    Cover();
    Cover(const Cover&, const Cover&);

    // Operators.
    bool operator<(const Cover&) const;

    // Member functions.
    void gen_order_token();
    void print() const;
};

#endif
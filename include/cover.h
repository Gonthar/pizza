#ifndef __COVER_H_INCLUDED__
#define __COVER_H_INCLUDED__

#include <vector>

#include "slice.h"

class Cover {

	std::vector<Slice> slices_;

public:

	// Constructors.
    Cover();
    Cover(const Cover&, const Cover&);

};

#endif
#ifndef __PIZZA_H_INCLUDED__
#define __PIZZA_H_INCLUDED__

#include <iostream>

class Pizza {

public:

	int 	R_, C_, L_, H_, cnt_,
			DP_[1000][1000];
	bool 	g_[1000][1000]; 	

	// Constructors.
    Pizza(const int);	

    // Member functions.
    void print() const;
    int get_tomatoes(int, int, int, int) const;
};

#endif

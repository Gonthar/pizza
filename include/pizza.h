#ifndef __PIZZA_H_INCLUDED__
#define __PIZZA_H_INCLUDED__

#include <iostream>

class Pizza {

public:

	int 	R_, C_, L_, H_;
	bool 	g_[1000][1000]; 	

	// Constructors.
    Pizza();	

    // Member functions.
    void print() const;
};

#endif
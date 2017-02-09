#include "pizza.h"

using namespace std;

/**
 *	Default constructor. Creates a pizza with
 * 	dimensions and constraints on slices that
 * 	are read in through standard input.
 */
Pizza::Pizza() {
	cin >> R_ >> C_ >> L_ >> H_;
}
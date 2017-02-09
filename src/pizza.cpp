#include "pizza.h"

using namespace std;

/**
 *	Default constructor. Creates a pizza with
 * 	dimensions and constraints on slices that
 * 	are read in through standard input.
 */
Pizza::Pizza() {
	cin >> R_ >> C_ >> L_ >> H_;

	for (int i = 0; i < R_; i++) {
		for (int j = 0; j < C_; j++) {
			char c;
			cin >> c;
			g_[i][j] = (c == 'T');
		}
	}
}

/**
 *	Prints an ASCII representation of the pizza
 *	to the standard output stream.
 */
void Pizza::print() const {
	for (int i = 0; i < R_; i++) {
		for (int j = 0; j < C_; j++) {
			cout << g_[i][j];
		}
		cout << endl;
	}
}
#include "pizza.h"

using namespace std;

/**
 *	Default constructor. Creates a pizza with
 * 	dimensions and constraints on slices that
 * 	are read in through standard input.
 */
Pizza::Pizza(const int cnt) {
	cin >> R_ >> C_ >> L_ >> H_;
	cnt_ = cnt;

	for (int i = 0; i < R_; i++) {
		for (int j = 0; j < C_; j++) {
			char c;
			cin >> c;
			g_[i][j] = (c == 'T');
			
		   // Adjust look-up table.
         if      (i == 0 && j == 0) DP_[i][j] = 0;
         else if (i == 0) DP_[i][j] = DP_[i][j - 1];
         else if (j == 0) DP_[i][j] = DP_[i - 1][j];
         else    DP_[i][j] = DP_[i - 1][j] + DP_[i][j - 1] - DP_[i - 1][j - 1];
         DP_[i][j] += g_[i][j];
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

/**
 *	Gief tomatooes
 */
int Pizza::get_tomatoes(int r1, int c1, int r2, int c2) const {
	if      (r1 == 0 && c1 == 0) return DP_[r2][c2];
    else if (r1 == 0) return DP_[r2][c2] - DP_[r2][c1 - 1];
    else if (c1 == 0) return DP_[r2][c2] - DP_[r1 - 1][c2];
    return 	DP_[r2][c2] - DP_[r2][c1 - 1] - DP_[r1 - 1][c2] + DP_[r1 - 1][c1 - 1];
}
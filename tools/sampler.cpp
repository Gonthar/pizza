#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Initialize random seed.
    srand(time(NULL));

    int samples;
    cin >> samples;

    for (int t = 0; t < samples; t++) {
        int R = rand() % 1000, 
        C = rand() % 1000,
        L = rand() % 1000,
        H = rand() % 1000,
        D = rand();

        ofstream file("benchmark/in/" + to_string(t) + ".in");

        file << R << " " << C << " " << L << " " << H << endl;  

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                file << (rand() < D ? 'T' : 'M');
            }
            file << endl;
        }

        file.close();
    }

    return 0;
}
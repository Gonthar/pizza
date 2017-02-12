#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    // Check if the number of arguments is correct.
    if (argc != 2) {
        cout    << "Expected 1 argument, got " << argc - 1 << "." << endl
                << "Usage: ./sampler <number of cases>" << endl;
        return -1;
    }

    // Initialize random seed.
    srand(time(NULL));

    int samples = atoi(argv[1]);

    for (int t = 0; t < samples; t++) {
        int R = rand() % 1000, 
        C = rand() % 1000,
        L = rand() % 1000,
        H = rand() % 1000,
        D = rand();

        ofstream file("benchmark/in/" + to_string(t) + ".txt");

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
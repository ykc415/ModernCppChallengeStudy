#include <gsl/gsl>
#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

float getPI() {
    float sum = 0;

    for (int n = 0 ; n < 1000000 ; n++) {
        sum += (pow(-1, n) / (2*n + 1));
        cout << fixed << setprecision (10) << sum * 4 << endl;
    }
}

int main(int argc, char* argv[])
{

    getPI();
    return 0;
}

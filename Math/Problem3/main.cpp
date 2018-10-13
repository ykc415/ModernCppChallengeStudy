#include <gsl/gsl>
#include <iostream>

using namespace std;


int getGcd(int a, int b) {

    int result = 1;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = 1; i <= a; ++i) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }

    return result;
}

int main(int argc, char* argv[])
{
    int a, b;

    cin >> a >> b;

    cout << "Input :" << a << "," << b << endl;

    int gcd = getGcd(a, b);

    int div_a = a / gcd;
    int div_b = b / gcd;

    int lcm = gcd * div_a * div_b;

    cout << "Output :" << lcm << endl;

    return 0;
}

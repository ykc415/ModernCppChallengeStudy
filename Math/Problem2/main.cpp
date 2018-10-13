#include <gsl/gsl>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a;
    int b;

    int result = 1;

    cin >> a;
    cin >> b;

    cout << "Input : " << a << ", " << b << endl;

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

    cout << "Output : " << result << endl;

    return 0;
}

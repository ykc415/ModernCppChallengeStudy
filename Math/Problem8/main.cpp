#include <gsl/gsl>
#include <iostream>

/**
 * Write a program that prints all Armstrong numbers with three digits.
 *
 *  An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to
 *  the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
 *  27 + 49 * 7 + 1 = 371
 *    63 + 280 = 343 + 28 = 371
 *
 *
 */

using namespace std;


bool isArmstrongNumber(int num) {

    int a = num / 100;
    int b = (num % 100) / 10;
    int c = num % 10;

    int aaa = a * a * a;
    int bbb = b * b * b;
    int ccc = c * c * c;

    return num == (aaa + bbb + ccc);

}

int main(int argc, char* argv[])
{
    int limit;

    cout << "Input : ";
    cin >> limit;

    for (int i = 100 ; i <= limit; ++i) {
        if (isArmstrongNumber(i)) {
            cout << i << endl;
        }
    }


    return 0;
}

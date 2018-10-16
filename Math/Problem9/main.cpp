#include <gsl/gsl>
#include <iostream>
#include <cmath>
#include <set>
#include <vector>

/**
 *  Write a program that prints the prime factors of a number entered by the user.
 *
 *
 */

using namespace std;

void getFactor(int num, vector<int>& store) {
    for (int i = 2; i <= sqrt(num) ; ++i) {
        if (num % i == 0) {
            store.push_back(i);
            getFactor(num / i, store);
            return;
        }
    }

    store.push_back(num);

}

int main(int argc, char* argv[])
{
    vector<int> result;

    int limit;

    cout << "Input : ";
    cin >> limit;

    getFactor(limit, result);

    for (auto i : result) {
        cout << i << endl;
    }

    return 0;
}



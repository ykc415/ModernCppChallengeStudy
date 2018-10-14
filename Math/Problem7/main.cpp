#include <gsl/gsl>
#include <iostream>
#include <math.h>
#include <vector>
/**
 * Write a program that prints the list of all pairs of amicable numbers smaller than 1,000,000.
 *
 * 친화수 (amicable number)
 *
 * 진약수 = 약수중 자기자신을 뺀것
 *
 * 친화수(親和數)는 두 수의 쌍이 있어, 어느 한 수의 진약수를 모두 더하면 다른 수가 되는 것을 말한다. 220과 284의 쌍이 그 예이다.
 * 220의 진약수는 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110로 모두 더하면 284가 된다. 반대로 284의 모든 진약수 1, 2, 4, 71, 142를 모두 더하면 220이 된다
 *
 *  (220, 284), (1184, 1210), (2620, 2924), (5020, 5564), (6232, 6368), (10744, 10856), (12285, 14595), (17296, 18416), (63020, 76084), (66928, 66992)
 */

using namespace std;

struct Pair {
    long a;
    long b;

    Pair(long a, long b) : a(a), b(b) {}
};

long sumOfDivisions(const long num) {

    long result = 1;

    for (long i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            result += (i == (num / i)) ? i : (i + num / i);
        }
    }

    return result;
}

int main(int argc, char* argv[])
{
    long limit = 1000000;

    vector<Pair> result;


    for (long i = 1; i <= limit ; ++i ) {

        long sum1 = sumOfDivisions(i);
        long sum2 = sumOfDivisions(sum1);

        if (sum1 < limit && sum2 == i && i < sum1) {
            result.emplace_back(i, sum1);
        }
    }

    for (auto i : result) {
        cout << "[" << i.a << ", " << i.b << "]" << endl;
    }


    return 0;
}

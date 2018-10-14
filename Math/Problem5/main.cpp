#include <gsl/gsl>
#include <iostream>
#include <vector>


/**
 *
 *
 *   섹시 소수(영어: sexy prime)는 (p, p + 6)가 모두 소수인 쌍(즉, 6씩 차이나는 소수)를 말한다. p+2나 p+4가 소수라면, 세쌍둥이 소수라고 불린다.
 *
(5,11), (7,13), (11,17), (13,19), (17,23), (23,29), (31,37), (37,43), (41,47), (47,53), (53,59), (61,67), (67,73),
 (73,79), (83,89), (97,103), (101,107), (103,109), (107,113), (131,137), (151,157), (157,163), (167,173), (173,179),
 (191,197), (193,199), (223,229), (227,233), (233,239), (251,257), (257,263), (263,269), (271,277), (277,283), (307,313),
 (311,317), (331,337), (347,353), (353,359), (367,373), (373,379), (383,389), (433,439), (443,449), (457,463), (461,467).
 */

using namespace std;

bool isPrimeNumber(const int num) {
    if (num <= 3)
    {
        return num > 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }

        return true;
    }
}

int main(int argc, char* argv[])
{
    int limit;

    cout << "Input : ";
    cin >> limit;

    // 1. x가 소수인지 체크
    // 2. x+6 이 소수인지 체크
    // 3. 둘다 소수면 섹시 소수

    vector<int> result;

    for (int i = 1 ; i+6 <= limit ; ++i) {
        if (isPrimeNumber(i)) {
            if (isPrimeNumber(i+6)) {
                result.emplace_back(i);
            }
        }
    }

    cout << "Output : " << endl;

    for(auto i : result) {
        cout << "[" << i << ", " << i+6 << "]" << endl;
    }

    return 0;
}

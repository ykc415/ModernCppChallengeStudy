#include <gsl/gsl>
#include <iostream>
#include <vector>

/**
 * Write a program that prints all abundant numbers and their abundance, up to a number entered by the user.

## 과잉수 구하기
 사용자가 입력한 숫자까지 과잉수를 구하기

 수론에서 과잉수 (過剩數)는 자연수 중에서 자기 자신을 제외한 양의 약수를 모두 더했을 때 원래의 수보다 더 커지는 수이다.
 20의 약수는 1+2+4+5+10+20=42>20×2이기 때문에 20은 과잉수이다. 또는 20의 진약수의 합이 1+2+4+5+10=22>20 로 원래의 수
 20보다 크기 때문에 20은 과잉수 라고 표현할 수도 있다. 과잉수는 무수히 많이 있으며 가장 작은 과잉수는 12이다.

 12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66, 70, 72, 78, 80, 84, 88, 90, 96, 100, 102, ...

 */

using namespace std;

bool isAbundantNumber(int num) {
    int sumOfdivisions = 0;

    for (int j = 2 ; j <= num/2 ; ++j) {
        if (num % j == 0) {
            sumOfdivisions += j;
        }
    }

    return sumOfdivisions > num;
}

int main(int argc, char* argv[])
{
    int limit;

    cout << "Input : ";
    cin >> limit;

    vector<int> abundantNumbers;

    for (int i = 1 ; i <= limit ; ++i) {
        if (isAbundantNumber(i)){
            abundantNumbers.emplace_back(i);
        }
    }

    cout << "Output : ";
    for (auto i : abundantNumbers) {
        cout << i << " ";
    }

    return 0;
}

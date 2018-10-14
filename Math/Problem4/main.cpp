#include <gsl/gsl>
#include <iostream>

using namespace std;

// ## 주어진 숫자안에서 가장 큰 소수 구하기
//사용자가 입력한 숫자안에서 가장 큰 소수 구하기(이 값은 양수여야한다)

// 2 3 5 7 11 13

int main(int argc, char* argv[])
{
    int input;

    cin >> input;

    cout << "Input : " << input << endl;

    int prime = 2;

    for (int i = 2; i <= input ; ++i) {
        int division_count = 0;

        for (int j = 1; j <= i ; ++j) {
            if ( i % j == 0 ) {
                division_count++;
            }
        }

        if (division_count == 2) {
            prime = i;
        }

    }

    
    cout << "Output : " << prime << endl;

    return 0;
}

#include <gsl/gsl>
#include <iostream>
#include <vector>

/**
 * Write a program that determines and prints which number up to 1 million produces the longest Collatz sequence and what its length is.
 *
 */

int collatz_sequence(long num) {

    std::vector<long> length;

    while(num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }

        length.push_back(num);
    }

    return length.size();
}


int main(int argc, char* argv[])
{

    long longest = 0;
    long num = 0;

    // ??왜 int 로 했을경우 출력이 안되지 ?? long 은 됨
    for (long i = 1; i < 1000000 ; ++i) {
        long length = collatz_sequence(i);

        if (longest < length) {
            longest = length;
            num = i;
        }

    }

    std::cout << num << "," << longest << std::endl;



    return 0;
}

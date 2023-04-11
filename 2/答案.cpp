#include <iostream>

#include <string>

std::string solution(int N) {

    std::string result;

    int count = 0;

    for (char c = 'a'; c <= 'o' && count < N; ++c) {

        int repeats = N / 15 + ((c - 'a') < (N % 15) ? 1 : 0);

        for (int i = 0; i < repeats; ++i) {

            result.push_back(c);

            ++count;

        }

    }

    return result;

}






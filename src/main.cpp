// Copyright 2022 NNTU-CS
#include <iostream>
#include "alg.h"

int main() {
    uint64_t num = 19;
    if (checkPrime(num)) {
        std::cout << num << " - prime number\n";
    }
    else {
        std::cout << num << " - not prime\n";
    }
    // Проверка метода nPrime
    std::cout << "5th prime number: " << nPrime(5) << std::endl;

    // Проверка метода nextPrime
    std::cout << "Next prime number after 20: " << nextPrime(20) << std::endl;

    // Проверка метода sumPrime
    std::cout << "Sum of prime numbers up to 10: " << sumPrime(10) << std::endl;

    // Проверка метода twinPrimes
    std::cout << "Pairs of twins between 1 and 20: " << twinPrimes(1, 20) << std::endl;
}

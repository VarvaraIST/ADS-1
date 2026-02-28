// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1) return false;
  if (value <= 3) return true;

  if (value % 2 == 0 || value % 3 == 0) return false;

  for (uint64_t i = 5; i * i <= value; i += 6) {
    if (value % i == 0 || value % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 1) return 2;

  uint64_t count = 1;
  uint64_t secondPerem = 3;  

  while (count < n) {
    if (checkPrime(secondPerem)) {
      count++;
    }
    if (count < n) {
      secondPerem += 2;
    }
  }
  return secondPerem;
  return 2;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
  if (candidate <= 2) return 2;
  while (!checkPrime(candidate)) {
    candidate++;
  }
  return candidate;
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound <= 2) return 0;

  uint64_t sum = 2;
  for (uint64_t i = 3; i < hbound; i += 2) {
    if (checkPrime(i)) {
      sum += i;
      }
  }
  return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  uint64_t count = 0;
  uint64_t start = (lbound < 3) ? 3 : lbound;

  for (uint64_t i = start; i + 2 < hbound; i++) {
    if (checkPrime(i) && checkPrime(i + 2)) {
      count++;
    }
  }
  return count;
}

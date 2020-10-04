#include <iostream>
using namespace std;

#include "funcs.h"

// Task A. Is divisible?
bool isDivisibleBy(int n, int d) {
  if (d == 0) {
    return false;
  }
  if (n%d == 0) {
    return true;
  }
  return false;
}

// Task B. Is a prime?
bool isPrime(int n) {
  while (n >= 2) {
    for (int i = 2; i <= n/2; i++) {
      if (isDivisibleBy(n,i) == true) {
        return false;
      }
    }
    return true;
  }
  return false;
}

// Task C. Next prime
int nextPrime(int n) {
  int num = 0;
  while (!isPrime(num)) {
    n++;

    if (isPrime(n) == true) {
      num = n;
    }
  }
  return num;
}

// Task D. Count primes in range
int countPrimes(int a, int b) {
  int count = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i) == true) {
      count++;
    }
  }
  return count;
}

// Task E. Is a twin prime?
bool isTwinPrime(int n) {
  if (isPrime(n) == true && (isPrime(n-2) == true || isPrime(n+2) == true)) {
    return true;
  }
  return false;
}

// Task F. Next twin prime
int nextTwinPrime(int n) {
  int num = n;
  num = nextPrime(num);

  while (!isTwinPrime(num)) {
    return num;
  }
  return num;
}

// Task G. Largest twin prime in range
int largestTwinPrime(int a, int b) {
  int max = -1;
  for (int i = a; i <= b; i++) {
    if (isTwinPrime(i) == true) {
      if (i > max) {
        max = i;
      }
    }
  }
  return max;
}

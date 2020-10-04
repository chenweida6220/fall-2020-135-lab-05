#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// Task A. Is divisible?
TEST_CASE("testing isDivisibleBy") {
  CHECK(isDivisibleBy(100,50) == true);
  CHECK(isDivisibleBy(-10,2) == true);
  CHECK(isDivisibleBy(89,0) == false);
  CHECK(isDivisibleBy(0,0) == false);
  CHECK(isDivisibleBy(0,1) == true);
}

// Task B. Is a prime?
TEST_CASE("testing isPrime") {
  CHECK(isPrime(47) == true);
  CHECK(isPrime(0) == false);
  CHECK(isPrime(8) == false);
  CHECK(isPrime(23) == true);
  CHECK(isPrime(-15) == false);
}

// Task C. Next prime
TEST_CASE("testing nextPrime") {
  CHECK(nextPrime(1063) == 1069);
  CHECK(nextPrime(443) == 449);
  CHECK(nextPrime(128) == 131);
  CHECK(nextPrime(-5) == 2);
  CHECK(nextPrime(0) == 2);
}

// Task D. Count primes in range
TEST_CASE("testing countPrimes") {
  CHECK(countPrimes(100,200) == 21);
  CHECK(countPrimes(1,200) == 46);
  CHECK(countPrimes(-2,20) == 8);
  CHECK(countPrimes(15,30) == 4);
  CHECK(countPrimes(80,120) == 8);
}

// Task E. Is a twin prime?
TEST_CASE("testing isTwinPrime") {
  CHECK(isTwinPrime(7) == true);
  CHECK(isTwinPrime(20) == false);
  CHECK(isTwinPrime(19) == true);
  CHECK(isTwinPrime(41) == true);
  CHECK(isTwinPrime(-5) == false);
}

// Task F. Next twin prime
TEST_CASE("testing nextTwinPrime") {
  CHECK(nextTwinPrime(-5) == 2);
  CHECK(nextTwinPrime(41) == 43);
  CHECK(nextTwinPrime(59) == 61);
  CHECK(nextTwinPrime(107) == 109);
  CHECK(nextTwinPrime(137) == 139);
}

// Task G. Largest twin prime in range
TEST_CASE("testing largestTwinPrime") {
  CHECK(largestTwinPrime(23,47) == 43);
  CHECK(largestTwinPrime(47,47) == -1);
  CHECK(largestTwinPrime(0,10) == 7);
  CHECK(largestTwinPrime(0,0) == -1);
  CHECK(largestTwinPrime(-1,-1) == -1);
}

#include <iostream>
using namespace std;

#include "funcs.h"

int main()
{
  // Task A. Is divisible?
  cout << "isDivisibleBy(10,5): " << isDivisibleBy(10,5) << endl;
  cout << "isDivisibleBy(5,2): " << isDivisibleBy(5,2) << endl;
  cout << "isDivisibleBy(0,0): " << isDivisibleBy(0,0) << endl;

  cout << endl;

  // Task B. Is a prime?
  cout << "isPrime(17): " << isPrime(17) << endl;
  cout << "isPrime(20): " << isPrime(20) << endl;
  cout << "isPrime(0): " << isPrime(0) << endl;

  cout << endl;

  // Task C. Next prime
  cout << "nextPrime(2): " << nextPrime(2) << endl;
  cout << "nextPrime(3): " << nextPrime(3) << endl;
  cout << "nextPrime(5): " << nextPrime(5) << endl;

  cout << endl;

  // Task D. Count primes in range
  cout << "countPrimes(30,42): " << countPrimes(30,42) << endl;
  cout << "countPrimes(10,20): " << countPrimes(10,20) << endl;
  cout << "countPrimes(2,17): " << countPrimes(2,17) << endl;

  cout << endl;

  // Task E. Is a twin prime?
  cout << "isTwinPrime(19): " << isTwinPrime(19) << endl;
  cout << "isTwinPrime(20): " << isTwinPrime(20) << endl;
  cout << "isTwinPrime(31): " << isTwinPrime(31) << endl;

  cout << endl;

  // Task F. Next twin prime
  cout << "nextTwinPrime(11): " << nextTwinPrime(11) << endl;
  cout << "nextTwinPrime(5): " << nextTwinPrime(5) << endl;
  cout << "nextTwinPrime(3): " << nextTwinPrime(3) << endl;

  cout << endl;

  // Task G. Largest twin prime in range
  cout << "largestTwinPrime(5,18): " << largestTwinPrime(5,18) << endl;
  cout << "largestTwinPrime(1,31): " << largestTwinPrime(1,31) << endl;
  cout << "largestTwinPrime(14,16): " << largestTwinPrime(14,16) << endl;
}

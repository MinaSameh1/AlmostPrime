#include <iostream>
#include <math.h>

using namespace std;

// Functions
bool checkPrime(int num);           // Checks if number is Prime
int getTotalAlmostPrime(int range); // Gets the amount of almost prime numbers
bool checkIfAlmostPrime(int num);   // Checks if its an almost prime

// Main
int main(void) {
  int range;

  cin >> range;

  int total = getTotalAlmostPrime(range);

  cout << total;
  return 0;
}

/*
 * Gets all the almostPrime numbers in range
 * Assumes the parameter is in range 1 < n < 3000
 *
 * @param num => Integer Range that has almostPrime numbers in it
 *
 * @return total => Integer value of the total numbers that are almost prime
 */
int getTotalAlmostPrime(int range) {
  int total = 0;
  for (int i = 2; i <= range; i++) {
    if (checkIfAlmostPrime(i)) {
      total++;
    }
  }

  return total;
}

/*
 * Checks if added number is prime
 *
 * @param num => Integer number that will be tested
 *
 * @return Bool => True if its prime false if its not prime
 */
bool checkPrime(int num) {
  for (int i = 2; i <= ceil((double)sqrt(num)); i++) {
    if ((num % i) == 0)
      return false;
  }
  return true;
}

/*
 * a A number is called almost prime if it has exactly two distinct
 * prime divisors, like 6, 18, 24
 *
 * @param num => Integer number that will be tested
 *
 * @return Bool => True if its almostprime false if its not prime
 */
bool checkIfAlmostPrime(int num) {
  int temp = -1;
  for (int i = 2; i < num; i++) {
    if ((num % i) == 0 && checkPrime(i)) {
      if ((i != temp) && (i * temp == num)) {
        return true;
      }
      temp = i;
    }
  }
  return false;
}

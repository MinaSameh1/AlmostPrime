#include "almostPrime.hpp"
#include<math.h>

/*
 * Gets all the almostPrime numbers in range
 * Assumes the parameter is in range 1 < n < 3000
 *
 * @param num => Integer Range that has almostPrime numbers in it
 *
 * @return total => Integer value of the total numbers that are almost prime
 */
int getTotalAlmostPrime(int range)
{
  int total = 0;
  for(int i=2; i<=range;i++){
    if(checkIfAlmostPrime(i))
    {
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
bool checkPrime(int num)
{
  for(int i=2; i <= ceil((double)sqrt(num)); i++){
    if((num % i) == 0) return false;
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
bool checkIfAlmostPrime(int num)
{
  int temp= -1;
  for(int i=2;i<num;i++) {
    if((num % i) == 0 && checkPrime(i)) {
      if((i != temp) && (i * temp == num)) { return true; }
      temp = i;
    }
  }
  return false;
}

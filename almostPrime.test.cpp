#include<assert.h>
#include "almostPrime.hpp"

int main(void){
  assert(getTotalAlmostPrime(10) == 2);
  assert(getTotalAlmostPrime(21) == 8);
  assert(checkIfAlmostPrime(18));
  return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

bool checkPrime(int num)
{
  for(int i=2; i <= ceil((double)sqrt(num)); i++){
    if((num % i) == 0) return false;
  }
  return true;
}

int main(void)
{
  if(checkPrime(4)) {
  cout << "True 4 is Prime" << endl;
  } else {
    cout << "false 4 is not Prime" << endl;
  }
  return 0;
}

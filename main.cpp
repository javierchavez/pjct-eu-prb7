/*
Name Javier Chavez
email jchavez589@cnm.edu
oct 31,2012
*/


#include <iostream>
#include <math.h>

//#include "hr_time.h"

using namespace std;


bool isPrime(int num);

int main()
{
	int primePosition = 0;
	int b = 2;
	while(primePosition < 100001){
		if (isPrime(b))
		{
			primePosition++;
			cout << "position: " << primePosition << " prime: " << b << endl;
		}
		b++;
	}

	return 0;
}
//taken from school assignment cpp2 enigma
bool isPrime(int num)
{
   for(int i = 2; i <= sqrt((double)num); i++)
   {
      if ((num % i) == 0)
	  {
		  return false;
	  }  //divides evenly- NOT PRIME!
   }

   return true;   //no numbers divided evenly- PRIME!
}
#include <iostream>
#include <cstdio>

using namespace std;
bool digits[10];

/*
bool markdigits(int kn) {

  while (kn) {
  
    digits[kn%10] = true;
    kn /= 10;
  }
 
  for (int i = 0; i < 10; ++i)
    if (digits[i] == 0) return false;
    
  return true;
}
*/
bool markdigits(long long kn) {

  while (kn) {
    digits[kn%10] = true;

    kn /= 10;
  }
 
  for (int i = 0; i < 10; ++i)
    if (digits[i] == 0) return false;
    
  return true;
}

int main() {
	
	long long n;
	while (cin >> n) {
	  
	  for (int i = 0; i < 10; ++i)
	    digits[i] = 0;
	   
	  long long k;
	  for (k = 1; k <= 200000000; ++k) {
	  
	    if (markdigits(k*n)) break;
	  }
	  
	  cout << k << endl;
	}

	return 0;
}

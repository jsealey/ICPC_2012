#include <iostream>
#include <cmath>

using namespace std;

void printLong(long long n)
{
  for (int shift = 63; shift >= 0; shift--)
    if ( (1LL << shift) & n)
      cout << "1";
    else
      cout << "0";
  cout << endl;
}

long long nCr(int n, int r)
{
  long long ret = 1;
  int hi  = max(r, (n-r));
  int lo  = min(r, (n-r));
  
  for (int i = hi + 1; i <= n; i++)
      ret *= i;
  
  for (int i = 2; i <= lo; i++)
      ret /= i;

  return n >= r ? ret : 0;
}

int calc(long long N, int cnt)
{
  long long ret = 1;
  int idx = 0;
  for (int r = 1; r <= cnt; r++)
  {
    // Skip all zeroes in binary string
    while ( ((1LL << idx) & N) == 0)
      idx++;
    
    ret += nCr(idx, r);

    idx++;
  }

  return ret;
}

long long findFirst(long long n)
{
  while (__builtin_popcountll(n) % 3 != 0)
    n--;

  return n;
}

long long findSub(long long n)
{
  if (n == 0)
    return 0;
  
  int shift = 0;
  
  while ( ((1LL << shift) & n) == 0)
    shift++;

  return (1LL << shift);
}

int main()
{

  long long N;
  while (cin >> N && N != 0)
  {
    int maxbits  = 64 - __builtin_clzll(N);          // Find highest bit
        maxbits -= __builtin_popcountll(N) % 3 != 0; // If N's bits aren't divisible by 3, 
                                                     // no number <= N will have high-bit number of ones
        maxbits /= 3;                                // only find multiples of 3
    unsigned long long level = 0;
   
    int found = 0;
    bool used[100] = {0};

    N = findFirst(N);
    long long mask = N;

    while (found < maxbits)
    {
      int bits = __builtin_popcountll(N);
      if (bits % 3 == 0 && used[bits] == false)
      {
        level += calc(N, bits);
        found++;
        used[bits] = true;
      }

      if ( N == mask)
      {
        mask = N - findSub(N);
        N--;
      }
      else
      {
        N -= findSub(N);
      }
    }
    
    cout << "Level is " << level << endl;
  }
 
  return 0;
}
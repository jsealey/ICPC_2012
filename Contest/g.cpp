// team1
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
long long arr[54][54];
long long nCr(int n, int r)
{
  if(arr[n][r]) return arr[n][r];
  else{
  if (r > n)
    return 0;
  
  long long ret = 1;
  long long hi = max(r, n-r);
  long long lo = min(r, n-r);
  
  for (long long i = hi + 1; i <= n; i++)
    ret *= i;
  
  for (long long i = 2; i <= lo; i++)
    ret /= i;
  arr[n][r] = ret;
  return ret;
  }
}

int main()
{
  long long day;
  
  while (cin >> day)
  {
    cout << "Day " << day << ": Level = ";
    
    long long level = 0;
    int n = 1;
    
    while ( (1LL << n) < day)
      n++;
    
    for (int i = 3; i <= n; i += 3)
      level += nCr(n, i);
  
    cout << "Day is " << day << " d is " << (1LL << n) << " n=" << n << " and " << (1LL << (n-1)) << endl;
    cout << (day - (1LL << (n-1))) << " " << ( (1LL << n) - day) << endl;
    for (long long d = day + 1; d < (1LL << n); d++)
      level -= __builtin_popcountl(d) % 3 == 0;
    
    cout << level << endl;
  
  }
  

  return 0;
}

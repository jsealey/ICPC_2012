#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int main()
{
  int cnt = 0;
  for (int i = 0; i < 600; i++)
  {
    cnt += bitset<16>(i).count() % 3 == 0;
    cout << i << ": " << bitset<16>(i) << " " << (bitset<16>(i).count() % 3 == 0 ? "true" : "") << " cnt is " << cnt << endl;
  }

  return 0;
}

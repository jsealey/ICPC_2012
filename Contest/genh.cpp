#include <iostream>

using namespace std;

int main()
{
  cout << 100000 << endl;
  for (int i = 0; i < 100000; i++)
    cout << i << " ";
  
  for (int i = 1; i < 100000; i++)
    cout << i << " ";
  
  cout << 0 << endl;

  return 0;
}

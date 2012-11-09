#include <iostream>
#include <cmath>

using namespace std;



int main() {

  int g;
  cin >> g;

  for (int i = 0; i < g; ++i) {
  
    int rings, runes;
    int value;
    cin >> rings >> runes;
    bool riddles[runes][rings];
    
    for (int j = 0; i < runes; ++j) {
    
      for (int k = 0; k < rings; ++k) {
      
        cin >> value;
        if (value < 0)
          riddles[j][(int)abs(value)] = false;
        else
          riddles[j][(int)abs(value)] = true;
      }
      

      cin >> value;
    }
    
 
  }

  return 0;
}

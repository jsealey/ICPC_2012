// team1
#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main() {

  int n;
  string name;

  while (true) {
  
    cin >> n;
    if (n == 0)
      break;
  
    map<string, int> seating;
    
    vector<vector<bool> > ans(n);
    for (int i = 0; i < n; ++i)
      ans[i].resize(n);
 
    
    int total = n;
    for (int i = 0; i < n; ++i) {
      cin >> name;
      seating[name] = i;
    }
    
    for (int i = 0; i < n; ++i) {
      
      cin >> name;
     
      int pos = seating[name];
      
      if (ans[i][pos] == true) {
      
        ans[pos][i] = false;
        ans[i][pos] = false;
        total-=2;
      }
      else ans[pos][i] = true;
      
    }
   
    cout << total << endl;
  }

  return 0;
}

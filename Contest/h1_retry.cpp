// team 1
#include<map>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

map< pair<int,int>, int> combos;
bool isUnique(int a, int b){
  /*
    bool isFound = false;
    for(int i=0; i < combos.size(); ++i){
      if( (combos[i].first == a && combos[i].second == b) || (combos[i].first == b && combos[i].second == a)){
        isFound = true;
      }
      */
    return true;
  }
  
  //if(!isFound) combos.push_back(pair<string,string>(a,b));
  //return !isFound;
}
int main(){
  map<string,int> names;
  vector<int> inputs;
  int n;
  string s;
  while(cin>>n && n!=0){
      int counter=0, total=0;
      for(int i=1; i <= n;++i){
        cin >> s;
        names[s] = i;
      }
      
      for(int i=1; i <= n;++i){
        cin >> s;
        if(isUnique(names[s],i)) total += 1;
        else total -= 1;
      }
      inputs.clear();
      combos.clear();
      names.clear();
      cout<<total<<endl;
    }
  return 0;
}

// team 1
#include<map>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
  vector< pair<string,string> > combos;
 bool isUnique(string a, string b){
  bool isFound = false;
  for(int i=0; i < combos.size(); ++i){
    if( (combos[i].first == a && combos[i].second == b) || (combos[i].first == b && combos[i].second == a)){
      isFound = true;
    }
  }
  if(!isFound) combos.push_back(pair<string,string>(a,b));
  return !isFound;
 }
 
int main(){
  map<string,int> names;
  int n;
  string s;
  while(cin>>n && n!=0){
    int counter=0;
    int total = 0;
    for(int i=1; i <= n;++i){
      cin >> s;
      names[s] = i;
    }
    for(int i=1; i <= n; ++i){
      cin >> s;
      if(names[s]>i){
        total += names[s] - i;  
      }    
    }
    names.clear();
    
    cout << total << endl;
  }
}

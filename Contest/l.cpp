#include<iostream>

using namespace std;
string vowel = "aiyeou";
string cons = "bkxznhdcwgpvjqtsrlmf";
bool isVowel(char c, int& pos) {

  for (int i = 0; i < vowel.size(); ++i)
    if (vowel[i] == c) {
      pos = i;
      return true;
    }
  return false;
}

bool isCons(char c, int& pos) {

  for (int i = 0; i < cons.size(); ++i)
    if (cons[i] == c) {
      pos = i;
      return true;
    }
    
  return false;
}

char rot(char c) {

  int pos;
  if (isVowel(c, pos)) {
  
    return vowel[(pos + 3) % vowel.size()];
  
  } else if (isCons(c, pos)) {
  
    return cons[(pos + 10) % cons.size()];
  }
}

int main() {
  string s;
  while(getline(cin,s)){
    for(int i=0; i < s.size();++i){
    
      if (isupper(s[i]))
        cout << (char)toupper(rot(tolower(s[i])));
      else if (islower(s[i]))
        cout << (char)rot(s[i]);
        
      else
        cout << s[i];
    }
    cout << endl;
  }

	return 0;
}

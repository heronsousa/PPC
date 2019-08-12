#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, vowels = "aeiouy";

  cin >> s;

  for(int i=0; i<s.size(); i++){
    while(find(vowels.begin(), vowels.end(), tolower(s[i]))!=vowels.end()) s.erase(i,1);
  }

  for(auto c : s){
    cout << "." << static_cast<unsigned char>(tolower(c));
  }
  cout << endl;

  return 0;
}

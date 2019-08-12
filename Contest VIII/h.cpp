#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;

  cin >> s;

  for(int i=0; i<s.size()-1; i++){
    int b=1;

    for(int j=i+1; j<s.size(); j++){
      if(s[i]==s[j]) b=0;
    }

    if(b) s.erase(i, 1);

    // cout << s << endl;

    if(s==string(s.rbegin(), s.rend())){
      i%2==0 ? cout << "First" << endl : cout << "Second" << endl;
      break;
    }

  }

  return 0;
}

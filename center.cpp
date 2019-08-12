#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  vector<string> v;
  int m=0, padding=0;

  while(getline(cin, s)){
    v.push_back(s);
    if(s.length()>m) m=s.length();
  }

  cout<< string(m+2,'*') <<endl;

  for(int i=0; i<v.size(); i++){

    int tam = m-v[i].size();
    int l = tam/2;
    int r = tam/2;

    if(tam & 1){
      l += padding;
      r += 1 - padding;
      padding = 1 - padding;
    }

    cout << "*";
    cout<< string(l,' ');
    cout << v[i];
    cout<< string(r,' ');
    cout << "*" << endl;
  }

  cout<< string(m+2,'*') <<endl;

  return 0;
}

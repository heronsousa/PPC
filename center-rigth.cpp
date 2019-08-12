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

    cout << "*";
    cout<< string(tam,' ');
    cout << v[i];
    cout << "*" << endl;
  }

  cout<< string(m+2,'*') <<endl;

  return 0;
}

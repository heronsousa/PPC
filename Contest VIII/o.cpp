#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1, s2;

  cin >> s1 >> s2;

  string a = s1;
  int aux1=0, aux2=0, i, j;

  for(i=0; i<s1.size(); i++)
    if(s1[i]!=s2[i])
      break;

  for(j=i+1; j<s1.size(); j++)
    if(s1[j]!=s2[j])
      break;

  swap(s1[i], s1[j]);

  s1==s2 ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
  int a1=0, b1=0;
  string a, b;

  cin >> a >> b;

  for(int i=0; i<a.length(); i++){
    if(tolower(a[i])!=tolower(b[i])){
      tolower(a[i])<tolower(b[i]) ? b1++ : a1++;
    }
  }
  if(b1>a1) cout << -1 << endl;
  else if(a1<b1) cout << 1 << endl;
  else cout << 0 << endl;

  return 0;
}

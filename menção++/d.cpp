#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, i=0, res=0;

  cin >> n;

  for(i=1; i<=10001; i++){
    res=i*i*i;
    if(res==n){
      cout << i << endl;
      return 0;
    }
    res=0;
  }

  cout << -1 << endl;

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

  int size=0;
  unsigned long long num;

  cin >> num;

  while(num > 0){
    if(num%10==7 || num%10==4) size++;
    num /= 10;
  }

  if(size==4 || size==7) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, cont=0;

  cin >> n;

  while(n--){
    int a, b, c;

    cin >> a >> b >> c;
    int sum = a+b+c;
    if(sum > 1) cont++;
  }

  cout << cont << endl;

  return 0;
}

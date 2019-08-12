#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, num=19, sum=0, a=0;

  cin >> n;

  while(1){
    sum=0;
    int i = num;
    while (i != 0) {
      sum += i % 10;
      i = i/10;
    }
    if(sum == 10) a++;
    if(a==n) break;
    num++;
 }

  cout << num << endl;

  return 0;
}

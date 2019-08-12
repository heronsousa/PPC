#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, perc;
  float sum=0;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> perc;
    sum += perc;
  }

  printf("%.12f\n", sum/n);

  return 0;
}

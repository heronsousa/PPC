#include <bits/stdc++.h>

using namespace std;

bool primo(int n){
  int count=0;
  for(int i=2; i<=n/2; i++) if(n%i==0) count++;
  return !count ? true : false;
}

int soma_3_primos(int num, int n){
  int count=0, sum=0, sla=num;

  while(count<3 && num>1){
    while(!primo(num)) num--;
    sum+=num--;
    count++;
  }

  if(sum==n) return 1;
  else if(sum<n) return 0;
  else soma_3_primos((sum-num)/2, n);
}

int main(){
  int n;

  while(1){
    cin >> n;
    if(n==0) break;
    soma_3_primos(n/2, n) ? cout << "O numero " << n << " e piramidal" << endl : cout << "O numero " << n << " nao e piramidal" << endl;
  }

  return 0;
}

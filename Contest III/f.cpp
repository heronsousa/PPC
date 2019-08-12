#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, num;

  cin >> n;

  int num_fri = n+1, res=0, sum=0;

  while(n--){
    cin >> num;
    sum+=num;
  }

  for(int i=1; i<=5; i++){
    int total = sum+i;
    res += (total%num_fri != 1);
  }

  cout << res << endl;

  return 0;
}

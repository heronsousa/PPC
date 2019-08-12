#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m, task, ini=1;
  long long total=0;
  
  cin >> n >> m;

  while(m--){
    cin >> task;
    if(task>ini) total+=task-ini;
    else if(task<ini) total+=(n-ini)+task;
    ini=task;
  }

  cout << total << endl;

  return 0;
}

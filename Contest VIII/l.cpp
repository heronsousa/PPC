#include <bits/stdc++.h>

using namespace std;

#define ll long long

int solve(vector<ll>& v, int pos, int n, int cont, vector<ll>& ac){
  if(cont==n){
    if(v.size()>3){
      cout << -1 << endl;
      exit(0);
    }
    else {
      int sla=1;
      for(int i=0; i<v.size()-1; i++){
        if(v[i]<v[i+1] && v[i+1]%v[i]==0) sla=1;
        else sla=0;
      }

      if(sla){
        for(int i=0, j=1; i<ac.size(); i++, j++){
          cout << ac[i];
          i!=1 && j%3==0 ? cout << endl : cout << " ";
        }

        for(int i=0; i<v.size(); i++){
          cout << v[i] << " ";
        }
        cout << endl;
      }
      else cout << -1 << endl;

      exit(0);
    }
  }
  for(int i=0; i<v.size(); i++){
    if(v[pos]<v[i] && v[i]%v[pos]==0){
      ac.push_back(v[pos]);
      v.erase(v.begin()+pos);
      if(!solve(v, i-1, n, cont, ac)){
        ac.push_back(v[i-1]);
        v.erase(v.begin()+i-1);
        return solve(v, 0, n, cont+1, ac);
      }
      else return solve(v, i-1, n, cont, ac);
    }
  }
  return 0;
}

int main(){

  ll n, a;
  vector<ll> v, ac;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());

  solve(v, 0, n/3, 1, ac);

  return 0;
}

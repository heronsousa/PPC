#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n;
  string r;
  char s;
  set<char> a;

  cin >> t;

  while (t--) {
    cin >> s;
    a.insert(s);
  }

  cin >> n;

  bool val = true;

  cin.ignore();

  for(int i=1; i<=n; i++){
    getline(cin, r);
    for(int j=0; j<r.size(); j++) {
      if(a.count(tolower(r[j]))>0){
        val = false;
      }
    }
    cout << "Mensagem #" << i << (val ? ": Beto ou Carlos" : ": Carlos") << endl;
    val = true;
  }

  return 0;
}

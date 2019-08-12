#include <bits/stdc++.h>

using namespace std;

int main(){
  int n=7;
  double d, nota;
  vector<double> notas;

  cin >> d;

  while(n--){
    cin >> nota;
    notas.push_back(nota);
  }

  sort(notas.begin(), notas.end());

  notas.pop_back();
  notas.erase(notas.begin());

  double sum=0;
  for(int i=0; i<notas.size(); i++) sum+=notas[i];

  printf("%.1f\n", (sum/5.0)*d);

  return 0;
}

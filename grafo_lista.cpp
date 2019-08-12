#include<bits/stdc++.h>

using namespace std;

int main(){
  int v;
  list<int> *adj;

  adj = new list<int>[1];

  for(int i=1; i<=5; i++)
    if(i%2==0)
      adj[0].push_back(i);

  cout << "0 tem " << adj[0].size() << " vizinhos" << endl;

  for(int i=1; i<=5; i++)
    if(find(adj[0].begin(), adj[0].end(), i) != adj[0].end())
      cout << i << " é vizinho do vértice " << 0 << endl;
    else
      cout << i << " não é vizinho do vértice " << 0 << endl;

  return 0;
}

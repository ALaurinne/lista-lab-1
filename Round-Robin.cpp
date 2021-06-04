#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

int main() {

  queue<int> fila;
  
  int n,m;

  cin >> n >> m;
  
  int valor; 
  
  for(int i = 0; i<n; i++){
    cin >> valor;
    fila.push(valor);
  }

  if(fila.empty()) return 0;

  for(int i = 0; i<m && !fila.empty(); i++){
    
    valor = fila.front() - 1;
    fila.pop();
    
    if(valor > 0){
    fila.push(valor);
    }
    
  }

  if(fila.empty()) {
    cout << "pronto" << endl;
    return 0;
  }

  valor = fila.size();
  cout << valor << endl;
  for(int i = 0; i < valor; i++){
    cout << fila.front()  << " ";
    fila.pop();
  }
  cout << endl;
  
  return 0;
}

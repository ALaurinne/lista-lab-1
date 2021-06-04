#include <iostream>
#include <stack>
using namespace std;

int main () {
	int n, valor, cont = 0;
	stack <int> pilha;
    cin >> n;
  for(int i = 0; i < n; i++){
    cin >> valor;
    if(valor == -1){
      if(!pilha.empty()){
        pilha.pop();
      }
    } else {
      pilha.push(valor);
    }
  }

  if(pilha.empty()) {
    cout << 0 << endl;
    return 0;
  }  
	while (!pilha.empty()) { 
      cont += pilha.top();
      pilha.pop();
	}
  
  cout << cont << endl; 
return 0;
}
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  int x;
  
  cin >> x;
  
  string vetor[x];
  
  cin.ignore();
  
  for(int i = 0; i<x; i++){
    
    getline(cin, vetor[i]);
  }
  
  for(int i = 0; i<(x/2); i++){
    int count = x-i-1;
    cout << vetor[i] + " X " + vetor[count] << endl;
  }
    
    return 0;
}
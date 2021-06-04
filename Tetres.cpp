#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {

  int n,m;
  int altura = 0;
  int points = 0;

  cin >> n >> m;
  
  int vetor[m][3];
  string bloco;
  
  cin.ignore();
  
  for(int i = 0; i<n; i++){
    cin >> bloco;

    vetor[altura][0] = bloco[0] - '0';
    vetor[altura][1] = bloco[1] - '0';
    vetor[altura][2] = bloco[2] - '0';

    if(altura > 0){
      if(vetor[altura-1][0] != vetor[altura][0] && vetor[altura-1][1] != vetor[altura][1] && vetor[altura-1][2] != vetor[altura][2]){
        altura--;
        points += 10;
      } else {
        altura++;
        if (altura == m){
          cout << "game over" << endl;
          return 0;
        }
      }
    } else {
      altura++;
      if (altura == m){
          cout << "game over" << endl;
          return 0;
        }
    }
    
  }
 
   cout << points << endl;

  return 0;
}

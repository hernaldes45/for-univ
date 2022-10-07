//ромб из зведочек (7 строки и как в задаче )
#include <iostream>
using namespace std;
int main() {
  
  int k = 1;

  k = 4- 1;
  
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= k; j++)
    cout << " " ;
    k--;

    for (int j = 1; j <= 2*i-1; j++)
    cout << "*" ;
    cout << endl;
  }

  k = 1;
  for (int i = 1; i <= 4-1; i++) {
    for (int j = 1; j <= k; j++)
    cout << " ";
    k++;
    
    for (int j = 1; j <= 2*(4-i)-1; j++)
    cout << "*";
    cout << endl;
  }
  
  return 0;
}
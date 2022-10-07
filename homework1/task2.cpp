//равнобедренный треугольник из звездочек
#include <iostream>
using namespace std;

int main() {
    int n, k = 1;

    cout << "Enter a number: ";
cin >> n;
  k = n- 1;
  
  for (int i = 1; i <=n; i++) {
    for (int j = 1; j <= k; j++)
    cout << " " ;
    k--;

    for (int j = 1; j <= 2*i-1; j++)
    cout << "*" ;
    cout << endl;
  }
    
}
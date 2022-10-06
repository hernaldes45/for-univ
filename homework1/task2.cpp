//равнобедренный треугольник из звездочек
#include<iostream>
using namespace std;
int main() {
  for (int i = 1; i <= 7; i++) {
    for (int k = 7 - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
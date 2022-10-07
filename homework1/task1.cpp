// строка с одной звездочкой, строку с двумя звездочками, с тремя и т.д.
#include <iostream>
using namespace std;
int main (){
    cout << "Enter a number:  ";
    int n, i,j;
    cin >> n ;
    for (int i = 1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i; j++){
            cout<<"*";
        }
      cout<<"\n";
    }
    

}
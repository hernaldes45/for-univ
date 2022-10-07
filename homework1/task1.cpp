// строка с одной звездочкой, строку с двумя звездочками, с тремя и т.д.(до 7-и я сделал)
#include <iostream>
using namespace std;
int main (){
    int i,j;
    for (int i = 1 ; i<=7 ; i++)
    {
        for(int j=1 ; j<=i; j++){
            cout<<"*";
        }
      cout<<"\n";
    }
    

}
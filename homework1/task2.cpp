// add comment
#include <iostream>

using namespace std;

int main(){
int i,j,n;
 for(i=1; i<=7 ; i++){
    for(j=1 ; j<=2*n-1;j++)
    {
        if(j >=n-(i-1) && j<=n+(i-1)){
            cout<<"*";
        }
        else{
            cout<<"";
        }
    }
}
         cout<<"\n";
    
    return 0;
}

// h=height(высота ромба), w=width(ширина ромба)
// чтобы получить нормальный ромб h должно быть равным w 
#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    int w,h;
    cout<<"Enter a number :";
    cout<<"Enter a number: ";
    cin>>h;
    cin>>w;
    string fill("*");
    string empty(" ");
    for (int i = 0; i<w; i++)
    {
        for (int j = 0; j<h; j++)
        {
            if((j == h/2-i) or (j == h/2+i) or (j == -h/2+i) or (j+i == h+h/2-1) ) cout << fill;
            else cout <<empty;
        }
        cout<<endl;
        
    }
}
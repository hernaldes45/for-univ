// h=height(высота), w=width(ширина) , тоже 5 строки и как в задаче
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int w=5;
    int h=5;
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
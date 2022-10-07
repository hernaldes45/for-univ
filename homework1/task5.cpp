#include<iostream>
using namespace std;
int main()
{
int n, k, i, j;
cout << "Enter a number: ";
cin >> n;
for(i = 0; i <= n; i++)
{
for(k = n; k > i; k--)
cout << " ";
for(j=0; j<i; j++)
cout << "* ";
cout << "\n";
}
for(i = 1; i < n; i++)
{
for(k = 0; k < i; k++)
cout << " ";
for(j = n; j > i; j--)
cout << "* ";
cout << "\n";
}
return 0;
}
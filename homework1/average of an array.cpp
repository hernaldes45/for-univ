#include <iostream>
using namespace std;
 // сумма массива ;
double average(int a[], int n)
{

    int sum = 0;
    for (int i=0; i<n; i++)
       sum += a[i];
       return (double)sum/n;
}
//среднее значение массива;
int main()
{
    int arr[] = {1, 2, 3, 4, };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout<<"avg= "<< average(arr, n) <<endl;
    return 0;
}
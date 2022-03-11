#include<iostream>
#include<conio.h>
using namespace std;
int sum(int arr[], int lastindex)
{
    if(lastindex==0)
        return arr[0];
    else
        return arr[lastindex]+sum(arr,lastindex-1);

}
int main()
{
    int arr[5];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    int total;
    total=sum(arr,4);
    cout<<"sum of array elements is  : "<<total;
}


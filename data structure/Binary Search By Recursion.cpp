#include<iostream>
#include<conio.h>
#define SIZE 10
using namespace std;
class safearray
{
private:
    int arr[SIZE];
    int noofelements=0;
public:
    void add(int val)
    {
        if(noofelements<SIZE)
        {
            arr[noofelements]=val;
            noofelements++;
        }
        else
            cout<<"array is full...";
    }
    void show()
    {
        if(noofelements==0)
            cout<<"array is empty..";
        for(int i=0;i<noofelements;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    int BinarySearh(int n,int Lindex,int Hindex)
    {
        if(Lindex>Hindex)
            return -1;
        int mid = (Lindex+Hindex)/2;
        if(n==arr[mid])
            return mid;
        else if(n<arr[mid])
            BinarySearh(n,Lindex,mid-1);
        else if(n>arr[mid])
            BinarySearh(n,mid+1,Hindex);


    }

    void bubble_sort()
    {

    for(int i=0;i<noofelements-1;i++)
    {
        for(int j=0;j<noofelements-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    }

};

int main()
{
    safearray array1;
    array1.add(34);
    array1.add(12);
    array1.add(317);
    array1.add(3);
    array1.add(90);
    array1.show();
    array1.bubble_sort();
    cout<<endl;
    cout<<"Sorted Array \n";
    array1.show();
    int num;
    cout<<"\nenter number to be searched in array  : ";
    cin>>num;
    int index=array1.BinarySearh(num,0,4);
    cout<<"\n The value is found on index : "<<index;
}


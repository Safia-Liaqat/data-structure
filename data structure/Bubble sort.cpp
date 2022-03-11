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
    array1.show();

}


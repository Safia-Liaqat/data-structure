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
    void Shell_Sort()
    {
        int j;
        for(int gap=(noofelements-1)/2;gap>0;gap=gap/2)
        {
            for(int k=gap;k<noofelements;k++)
            {
                int temp=arr[k];
                for(j=k;j>=gap&& temp<arr[j-gap];j=j-gap)
                {
                    arr[j]=arr[j-gap];
                }
                arr[j]=temp;
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
    array1.Shell_Sort();
    cout<<endl;
    array1.show();

}


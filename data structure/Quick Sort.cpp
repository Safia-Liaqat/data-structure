#include <iostream>
#include <conio.h>
using namespace std;


class safearray
{
    int arr[5];
    int noofelements;
public:
    safearray()
    {
        for(int i=0; i<5; i++)
        {
            arr[i]=0;
        }
        noofelements=0;
    }
    void setdata()
    {
        arr[0]=7;
        arr[1]=3;
        arr[2]=6;
        arr[3]=-1;
        arr[4]=-4;

        noofelements=5;
    }

    void show()
    {
        cout<<"Data in Array is : "<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<arr[i]<<endl;
        }

    }

   void Quick_sort(int p,int r)
   {

       int q;
       if(p<r)
       {
           q=Partition(p,r);
           Quick_sort(p,q-1);
           Quick_sort(q+1,r);
       }
   }
   int Partition(int p,int r)
   {
       int x=arr[r];
       int i=p-1;
       for(int j=p;j<r;j++)
       {
           if(arr[j]<=x)
           {
               i=i+1;
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }

       }
        int temp=arr[i+1];
        arr[i+1]=arr[r];
        arr[r]=temp;

        return i+1;
   }
};
int main()
 {
    safearray obj;
    obj.setdata();
    cout<<"Data of array before sorting.."<<endl;
    obj.show();
    obj.Quick_sort(0,4);
    cout<<"Sorted array..."<<endl;
    obj.show();



}



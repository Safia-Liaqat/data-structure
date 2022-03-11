#include <iostream>
#include <conio.h>
using namespace std;


class safearray
{
    int arr[20];
    int noe;
public:
    safearray()
    {
        for(int i=0; i<10; i++)
        {
            arr[i]=0;
        }
        noe=0;
    }
    void setvalue()
    {
        arr[11]=7;
        arr[12]=3;
        arr[13]=6;

        noe=6;
    }

    void showdata()
    {
        cout<<"Data in Array is : "<<endl;
        for(int i=11; i<=13; i++)
        {
            cout<<arr[i]<<endl;
        }

    }




    /// Merge-Sort

    void dg(int p,int r)
    {
        int q;
        if(p<r)
        {
            q = (p+r)/2;
            dg(p,q);
            dg(q+1,r);
            mergesort(p,q,r);
        }
    }


    void mergesort(int p,int q,int r)
    {
        int n1 = q-p+1;
        int n2 = r-q;
        int L[n1+1];
        int R[n2+1];
        for(int i=1; i<=n1; i++)
            L[i-1]=arr[p+i-1];

        for(int j=1; j<=n2; j++)
            R[j-1]=arr[q+j];


            L[n1]=INT_MAX;
            R[n2]=INT_MAX;
        int i=0,j=0;
        for(int k=p; k<=r; k++)
        {
            if(L[i]<=R[j])
            {
                arr[k]=L[i];
                i++;
            }
            else
            {
                arr[k]=R[j];
                j++;
            }

        }

    }



};
int main()
 {
    safearray obj;
    obj.setvalue();
    cout<<"Before Sorting"<<endl;
    obj.showdata();
    obj.dg(11,13);
    cout<<"After Sorting"<<endl;
    obj.showdata();


    _getch();
}



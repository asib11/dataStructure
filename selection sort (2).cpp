#include<iostream>
using namespace std;
int main()
{
    int k,n,mini,j,ar[100],temp;
    cout<<"inter the array size : ";
    cin>>n;
    for(k=0; k<n; k++)
       cin>>ar[k];
    for(k=0; k<n-1; k++)
    {
        mini=k;
        for (j= k+1; j< n; j++)
       {
            if (ar[mini]>ar[j])
               mini =j;
        }
        if (mini!=k)
       {
            temp = ar[k];
            ar[k] = ar[mini];
            ar[mini] = temp;
        }
    }
    cout<<"selection sort data :";
    for(k=0; k<n; k++)
        cout<<ar[k]<<' ';

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()

{
    int j,n,data[100],k,p,i;
    cout<<"Enter The Array size : "<<endl;
    cin>>n;
    cout<<"Enter The Array Element : "<<endl;
    for(i=1;i<=n;i++)
        cin>>data[i];
    for(k=1;k<=n-1;k++)
    {
        for(p=1;p<=n-k;p++)
        {
            if(data[p]>data[p+1])
            {
                int swap;
                swap = data[p];
                data[p]=data[p+1];
                data[p+1]=swap;
            }
        }
    }
    cout<<"The sorted data in ascending order : "<<endl;
    for(k=1;k<=n;k++)
    cout<<data[k];
}


#include<iostream>
using namespace std;
int main()
{    int j,n,data[100],k,i,item,ptr,beg,end,ub,lb,loc,mid,interchange;

    cout<<"array size :";
    cin>>n;
    cout<<"enter the array value :";
    for(i=1;i<=n;i++)
   cin>>data[i];
    for(k=1;k<=n-1;k++)
    {ptr=1;
        while(ptr<=n-k)
        {
            if(data[ptr]>data[ptr+1])
            {
                interchange=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=interchange;
            }ptr++;
        }
    }
    cout<<"The sorted data: ";
    for(k=1;k<=n;k++)
       cout<<data[k]<<' ';

    cout<<"\nenter the item : ";
    cin>>item;
    lb=1;
    ub=n;
    beg=lb;
    end=ub;
    mid=(int)(beg+end)/2;
    if(beg<=end && data[mid]!=item)
    {
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(int)((beg+end)/2);
    }

     if(data[mid]==item)
        loc=mid;
     else
        loc='1';

     cout<<loc;
}



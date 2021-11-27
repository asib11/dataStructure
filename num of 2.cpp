#include<iostream>
using namespace std;
int main()
{while(1){
    int n=11,data[]={100,90,12,8,200,5,8,1,-10,-18,-15},k,lb,ub,item,ptr,beg,end,loc,mid,change;
    for(k=0; k<10; k++)
    {
        ptr=0;
        while(ptr<n-k)
        {
            if(data[ptr]>data[ptr+1])
            {
                change=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=change;
            }
            ptr++;
        }
    }
    cout<<"The sorted data: ";
    for(k=0; k<11; k++)
        cout<<data[k]<<' ';

    cout<<"\nenter the item : ";
    cin>>item;
lb=1;
ub=n;
    beg=lb;
    end=ub;
    mid=data[k];
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
        {loc='\0';
cout<<"position : "<<loc;}
}
    return 0;
}



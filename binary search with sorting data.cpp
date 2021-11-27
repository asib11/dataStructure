#include<iostream>
using namespace std;
int main()
{
    int n,data[15],i,j,k,ITEM,ptr,BEG,END,UB,LB,LOC,MID,interchange;

    cout<<"size of array :";
    cin>>n;
    cout<<"Input data : ";
    for(i=1; i<=n; i++)
        cin>>data[i];
    for(k=1; k<=n-1; k++)
    {
        ptr=1;
        while(ptr<=n-k)
        {
            if(data[ptr]>data[ptr+1])
            {
                interchange=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=interchange;
            }
            ptr++;
        }
    }
    cout<<"The sorted data: ";
    for(k=1; k<=n; k++)
        cout<<data[k]<<' ';

    cout<<"\nInput ITEM : ";
    cin>>ITEM;
    LB=1;
    UB=n;
    BEG=LB;
    END=UB;
    MID=(int)(BEG+END)/2;
    if(BEG<=END && data[MID]!=ITEM)
    {
        if(ITEM<data[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=(int)((BEG+END)/2);
    }

    if(data[MID]==ITEM)
    {
        LOC=MID;
        cout<<"Search Position : "<<LOC;
    }
    else
    {
        LOC='\0';
        cout<<"Search Position : NULL";
    }



    return 0;
}



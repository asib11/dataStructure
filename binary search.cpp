#include <iostream>
using namespace std;
int main()
{
    int data[5],LB,UB,N,ITEM,LOC,BEG,END,MID;
    //cout<<"Size of array : ";
    //cin>>N;
    cout<<"Input data : ";
    for(int i=1; i<=5; i++)
        cin>>data[i];
    cout<<"Input ITEM : ";
    cin>>ITEM;
    LB=1;
    //UB=N;
    UB=5;
    BEG=LB;
    END=UB;
    MID=(int)((BEG+END)/2);
    while(BEG<=END&&data[MID]!=ITEM)
    {
        if(ITEM<data[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=(int)((BEG+END)/2);
    }

    if(data[MID]==ITEM)
        {LOC=MID;
        cout<<"Position is "<<LOC;}
    else
        {LOC='\0';
        cout<<"not found";}


    return 0;
}

#include<iostream>
using namespace std;

char queue[10];
int front=-1,rear=-1,n;
void Insert_queue()
{
    char item;
    if (rear==n-1)
        cout<<"Overflow"<<endl;
    else
    {
        if (front==-1)
            front=0;
        cout<<"Insert the element : ";
        cin>>item;
        rear++;
        queue[rear] = item;
    }
}
void Delete_queue()
{
    if(front==-1)
        cout<<"Underflow"<<endl;
    else
    {
        cout<<"deleted : "<<queue[front]<<endl;
        front++;
    }
}
void Display()
{
    if (front==-1)
    {
        cout<<"empty"<<endl;
        return;
    }
    else
    {
        cout<<"Queue data : ";
        for (int i=front; i<=rear; i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    cout<<"size of queue :";
    cin>>n;
    int a;
    cout<<"1) Insert"<<endl;
    cout<<"2) Delete"<<endl;
    cout<<"3) Display"<<endl;
    cout<<"4) Exit"<<endl;
    while(a!=4)
    {
        cout<<"Enter your choice : ";
        cin>>a;
        switch (a)
        {
        case 1:
            Insert_queue();
            break;
        case 2:
            Delete_queue();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;

        }
    }
    return 0;
}



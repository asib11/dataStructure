#include <iostream>
using namespace std;

int queue[10],n,front=-1,rear=-1;
void Insert()
{
    int item;
    if (front==-1&&rear==n-1)
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
void Delete()
{
    if(front==-1)
        cout<<"Underflow"<<endl;
    else
    {
        cout<<"Element deleted : "<<queue[front]<<endl;
        front++;
    }
}
void Display()
{
    if (front==-1)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    else
    {
        cout<<"Queue elements are : ";
        for (int i=front; i<=rear; i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    cout<<"size of queue : ";
    cin>>n;
    int a;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    while(a!=4)
    {
        cout<<"Enter your choice : ";
        cin>>a;
        switch (a)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
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

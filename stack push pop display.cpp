#include<iostream>
using namespace std;

int stack[10],top=-1,maxstk=10;
void push(int item)
{
    if (top>=maxstk-1)
        cout<<"OVERFLOW"<<endl;
    else
    {
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if(top<=-1)
        cout<<"UNDERFLOW"<<endl;
    else
    {
        cout<<"pop element : "<<stack[top]<<endl;
        top=top-1;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"stack element :";
        for(int i=0; i<=top; i++)
            cout<<stack[i]<<' ';
        cout<<endl;
    }
    else
        cout<<"stack is empty"<<endl;
}
int main()
{
    int a,item;
    cout<<"1) push element to stack"<<endl;
    cout<<"2) pop element from stack"<<endl;
    cout<<"3) Display all the elements of stack"<<endl;
    cout<<"4) Exit"<<endl;

    while(a!=4)
    {
        cout<<"enter choice : ";
        cin>>a;
        switch(a)
        {
        case 1:
        {
            cout<<"enter the value to be pushed : ";
            cin>>item;
            push(item);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
            cout<<"Exit"<<endl;
            break;

        default:
        {
            cout<<"invalid choice"<<endl;
        }
        }

    }
    return 0;
}

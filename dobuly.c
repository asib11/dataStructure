#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr,*prvptr;
}*stnode,*endnode;

void createNodeList(int n);
void displayList();

int main()
{
    int n;
    printf("\n\n Linked List : To create and display doubly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp, *tmp2;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->prvptr = NULL;
        stnode->nextptr = NULL;
        tmp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->nextptr = NULL;
                fnNode->prvptr =tmp;

                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node *tmp,*tmp2;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        tmp2= endnode;
        while(tmp != NULL)
        {
            printf(" Data = %d Data's address = %d", tmp->num,&tmp->num);
            tmp2=tmp->prvptr;
            tmp = tmp->nextptr;
            printf(" Previous address = %d Next address = %d\n",&tmp2->num,&tmp->num);

        }
    }
}

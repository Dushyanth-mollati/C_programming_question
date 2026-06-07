#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *ptr;
}node;

node *createlist(int nodes, int data[])
{
    node *head = NULL;
    node *p;
    for(int i = 0; i < nodes; i++ )
    {
        if(head == NULL)
            {
             p = head = (node *) malloc (sizeof(node));
             p -> data = data[i];
             p -> ptr  = NULL;
            }
        else 
        {
            p -> ptr = (node*)malloc(sizeof(node));
            p -> ptr ->data = data[i];
            p -> ptr = NULL;
        } 

    }
 return head;   
}

int main()

{
node *head1;
int data1[2] = {2, 4};
head1 = createlist(2, data1);
printf("%d\n", head1->data);         
printf("%p\n", (void*)&head1 -> data);  
printf("%p\n", (void*)head1 -> ptr);    

}




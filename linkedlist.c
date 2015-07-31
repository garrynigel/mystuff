/*****************************************************

     Linked lists using pointers in C

*****************************************************/
#include <stdio.h>
#include <stdlib.h>

/*****************************************************

     Define structures of each node

*****************************************************/

struct nodes
{
  int val;
  struct nodes *next;
};
/*****************************************************

      Function Declarations

*****************************************************/

void insopt(struct nodes *, struct nodes *);

/*****************************************************

        Main Function

*****************************************************/

int main(int argc, char const *argv[])
{

  struct nodes head;
  struct nodes curr;
  struct nodes *currptr;
  currptr = &curr;
  int opt = 999;
  int insopt = 2;
  int value ;

  while (opt != '4')
  {
       printf("Enter the option from the menu below\n\n");
       printf(" 1 : Insert a new node \n");
       printf(" 2 : Delete an existing node \n");
       printf(" 3 : Display the linked list \n");
       printf(" 4 : Exit \n");

       switch (opt)
       {
         case 1 :
         printf("Enter value of node to be inserted \n>>>> ");
         scanf("%d",&value);
         curr.val = value;
         insopt(&head,&curr);
         break;
         case 2 :
         printf("Enter value of node to be deleted \n>>>> ");
         break;
         case 3 :
         printf(" The linked list as follows \n>>>> ");
         printf("%d",head.val);
         currptr = head.next;
         while (!currptr)
         {
          printf("%d",currptr->val);
          currptr = head.next;
         }
         break;
         case 4 :
         printf("Exit");
         break;
       }
   }


  return 0;
}

/*****************************************************

        Insert Function

*****************************************************/

void insopt(struct nodes *headptr, struct nodes *currptr)
{

  int option;

  printf("Enter the insert options from the menu below\n");
  printf("1: Insert head node\n");
  printf("2: Insert node after\n");
  printf("3: Insert node before\n");
  scanf("%d\n",&option );

  switch (option) {
    case 1:
    if (!headptr)
    {
      headptr->val = currptr->val;
      headptr->next = NULL;
    }
    else
    {
      headptr->next = headptr;
      headptr->val  = currptr->val;
      headptr = currptr;
    }
  }

  return;

}

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

   Declare global pointers for head and current node

*****************************************************/

struct nodes *head = NULL;
struct nodes *curr = NULL;

/*****************************************************

        Insert Function

*****************************************************/

int insopt(struct nodes *, struct nodes * )
{

  int option;

  printf("Enter the insert options from the menu below\n");
  printf("1: Insert head node\n");
  printf("2: Insert node after\n");
  printf("3: Insert node before\n");
  scanf("%d\n",&option );

  switch (option) {
    case 1:
    if (!head)
    {
      head->val = curr->val;
      head->next = NULL;
    }
    else
    {
      head->next = head;
      head->val  = curr->val;
    }
  }

}
/*****************************************************

        Main Function

*****************************************************/

int main(int argc, char const *argv[])
{

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
         curr->val = value;
         insopt(*head,*curr);
         case 2 :
         printf("Enter value of node to be deleted \n>>>> ");
         case 3 :
         printf(" The linked list as follows \n>>>> ");
         printf("%d",head->val);
         curr = head->next;
         while (!curr)
         {
          printf("%d",curr->val);
          curr = head->next;
         }
         case 4 :
         printf("Exit");
         break;
       }
   }


  return 0;
}

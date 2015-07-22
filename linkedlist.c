/*****************************************************

     Linked lists using pointers in C

*****************************************************/
#include <stdio.h>
#include <conio.h>

/*****************************************************

     Define structures of each node

*****************************************************/

struct nodes
{
  int val;
  struct *next;
};

/*****************************************************

        Main Function

*****************************************************/

int main(int argc, char const *argv[]) {
{

  int option = 999;


  while option != '5'
  {
       printf("Enter the option from the menu below");
       printf(" 1 : Insert a new node ");
       printf(" 2 : Delete an existing node ");
       printf(" 3 : Display the linked list ");
   }


  return 0;
}

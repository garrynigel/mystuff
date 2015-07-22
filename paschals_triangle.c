#include <stdio.h>
int main(void)
{ 
  /* Variable declaration */
  int pos = 1;
  int row = 1;
  int val;

  printf("Enter the row number for the value\n");
  scanf("%d",&row);

  printf("Enter the position of the value in the row\n");
  scanf("%d",&pos);

  val=paschals(pos,row);

  return 0;
}
int paschals(int pos,int rownum)
{ int val = 0;
  int prevrow[rownum-2];
  int currrow[rownum-1];
  printf("inside paschals\n");
  prevrow[0] = 1;
  currrow[0] = 1;
  if (rownum == 1)
  {
    printf("Inside if");
    val = 1;
  }

  else
  {
    printf("Inside else\n");
    prevrow[rownum-2] = 1;
    currrow[rownum-1] = 1;
    val = paschals(pos-1,rownum-1)+paschals(pos,rownum-1);
    printf("Value = %d",val);

  }
  return val;
}
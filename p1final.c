#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the first fraction numerator : \n");
  scanf("%d",num1);

  printf("Enter the first fraction denominator : \n");
  scanf("%d",den1);

  printf("Enter the second fraction numerator : \n");
  scanf("%d",num2);

  printf("Enter the second fraction denominator : \n");
  scanf("%d",den2);
}

void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *den3=den1*den2;
  int num12=num1*den2;
  int num21=den1*num2;
  *num3=num12+num21;
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}

int main()
{
  int num1,num2,den1,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}
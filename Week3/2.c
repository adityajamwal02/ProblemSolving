#include <stdio.h>
#include <string.h>
int main(void)
{
  int len = 0;
  char str[10] = {0}; 
  printf("Enter the name \t");
  gets(str);
  len = strlen(str);
  printf("\nLength = [%d] \n", len);
  printf("\n Length of string entered is : [%d]\n", len);
  return 0;
}

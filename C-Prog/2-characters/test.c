#include <stdio.h>
int main() {

  char ch, s[100], sen[100];

  printf("Enter 1st input - ");
  scanf("%c", &ch);

  printf("Enter 2nd Input - ");
  scanf("%s", s);

  printf("Enter 3rd Input - ");
  scanf("\n");                                           // \n act as a buffer between the 2nd and 3 step. it is a em
  scanf("%[^\n]%*c", sen);

  printf("\nThis is your output:-\n\n1st-%c\n2nd-%s\n3rd-%s\n", ch, s, sen);

  return 0;
}

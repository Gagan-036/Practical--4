#include <ctype.h>
#include <stdio.h>

int main() {

  printf("Enter: \n");
  char input[10];
  scanf("%s", &input);
  // printf("%s", input);
  // isdigit(
  // isalpha
  // isprint
  // isspace

  int d = 0;
  int a = 0;
  int sc = 0;

  for (int i = 0; i <= strlen(input); i++) {

    if (isalpha(input[i])) {
      a += 1;

    }

    else if (isdigit(input[i])) {
      d += 1;
    

    }

    else if (isprint(input[i])) {
    sc+= 1;
    }


  }
    
    printf("Number of Aphabets are : %d \n", a);
    printf("Number of digits are : %d \n", d);
    printf("Number of special characters are : %d \n", sc);
    return 0;
  }

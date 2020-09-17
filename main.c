//Author:Christian Dell'Edera cmd6705@psu.edu
//Collaborator:Stephanie Jen tzi5235@psu.edu
//Collaborator:Corey Freas cxf5302@psu.edu
//Collaborator:Jocelyn Fafard jgf5530@psu.edu
//Section:11
//Breakout:4

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

// You may assume n >= 0, return the sum of 0+1+2+3+...+ n
int sum_n(int n){
  if (n <= 0){
    return 0;
  } else{
    return n + sum_n(n-1);
  }
}

// You may assume n >= 0, print s n times, each time in its own line.
void print_n(const char*s, int n){
  if (n <= 0){
    return;
  } else {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) {
  char*number=readline("Enter an int: ");
  int intNumber=atoi(number);
  printf("sum is %d.\n", sum_n(intNumber));
  char*phrase=readline("Enter a string: ");
  print_n(phrase, intNumber);
}
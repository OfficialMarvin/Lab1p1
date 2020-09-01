// Author: Marvin Jakobs mkj5388@psu.edu
// Collaborator: Liam Ellison lde5096@psu.edu
// Collaborator: Jiaxia Li jpl6290@psu.edu
// Collaborator: Khalid Al Masoudi lde5096@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *c = readline("Enter temperature in celsius: ");
  double b = atof(c);
  double f = (b*1.8)+32;

  printf("%s° in Celsius is equivalent to %f° Fahrenheit.",c,f);
  return 0;
}
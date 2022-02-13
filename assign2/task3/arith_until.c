/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, m, c;

  while(0 == 0){
    printf("Enter radius (in mm):\n");
    scanf("%f", &m);

    if(m == 0){
      printf("Exit\n");
      break;
    }

    r = m/25.4;
    c = 2 * PI * r;
    a = PI * r * r;

    printf("Circle's area is %3.2f (sq in).\n", a);
    printf("Its circumference is %3.2f (in).\n", c);
  }
}

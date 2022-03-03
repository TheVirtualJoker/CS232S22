#include <stdio.h>

int main(int argc, char *argv[]) {

   char str[10090];
   int ch, n = 0;

   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      printf("%d",ch);
      ++n;
   }

    return 0;
}


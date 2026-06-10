#include <stdio.h>
#include "Strings.h"
#include "Conversion.h" 

int main(int argc, char **argv) {
   int suma_total = 0;

   for (char **arg = argv + 1; *arg != NULL; arg++) {

      suma_total += ToInteger(*arg);

   }

   printf("%d\n", suma_total);

   return 0;
}
/*********************************************
 * Id: blon7303
 * 
 * Name: Caleb Blondell
 * UI Email: blon7303@vandals.uidaho.edu
 * Program Description:
 *   Given a list of integers ex: <3 4 9 2 7> as input,
 *   return the minimum distance between any two of its elements.
 *   In that case it would be 1, between 3 and 2.
 *   If we recieve less than 3 command line inputs 
 *   (or in other words, the program call and 2 numbers)
 *   the program is stopped for invalid input.
 *   We assume an call like such: .program 3 4 9 2 7
 *   and will return the answer on a new line
 *   $ ./a.out 3 4 9 2 7
 *   1
 *   $ 
 *********************************************/


#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
 
   if (argc < 3) {
      printf("Wrong Input!");
      return 1;
   }

   int dif = INT_MAX;
   for(int idx = 1; idx < argc; idx += 1) {
      for (int jdx = 1; jdx < argc; jdx += 1) {
         if (idx == jdx) {
            continue;
         }

         int new_dif = abs(atoi(argv[idx]) - atoi(argv[jdx]));
         if (new_dif < dif) {
            dif = new_dif;
         }
      }
   }

   printf("%d\n", dif);

}

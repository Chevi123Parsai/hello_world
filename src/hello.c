
#include <stdio.h>   
#include "..\include\hello.h"

int sgs_clib_strncmp(const char *str1, const char *str2, int n){

   int c = 0;
   for (int i = 0; i < n; i++)
   {
      if (str1[i] == str2[i])
      {
         c++;
      }
   }

printf("number of times string matched %d", c);
   return 0;

}

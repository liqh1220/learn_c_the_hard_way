# coding style
C program language has several coding style, such as GNU style, google style, 
linux kernel styles, 

demo code:

``` c
/*
  Jane/Joe Doe                   
  ID: 12345679                    
 */

#include <stdio.h>

int main() {
   int temperature = 0, height;
   char gender;
   
   printf("Enter Gender (m/f): ");
   scanf("%c", &gender);

   printf("Enter temperature: ");
   scanf("%d", &temperature);

   printf("Enter height (inches): ");
   scanf("%d", &height);

   if (gender == 'f') {
      printf("Female\n");
   } else {
      printf("Male\n");
   }

   do {
      if (temperature % 2 == 0) {
         printf("Even temperature %d\n", temperature);
      }
      temperature--;
   } while (temperature >= 0);

   /* This is a cascaded if statement example */
   if (height > 0 && height <= 15) {
      printf("Type1\n");
   } else if (height > 15 && height <= 30) {
      printf("type2\n");
   } else {
      printf("Other type\n");
   }

   return 0;
}
```
[C code style](https://www.cs.umd.edu/~nelson/classes/resources/cstyleguide/)
[C style guide](https://www.doc.ic.ac.uk/lab/cplus/cstyle.html)
[CS 50 style guide](https://cs50.readthedocs.io/style/c/)
/*8.How many tokens are there in the following statement?
answer=(3*q-p*p)/3;
14 tokens
answer
=
(
3
*
q
-
p
*
p
)
/
3
;
*/

/*
9. Insert spaces between the tokens in Exercise 8 to make the statement easier to read.
answer = ( 3 * q - p * p ) / 3;
*/



/*
10. In the dweight.c program (Section 2.4), which spaces are essential?
#include <stdio.h>
int main(void)
{
int height, length, width, volume, weight;
height = 8;
length = 12;
width = 10;
volume = height * length * width;
weight = (volume + 165) / 166;
printf("Dimensions: %dx%dx%d\n", length, width, height);
printf("Volume (cubic inches): %d\n", volume);
printf("Dimensional weight (pounds): %d\n", weight);
return 0;
}

Los espacios esenciales serian 
int main  (intmain error)
int height ( declaracion intheight error )
return0; (error el compilador pensara que es una variable)
*/
/*---------------------------------------------------------------------------- 
 * Author: Eshwar Jorvekar
 * Created on 1 May, 2017, 4:53 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number;			// 2 bytes (16 bit compiler)
 char alphabet;			// 1 byte (16 bit compiler)
 char word[8];
 float decimal;			// 4 bytes (16 bit compiler)
 printf("enter values for number decimal alphabet and word");
 scanf("%d %f %c %s",&number,&decimal,&alphabet,word);
 printf(" %d %f %c %s",number,decimal,alphabet,word);
}

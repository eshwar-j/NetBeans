/*----------------------------------------------------------------------------
 * Author: Eshwar
 * Created on 16 August, 2017, 12:20 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,*ptr;
    long l;
    char c;
    float f;
    double d;
    i=sizeof(int);
    printf("This is a %d-bit compiler\n\n",i*8);
    printf("DATA TYPE | SIZE\n");
    printf("      int | %d bytes\n",sizeof(i));
    printf("     long | %d bytes\n",sizeof(l));
    printf("     char | %d bytes\n",sizeof(c));
    printf("    float | %d bytes\n",sizeof(f));
    printf("   double | %d bytes\n",sizeof(d));
    printf("  pointer | %d bytes\n",sizeof(ptr));
}
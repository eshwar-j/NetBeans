/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 15 June, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

#define include_subdirectories 0

int main()
{
#if(include_subdirectories==1)
	printf("subdirectories included\n");
#else
	printf("subdirectories excluded");
#endif
}

/*---------------------------------------------------------------------------- 
 * Author: Eshwar jorvekar
 * Created on 02 June, 2017
 * Description:
 *----------------------------------------------------------------------------*/
 
#include <stdio.h>

#define enable_scan   // enable scan is defined hence scan will be enabled
//#define run		      // run is not defined so it will execute by default
int main()
{
#ifdef enable_scan    //execute if enable_scan is defined
	printf("scan enabled\n");
//#else
	printf("scan disabled\n");
#endif
#ifndef run        // execute if run is undefined
	printf("AV running\n");
#endif
 
}
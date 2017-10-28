/*---------------------------------------------------------------------------- 
 * File:   main.c
 * Author: Eshwar jorvekar
 * Created on 12 September, 2017, 4:13 PM
 * Description:
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float i=1.0;
	switch(i)	// compiler error, switch case does not accept float
	{
		case 1.0: 
		break;
	}
}
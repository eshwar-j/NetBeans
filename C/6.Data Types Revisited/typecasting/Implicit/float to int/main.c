//demonstrates float=> int demotion and int=> float promotion

#include <stdio.h>


int main()
{
    int i=1;
    float f;
    printf ("enter float ");
    scanf("%f",&f);
    i=i*f;
    printf ("float %f demoted to %d ",f, i);
}
#include<stdio.h>
#define PI 3.14159
main()
{
    int R,C;           /*R- Radius of circle*/
    float perimeter;   /*Circumference of circle*/
    float area;        /*Area of circule*/
    C=PI;
    R=5;
   perimeter=2.0*C*R;
   area=C*R*R;
   printf("%f %d",perimeter,area);
}

#include<stdio.h>
main()
{
   printf("SUvrodev Howlader");
   int Array[100]={1,2,3,4,5,6,7,8,9,10};
   int i,Total=0;
   printf("After Computing Element=");
   for(i=9;i>=0;i--)
   {
       Total=Total+Array[i];
       printf(" %d",Array[i]);
   }
    float Avarage=(float)Total/10;
    printf("\n Average Value=%.1f",Avarage);
    printf("\n Average Value=%.2f",Avarage);
}

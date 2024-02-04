#include<stdio.h>
main(){
int a,b,c,saniye;
printf("Saniyeyi girin : ");
scanf("%d", &saniye);
a=saniye/3600;
b=(saniye-(a*3600))/60;
c=saniye-(a*3600)-(b*60);
printf ("%d:%d:%d",a,b,c);

}

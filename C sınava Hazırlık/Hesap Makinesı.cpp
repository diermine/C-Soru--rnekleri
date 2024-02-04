#include<stdio.h>
main(){

int a,b,i;
printf("Ilk sayiyi girin : "); scanf("%d", &a);
printf("Ikinci sayiyi girin : "); scanf("%d", &b);
printf("1) toplama, 2) cikarma, 3) carpma, 4) bolme \n");

printf("Islemi secin [1-4]: "); scanf("%d", &i);
switch(i){
	case 1:{
		printf("Sayilarin oplami : %d\n", a+b);
		break;
	}
	case 2:{
		printf("Sayilarýn farki : %d\n", a-b);
		break;
	}
	case 3:{
		printf("Sayilarin carpimi : %d\n", a*b);
		break;
	}
	case 4:{
		printf("Sayilarin bolumu : %f\n",(float) a /(float)b);
		break;
	}
	default: printf("Yanlis Secim");
}
}

#include <stdio.h>

main(){
	int sayi1,sayi2,sayi3;
	printf("1.sayiyi girin : "); scanf("%d",&sayi1);
	printf("2.sayiyi girin : "); scanf("%d",&sayi2);
	printf("3.sayiyi girin : "); scanf("%d",&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3){
		printf("en buyuk sayi %d",sayi1);
	}
	else if(sayi2>sayi1 && sayi2>sayi3){
		printf("en buyuk sayi %d",sayi2);
	}
	else 
		printf("en buyuk sayi %d",sayi3);
}

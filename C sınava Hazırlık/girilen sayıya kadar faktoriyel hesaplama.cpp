#include <stdio.h>

main(){
	int sayi,fakt=1,i;
	printf("Faktoriyeli bulunacak sayi : ");
	scanf("%d",&sayi);
	
	while(i <= sayi)
	{
		fakt=fakt*i;
		printf("\n %d! = %d",i,fakt);
		i++;
	}
	printf("\n %d! = %d",sayi,fakt);
}

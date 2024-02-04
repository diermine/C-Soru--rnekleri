#include <stdio.h>

main(){

	int sayi,i,kontrol2=1;
	while(kontrol2==1)
	{
		int kontrol=0;
		printf("Sayiyi giriniz : ");
		scanf("%d",&sayi);
		
		for(i = 2; i <= sayi-1; i++)
		{
			if (sayi % i == 0)
			{
				kontrol=1;
				break; //bölen bulundu
			}
		}
		if (kontrol == 1)
		{
			printf("sayi asal degildir");
		}
		else{
			printf("sayi asaldir");
			kontrol2=2;
		}
		printf("\n");
	}
}

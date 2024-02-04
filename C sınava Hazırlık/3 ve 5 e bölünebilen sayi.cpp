#include <stdio.h>

main(){
	int a;
	
	printf("3'e ve 5'e bolunebilen bir sayi girin : ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0){
		printf("sayi bolunebilir");
	}
	else printf("sayi bolunemez");
}

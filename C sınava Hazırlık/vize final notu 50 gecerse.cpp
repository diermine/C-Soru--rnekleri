#include <stdio.h>

main(){
	int vize,final,i;
	printf("Vize notunu girin : "); scanf("%d",&vize);
	
	printf("Final notunu girin : "); scanf("%d",&final);
	
	i=vize*30/100+final*70/100;
	
	if(i>=50 && final >=50){
		printf("gecti");
	}
	else{
		printf("kaldi");
	}
}

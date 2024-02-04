#include <stdio.h>

main() {

    int i, enBuyuk, sayilar[10];

    for (i = 0; i < 10; i++)

    {

        printf("%d. sayiyi giriniz : ", i+1);

        scanf("%d", &sayilar[i]);

    }

    enBuyuk = sayilar[0];

    for (i = 1; i < 10; i++)

        if (sayilar[i] > enBuyuk) enBuyuk = sayilar[i];
	printf("%8d",sayilar[i]);
    printf("En buyuk sayi = %d", enBuyuk);

}

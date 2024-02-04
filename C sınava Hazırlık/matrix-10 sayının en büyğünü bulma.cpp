#include <stdio.h>

main() {

    int i, enBuyuk, sayilar[5];

    for (i = 0; i < 5; i++)

    {

        printf("%d. sayiyi giriniz : ", i+1);

        scanf("%d", &sayilar[i]);

    }

    enBuyuk = sayilar[0];

    for (i = 1; i < 5; i++)

        if (sayilar[i] > enBuyuk)
        else
		 enBuyuk = sayilar[i];

    printf("En buyuk sayi = %d", enBuyuk);

}

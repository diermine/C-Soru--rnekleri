#include <stdio.h>
main() {

    int i, sayilar[10];

    for (i = 0; i < 10; i++)

    {

        printf("%d. sayiyi giriniz : ", i+1);

        scanf("%d", &sayilar[i]);

    }

    for (i = 5; i >= 0; i--)

        printf("%d\n", sayilar[i]);

}

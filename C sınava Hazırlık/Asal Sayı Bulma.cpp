#include <stdio.h>
main()
{
    int girilen, i, kontrol = 0;
    printf("Bir say� giriniz:");
    scanf("%d", &girilen);

    for (i = 2; i < girilen; i++)
    {
        if (girilen % i == 0)
        {
            printf("Girilen say� asal de�ildir.");
            kontrol = 1;
            break;
        }
    }
    if (kontrol == 0)
        printf("Girilen say� asald�r.");
}

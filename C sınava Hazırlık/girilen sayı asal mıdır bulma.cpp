#include <stdio.h>
int main()
{
    int girilen, i, kontrol_degiskeni = 0;
    printf("Bir say� giriniz:");
    scanf("%d", &girilen);

    for (i = 2; i < girilen; i++)
    {
        if (girilen % i == 0)
        {
            printf("Girilen say� asal de�ildir.");
            kontrol_degiskeni = 1;
            break;
        }
    }
    if (kontrol_degiskeni == 0)
        printf("Girilen say� asald�r.");
    return 0;
}

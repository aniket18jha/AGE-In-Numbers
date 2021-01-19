#include <stdio.h>
int main()
{
    int age;
    printf("what is your age in number.\n");
    scanf("%d", &age);
    int days = age * 365 ;
    printf("you are atleast %i old.\n", days);

    return 0;
}
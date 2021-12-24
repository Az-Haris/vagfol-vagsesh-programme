#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2, res1, res2;
    printf("Enter Vajjo & Vajok = ");
    scanf("%d %d", &num1, &num2);
    res1=num1/num2;
    res2=num1-(num2*res1);
    printf("Division & Mod is = %d & %d",res1, res2);
    getch();
    return 0;
}

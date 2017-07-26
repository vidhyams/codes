#include <stdio.h>
void main()
{
    int n, r.number = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);
while(n != 0)
    {
        rem = n%10;
        r.Number = r.Number*10 + rem;
        n /= 10;
    }
printf("Reversed Number = %d", r.Number);
}

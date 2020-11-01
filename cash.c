#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
int m,a,b,c,d;

do
{
printf("Change owed: ");
float cash;
scanf("%f", &cash);
m = round(cash*100);
}
while (m < 0);

a = m / 25;
b = (m % 25) / 10;
c = ((m % 25) % 10)/5;
d = ((m % 25) % 10)%5;
int x = a+b+c+d;
printf("%d\n",x);

return 0;
} 
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int h,i,j,k;
    do
    {
     h = get_int("Введите положительное число от 1 до 8: ");
    }
while ((h<1) || (h>8));
for (i=0; i<h; i++)
{
    for (k =0;k<h-i-1;k++)
    {
        printf(" ");
    }
    for(j=0;j<=i;j++)
        {
        printf("#");
        }
    
  printf("\n");
}
}
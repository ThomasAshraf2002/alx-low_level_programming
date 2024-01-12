#include <stdio.h>
/**
 * main - Entry point 
 * Description:Write a program that prints all possible different combinations of three digits.
 * Return : Always 0 (success)
 */
int main()
{
   int x = 0, y = 1,z = 2;
   while (x < 10)
   {
       while (y < 10)
       {
           while (z < 10)
           {
           putchar(x + '0');
           putchar(y + '0');
           putchar(z + '0');
           if (x+y+z != 24)
           {
               putchar(',');
               putchar(' ');
           }
           z++;
           }
           y++;
           z=y + 1;
       }
       x++;
       y=x + 1;
       z=y + 1;
   }
    putchar('\n');
    return 0;
}

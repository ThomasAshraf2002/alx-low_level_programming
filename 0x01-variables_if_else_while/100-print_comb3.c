#include <stdio.h>
/**
 *main - entry point
 *
 *Descreption: prints all possible different combinations of two digits.
 *
 *Return: Always 0 (success)
 */
#include <stdio.h>

int main() {
  int i = 0, j = 1;
  while (i < 10) {
    while (j < 10) {
      putchar('0' + i);
      putchar('0' + j);
      putchar(',');
      putchar(' ');
      j++;
    }
    i++;
    j = i + 1;
  }
  putchar('\n');
  return 0;
}

#include "main.h"
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
int r;
for (r = 0; r < n; r++)
{
if (n > 0)
{
_putchar('_');
}
else if (n == 0 || n < 0)
{
_putchar('\n');
break;
}
}
_putchar('\n');
}

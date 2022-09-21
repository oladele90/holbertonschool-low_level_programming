#include "main.h"
/**
* jack_bauer - print the minutes in a day.
*Return:
*/
void jack_bauer(void)
{
int n = 0;
int m = 0;
 int o = 0;
 int p = 0;
 
 while (n <= 2)
   {
     while (m <= 3)
       {
	 while (o <= 5)
	   {
	     while (p <= 9)
	       {
       _putchar('0' + m);
       _putchar(':');
       _putchar('0' + o);
       _putchar('0' + p);
       _putchar('\n');
       n++;
       m++;
       o++;
       p++;
	       }
	     p = 0;
	   }
	 o = 0;
       }
     m = 0;
   }
 n = 0;
}

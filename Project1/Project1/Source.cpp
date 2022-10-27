#include <stdio.h>
#define p printf
#define s scanf_s
int main()
{
	int  y = 0;
	for (int x = 50 ; x <= 12000; x ++)
	{
		if ((x%3)==0)
		{
		}
		else
		{
			if ((x%5)==0)
			{
			}
			else
			{
				y++;
			}
		}
	}
	p("\n La cantidad de numeros entre 50 y 12000 que no se dividen entre 3 y 5: %d", y);
}
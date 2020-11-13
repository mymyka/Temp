#include <stdio.h>

int main()
{
	int m, y, x, a; 
	int c, l, o, n;
	int rezult;

	for ( int i = 1, number = 1000; number <= 3333; number++ )
	{
		rezult = number + number + number;

		m = number / 1000;
		y = ( number % 1000 - number % 100 ) / 100;
		x = ( number % 100 - number % 10 ) / 10;
		a = number % 10;

		c = rezult / 1000;
		l = ( rezult % 1000 - rezult % 100  ) / 100;
		o = ( rezult % 100 - rezult % 10  ) / 10;
		n = rezult % 10;

		if ( 
				c != m && 
				c != y && 
				c != x && 
				c != a && 
				c != l && 
				c != o && 
				c != n &&

				l != m && 
				l != y && 
				l != x && 
				l != a && 
				l != o && 
				l != n &&

				o != m && 
				o != y && 
				o != x && 
				o != a &&  
				o != n &&

				n != m && 
				n != y && 
				n != x && 
				n != a &&

				m != y && 
				m != x && 
				m != a &&

				y != x &&
			       	y != a &&

			       	x != a)
		{
			
			printf( " Result number %d : %d%d%d%d + %d%d%d%d + %d%d%d%d = %d%d%d%d \n", i, m, y, x, a, m, y, x, a, m, y, x, a, c, l, o, n);
			i++;
		}

		else 
		{
			continue;
		}
	}

	return 0;
}


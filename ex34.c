#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	COULEUR c;
	int T[20];
	int i, min, max;
	
	init_graphics(600, 400);
	for (i = 0; i < 20; i++)
		T[i] = alea_int(100);
	min = 0;
	for (i = 1; i < 20; i++)
		if (T[i] < min)
			min = i;
	max = 0;
	for (i = 1; i < 20; i++)
		if (T[i] > max)
			max = i;
	p1.y = 50;
	for (i = 0; i < 20; i++)
	{
		T[i] = alea_int(100);
		p1.x = 100 + 20 * i;
		p2.x = p1.x + 19;
		p2.y = p1.y + 3 * T[i];
		if (i == min)		c = red;
		else if (i == max)	c = green;
		else 				c = blue;
		draw_fill_rectangle(p1, p2, c);
	}
	wait_escape();
	return 0;
}

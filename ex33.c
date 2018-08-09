#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	int T[20];
	int i;
	
	init_graphics(600, 400);
	p1.y = 50;
	for (i = 0; i < 20; i++)
	{
		T[i] = alea_int(100);
		p1.x = 100 + 20 * i;
		p2.x = p1.x + 19;
		p2.y = p1.y + 3 * T[i];
		draw_fill_rectangle(p1, p2, blue);
	}
	wait_escape();
	return 0;
}

#include <uvsqgraphics.h>

int main()
{
	POINT p[10];
	int i;
	
	init_graphics(640, 480);
	for (i = 0; i < 10; i++)
	{
		p[i] = wait_clic();
		draw_circle(p[i], 10, red);
	}
	for (i = 9; i >= 0; i--)
	{
		wait_clic();
		draw_circle(p[i], 10, black);
	}
	wait_escape();
	return 0;
}

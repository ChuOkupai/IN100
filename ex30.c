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
	wait_clic();
	for (i = 0; i < 10; i++)
		draw_circle(p[i], 10, blue);
	wait_escape();
	return 0;
}

#include <uvsqgraphics.h>

int main()
{
	POINT current, old;
	
	init_graphics(640, 480);
	old.x = 0;
	old.y = 0;
	for (int i = 0; i < 10; i++)
	{
		current = wait_clic();
		draw_circle(old, 100, black);
		draw_circle(current, 100, white);
		old = current;
	}
	wait_escape();
	return 0;
}

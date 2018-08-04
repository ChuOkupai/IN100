#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2, user;
	
	init_graphics(640, 480);
	p1.x = 0;
	p1.y = 0;
	p2.x = p1.x + 10;
	p2.y = p1.y + 10;
	while (1)
	{
		draw_fill_rectangle(p1, p2, red);
		user = wait_clic();
		if (user.x <= p2.x && user.y <= p2.y)
			break;
		fill_screen(black);
		draw_circle(user, 25, white);
	}
	wait_escape();
	return 0;
}

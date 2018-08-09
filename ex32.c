#include <uvsqgraphics.h>

int main()
{
	POINT p[10], user;
	int i, j;
	
	init_graphics(640, 480);
	for (i = 0; i < 10; i++)
	{
		p[i] = wait_clic();
		draw_circle(p[i], 10, red);
	}
	i = 0;
	while (i < 10)
	{
		user = wait_clic();
		for (j = 0; j < 10; j++)
		{
			if (((user.x - p[j].x) * (user.x - p[j].x)) + ((user.y - p[j].y) * (user.y - p[j].y)) <= 100)
			{
				draw_circle(p[j], 10, black);
				p[j].x = 650;
				p[j].y = 490;
				i++;
			}
		}
	}
	wait_escape();
	return 0;
}

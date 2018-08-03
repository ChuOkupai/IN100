#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	
	init_graphics(640, 480);
	
	p1.x = 75;
	p1.y = 405;
	p2.x = p1.x + 200;
	p2.y = p1.y;
	draw_line(p1, p2, white);
	draw_circle(p1, 50, white);
	draw_circle(p2, 50, white);
	p1.x = ((p2.x - p1.x) / 2) + p1.x;
	draw_circle(p1, 50, white);

	p2.x = 590;
	p2.y = 50;
	p1.x = p2.x - 200;
	p1.y = p2.y;
	draw_line(p1, p2, purple);
	p1.y += 100;
	p2.y += 100;
	draw_line(p1, p2, blue);
	p1.y += 100;
	p2.y += 100;
	draw_line(p1, p2, cyan);
	p1.y += 100;
	p2.y += 100;
	draw_line(p1, p2, lime);
	p1.y += 100;
	p2.y += 100;
	draw_line(p1, p2, yellow);

	p1.x = 20;
	p1.y = 20;
	p2.x = p1.x + 100;
	p2.y = p1.y + 100;
	draw_rectangle(p1, p2, white);

	p1.x = 200;
	p1.y = 200;
	p2.x = p1.x + 100;
	p2.y = p1.y;
	draw_line(p1, p2, red);
	p1.x = p2.x;
	p1.y = p1.y + 100;
	draw_line(p1, p2, green);
	p2.x = p2.x - 100;
	p2.y = p1.y;
	draw_line(p1, p2, yellow);
	p1.x = p2.x;
	p1.y = p1.y - 100;
	draw_line(p1, p2, blue);

	p1.x = 95;
	p1.y = 145;
	p2.x = p1.x + 50;
	p2.y = p1.y + 50;
	draw_rectangle(p1, p2, white);
	draw_line(p1, p2, white);
	p1.y += 50;
	p2.y -= 50;
	draw_line(p1, p2, white);

	p1.x = 250;
	p1.y = 110;
	draw_circle(p1, 50, white);
	p2.x = p1.x - 25;
	p2.y = p1.y + 43;
	p1.x -= 50;
	draw_line(p1, p2, white);
	p2.y -= 86;
	draw_line(p1, p2, white);
	p1.x += 100;
	p2.x += 50;
	draw_line(p1, p2, white);
	p2.y += 86;
	draw_line(p1, p2, white);
	p1.x = p2.x - 50;
	p1.y = p2.y;
	draw_line(p1, p2, white);
	p1.y -= 86;
	p2.y -= 86;
	draw_line(p1, p2, white);

	wait_escape();
	return 0;
}

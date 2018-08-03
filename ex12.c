#include <uvsqgraphics.h>

void dessine_hexagone_circonscrit(POINT p)
{
	POINT p2;
	
	draw_circle(p, 100, white);
	p2.x = p.x - 50;
	p2.y = p.y + 87;
	p.x -= 100;
	draw_line(p, p2, white);
	p2.y -= 174;
	draw_line(p, p2, white);
	p.x += 200;
	p2.x += 100;
	draw_line(p, p2, white);
	p2.y += 174;
	draw_line(p, p2, white);
	p.x = p2.x - 100;
	p.y = p2.y;
	draw_line(p, p2, white);
	p.y -= 174;
	p2.y -= 174;
	draw_line(p, p2, white);
}

int main()
{
	init_graphics(640, 480);
	dessine_hexagone_circonscrit(wait_clic());
	wait_escape();
	return 0;
}

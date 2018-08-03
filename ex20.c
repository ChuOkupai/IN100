#include <uvsqgraphics.h>

int main()
{
	POINT p;
	COULEUR c;
		
	init_graphics(640, 480);
	p = wait_clic();
	if (p.x % 2)
		c = (p.y % 2) ? green : bleu;
	else
		c = (p.y % 2) ? yellow : red;
	draw_circle(p, 25, c);
	wait_escape();
	return 0;
}

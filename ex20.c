#include <uvsqgraphics.h>

int main()
{
	POINT p;
	COULEUR c;
		
	init_graphics(640, 480);
	p = wait_clic();
	if (p.x % 2)
		if (p.y % 2)
			c = green;
		else
			c = bleu;
	else
		if (p.y % 2)
			c = yellow;
		else
			c = red;
	draw_circle(p, 25, c);
	wait_escape();
	return 0;
}

#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	int longueur;
	
	init_graphics(640, 480);
	p1.x = lire_entier_clavier();
	p2.x = lire_entier_clavier();
	p1.y = 100;
	p2.y = p1.y;
	draw_fill_circle(p1, 5, red);
	draw_fill_circle(p2, 5, red);
	draw_line(p1, p2, white);
	if (p2.x < p1.x)
	{
		longueur = p1.x;
		p1.x = p2.x;
		p2.x = longueur;
	}
	longueur = p2.x - p1.x;
	p2.x -= longueur / 2;
	p2.y += longueur;
	draw_fill_circle(p2, 5, red);
	draw_line(p1, p2, white);
	p1.x += longueur;
	draw_line(p1, p2, white);
	wait_escape();
	return 0;
}

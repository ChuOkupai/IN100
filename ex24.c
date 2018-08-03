#include <uvsqgraphics.h>

int main()
{
	POINT p;
	int taille;
	
	taille = 200;
	init_graphics(taille, taille);
	p.x = taille / 2;
	p.y = p.x;
	for (int rayon = 10; rayon <= taille / 2; rayon += taille / 20)
		draw_circle(p, rayon, white);
	wait_escape();
	return 0;
}

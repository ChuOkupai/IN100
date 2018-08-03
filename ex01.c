#include <uvsqgraphics.h>

int main()
{
	/* Déclarer les variables ci-dessous */
	POINT p1;
	POINT p2;

	/* Initialisation de la fenêtre graphique */
	init_graphics(400, 500);

	/* Tapez votre code ci-dessous */
	p1.x = 100;
	p1.y = 90;
	p2.x = 200;
	p2.y = 300;
	draw_fill_rectangle(p1, p2, bleu);
	p1.x = 10;
	p1.y = 10;
	p2.x = 400;
	p2.y = 500;
	draw_line(p1,p2,rouge);
	p1.x = 300;
	p1.y = 350;
	draw_circle(p1,100, magenta);
	/* Fin de votre code */

	/* Permet d’attendre un appui sur Echap avant de fermer la fenêtre graphique */
	wait_escape();
	return 0;
}

#include<allegro5/allegro.h>
#include<allegro5/allegro_primitives.h>

int main() {

	ALLEGRO_DISPLAY *display = NULL;

	al_init();
	al_init_primitives_addon();

	display = al_create_display(600, 600);
	
	al_draw_filled_rectangle(100, 100, 500, 200, al_map_rgb(500, 200, 100));
	al_draw_filled_circle(150, 200, 50, al_map_rgb(50, 50, 50));
	al_draw_filled_circle(450, 200, 50, al_map_rgb(50, 50, 50));
	al_draw_filled_rounded_rectangle(200, 100, 400, 50, 300, 10, al_map_rgb(500, 200, 100));
	al_draw_filled_triangle(400, 50, 500, 100, 400, 100, al_map_rgb(200, 200, 255));

	al_flip_display();
	al_rest(5);
	











}
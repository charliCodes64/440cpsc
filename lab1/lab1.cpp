
#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include <time.h>

int main()
{
    al_init();
    const int width = 800;
    const int height = 700;
    ALLEGRO_DISPLAY * display = al_create_display(width, height);
    al_init_primitives_addon();

    if (!al_init()){
        al_show_native_message_box(NULL, NULL, NULL, "Can not initialize Allegro 5!", NULL, NULL);
    }

    if (!display)
    {
        al_show_native_message_box(NULL, NULL, NULL, "Can not initialize Allegro Display!", NULL, NULL);
    }
   
    //primitives below
    al_draw_filled_ellipse(400, 600, 100, 35, al_map_rgb(255, 255, 255));
    al_draw_filled_ellipse(360, 650, 12, 35, al_map_rgb(255, 255, 255));
    al_draw_filled_ellipse(340, 650, 12, 35, al_map_rgb(255, 255, 255));
    al_draw_filled_ellipse(450, 650, 12, 35, al_map_rgb(255, 255, 255)); 
    al_draw_filled_ellipse(470, 650, 12, 35, al_map_rgb(255, 255, 255));
    al_draw_filled_rectangle(500, 530, 480, 600, al_map_rgb(255, 255, 255));
    al_draw_filled_ellipse(510, 540, 45, 18, al_map_rgb(255, 255, 255));
    al_draw_filled_triangle(500, 540, 480, 510, 560, 540, al_map_rgb(255, 255, 255));
    al_draw_filled_ellipse(515, 532, 5, 5, al_map_rgb(0, 5, 55));
    al_draw_line(250, 550, 350, 620, al_map_rgb(255, 255, 255), 6);
    al_draw_line(200, 554, 251, 550, al_map_rgb(255, 255, 255), 6);
    al_draw_line(531, 540, 560, 540, al_map_rgb(0, 0, 0), 3);

    al_flip_display();
    al_rest(20);
    al_destroy_display(display);   
}
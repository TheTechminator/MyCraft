#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_opengl.h"
#include <gl/glu.h>
#include "theboss.h"
#include "chunks.h"

#define asdgr(degree) (ALLEGRO_PI/180*degree)
#define asrd(degree) (degree/ALLEGRO_PI*180)

int idozito;
double xmin, xmax, ymin, ymax;
int szz,szx,szy;

int tavol(int db){
szz=abs((pont[db].z+50)-nezet.z);
szx=abs((pont[db].x+50)-nezet.x);
szy=abs((pont[db].y+50)-nezet.y);
return (sqrt(szz*szz+szx*szx)+sqrt(szy*szy+szx*szx)+sqrt(szz*szz+szy*szy))/3;
}


int main(){

    dX=1366,dY=768; ///Ablakméret
    const float FPS = 60.0;
    int kat, kat1;
    int ido; ///
    int fel=0;
    float lend=0;
    float grav=7.0;
    float visza; /// 0: y
    int tori=0; ///inventori megynyitása


    ALLEGRO_DISPLAY *display = NULL;
    FILE *f;

    if(!al_init()) {
        fprintf(stderr, "failed to initialize allegro!\n");
        return -1;
    }

    al_set_new_display_flags (  ALLEGRO_OPENGL);
    al_set_new_display_option(  ALLEGRO_COLOR_SIZE,  32,  ALLEGRO_REQUIRE);
    al_set_new_display_option(  ALLEGRO_DEPTH_SIZE,  24,  ALLEGRO_REQUIRE);
    al_set_new_display_option(  ALLEGRO_STENCIL_SIZE,  8,  ALLEGRO_REQUIRE);

    al_install_keyboard();
    al_install_mouse();


    ALLEGRO_TIMER *timer = al_create_timer(1.0 / FPS);
    ALLEGRO_EVENT_QUEUE *queue = al_create_event_queue();
    ALLEGRO_MONITOR_INFO info;


    al_init();
    al_init_image_addon();
    al_init_primitives_addon();

    al_get_monitor_info(0, &info);
    //disX=info.x2; disY=info.y2;

     ymax = 1.0 * tan( 90 * M_PI / 360.0f );
     ymin = -ymax;

     xmin = ymin * ((float)dX/(float)dY);
     xmax = ymax * ((float)dX/(float)dY);

    display = al_create_display(dX, dY-50);
    al_hide_mouse_cursor(display);

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_mouse_event_source());
    al_register_event_source(queue, al_get_timer_event_source(timer));
    al_start_timer(timer);

glEnable(GL_DEPTH_TEST);
glAlphaFunc(GL_GREATER,0.5);
glEnable(GL_ALPHA_TEST);

glDisable(GL_CULL_FACE);


    beread();

    texturabetoltes();
    glEnable(GL_TEXTURE_2D);

    position();
    kilencracs();

    while(1){
        idozito=clock();

        for(int ek=0; ek<testdb*8; ek+=8) pont[ek].tavolsag=tavol(ek);

        if(GetAsyncKeyState(27)){fir(testdb); return 0;} ///Esc kilépés

        if(GetAsyncKeyState(32)){if (mehetek[1]==0 && repul==0 && mehetek[2]==1){
        fel=2; lend=14; gravitation=grav;}} ///Space
        if(!GetAsyncKeyState(32) && fel==2) fel=1;

        if(mehetek[1]==1) {lend=0; fel=0;}
        if(fel==1) {nezet.y+=lend; lend*=0.88;}
        if(lend<0.55 && mehetek[2]==0 && repul==0) {nezet.y-=gravitation; if(gravitation<50) gravitation*=1.05;}
        if(mehetek[2]==1) gravitation=grav;

         if(GetAsyncKeyState(70) && ido==1){
            if(repul==1) {repul=0; gravitation=grav;}
            else repul=1;
            ido=0;}
         if(!GetAsyncKeyState(70)) ido=1;

            eger(); ///Körbe nézegetés egérrel

            iranyit(); ///Mozgató billentyűk

            for(int ki=0; ki<=12; ki++)
            mehetek[ki]=0;
            visza=0;
            elore(&visza);
            nezet.y+=visza;

        if(al_mouse_button_down(&mst,1)){
        if(kat==1)
           {rendez(testdb);
            latja();
            if(van!=-1 && ajtovalt==0){
            kepvh(testdb,szamok); if(hasit==0) testdb++; }
            if(ajtovalt!=0){

                if(pont[ajtovalt+1].x-pont[ajtovalt].x>20) {pont[ajtovalt+1].x-=90; pont[ajtovalt+5].x-=90; pont[ajtovalt+7].x-=90; pont[ajtovalt+3].x-=90; pont[ajtovalt+5].z+=90; pont[ajtovalt+2].z+=90; pont[ajtovalt+4].z+=90; pont[ajtovalt+3].z+=90; ajtovalt=0;}
                if(pont[ajtovalt+1].x-pont[ajtovalt].x<20 && ajtovalt!=0) {pont[ajtovalt+1].x+=90; pont[ajtovalt+5].x+=90; pont[ajtovalt+7].x+=90; pont[ajtovalt+3].x+=90; pont[ajtovalt+5].z-=90; pont[ajtovalt+2].z-=90; pont[ajtovalt+4].z-=90; pont[ajtovalt+3].z-=90;}
            } }
        kat=0;}

        if(!al_mouse_button_down(&mst,1)) kat=1;

            al_set_mouse_xy(display, dX/2, dY/2);

            al_clear_to_color(al_map_rgb(0,200,255));

            glEnable(GL_DEPTH_TEST);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glFrustum( xmin, xmax, ymin, ymax, 1, 4000 );
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            gluLookAt (nezet.x,nezet.y,nezet.z,nezet.x+cos(asdgr(nezet.b))*cos(asdgr(nezet.a)),nezet.y+sin(asdgr(nezet.b)),nezet.z+cos(asdgr(nezet.b))*sin(asdgr(nezet.a)),0,1,0);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);


            kocka(); ///Kockákat kirajzoló függvény


        if(al_mouse_button_down(&mst,2)){
        if(kat1==1)
           {rendez(testdb);
            torol=-1; latja();
            if(torol>=0){
            general2();
            pont[torol].latas=0;}}
        kat1=0;}
        if(!al_mouse_button_down(&mst,2)) kat1=1;

            glDisable(GL_DEPTH_TEST);


            szambil();
            ikonok();
            kilenc();

if(GetAsyncKeyState(69)) tori=1;

if(tori==1){
iay=-1; iax=-2;
  al_show_mouse_cursor(display);
    while(tori==1){
            if(GetAsyncKeyState(81)) tori=0;
            invent();}
    al_hide_mouse_cursor(display);}

            al_flip_display();

masol();
position();
kilencracs();
if(kilracs1[0][0]!=kilracs[0][0] || kilracs1[1][0]!=kilracs[1][0] || clock()<1000)
racshas();

        printf("ido: %d\n",clock()-idozito);

    }

    al_destroy_display(display);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);
    return 0;
}

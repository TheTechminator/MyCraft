#ifndef _IRANYITAS
#define _IRANYITAS

#include <windows.h>
int dX, dY;


int repul=1;
float gravitation;
int mehetek[12];
int szamok=9;
int szamertek[10]={0,1,2,3,4,5,6,7,8,9};

void szambil(){
if(GetAsyncKeyState(49)){szamok=szamertek[1]; }
if(GetAsyncKeyState(50)){szamok=szamertek[2]; }
if(GetAsyncKeyState(51)){szamok=szamertek[3]; }
if(GetAsyncKeyState(52)){szamok=szamertek[4]; }
if(GetAsyncKeyState(53)){szamok=szamertek[5]; }
if(GetAsyncKeyState(54)){szamok=szamertek[6]; }
if(GetAsyncKeyState(55)){szamok=szamertek[7]; }
if(GetAsyncKeyState(56)){szamok=szamertek[8]; }
if(GetAsyncKeyState(57)){szamok=szamertek[9]; }
}

int iax, iay, iadb;

void szamertekad(){
if(GetAsyncKeyState(49)){szamertek[1]=iadb; }
if(GetAsyncKeyState(50)){szamertek[2]=iadb; }
if(GetAsyncKeyState(51)){szamertek[3]=iadb; }
if(GetAsyncKeyState(52)){szamertek[4]=iadb; }
if(GetAsyncKeyState(53)){szamertek[5]=iadb; }
if(GetAsyncKeyState(54)){szamertek[6]=iadb; }
if(GetAsyncKeyState(55)){szamertek[7]=iadb; }
if(GetAsyncKeyState(56)){szamertek[8]=iadb; }
if(GetAsyncKeyState(57)){szamertek[9]=iadb; }
}


void iranyit(){

            if(GetAsyncKeyState(38)){ ///Fel nyíl (fel)
            if (mehetek[1]==0 && repul==1){ nezet.y+=nezet.s; gravitation=0;}}

            if(GetAsyncKeyState(40)){ ///Le nyíl (le)
            if (mehetek[2]==0){ nezet.y-=nezet.s; gravitation=0;}}

            if(GetAsyncKeyState(65)){ ///A betű (ballra)
                if(mehetek[10]==0) { nezet.x+=nezet.s*sin(asdgr(nezet.a));}
                if(mehetek[9]==0) { nezet.z-=nezet.s*cos(asdgr(nezet.a));}}

            if(GetAsyncKeyState(68)){ ///D betű (jobbra)
                if(mehetek[8]==0) { nezet.x-=nezet.s*sin(asdgr(nezet.a));}
                if(mehetek[7]==0) { nezet.z+=nezet.s*cos(asdgr(nezet.a));}}

            if(GetAsyncKeyState(87)){ ///W betű (előre)
                if(mehetek[4]==0) { nezet.x+=nezet.s*cos(asdgr(nezet.a));}
                if(mehetek[3]==0) { nezet.z+=nezet.s*sin(asdgr(nezet.a));}}

            if(GetAsyncKeyState(83)){ ///S betű (hátra)
                if(mehetek[6]==0) { nezet.x-=nezet.s*cos(asdgr(nezet.a));}
                if(mehetek[5]==0) { nezet.z-=nezet.s*sin(asdgr(nezet.a));}}

}

ALLEGRO_MOUSE_STATE mst;

void eger(){
            al_get_mouse_state(&mst);
                                                 nezet.a+=float(mst.x-dX/2)/5;
            if((mst.y-dY/2)<0) if(nezet.b<=88)  {nezet.b-=float(mst.y-dY/2)/5;}
            if((mst.y-dY/2)>=0) if(nezet.b>=-88){nezet.b-=float(mst.y-dY/2)/5;}
            if(nezet.b>88) nezet.b=88;
            if(nezet.b<-88) nezet.b=-88;

            if(nezet.a>=180) nezet.a-=360;
            if(nezet.a<=-180) nezet.a+=360;

return;
}

int inventegerpoz(int i, int f){
al_get_mouse_state(&mst);

if(441+41*i<mst.x && 482+41*i>mst.x && 60+35.5*f<mst.y && 95.5+35.5*f>mst.y)
    if(al_mouse_button_down(&mst,1)) return 1;

return 0;
}

#endif

                    ///Írta és rendezte: Egri Krisztofer///

#ifndef _BLOCKTIPUSOK
#define _BLOCKTIPUSOK

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <math.h>
#include "plusblock.h"
#include "texturak.h"

int ki; int pi;
int testdb;
int latotav=2500; ///Látótávolság

void egykepes(){

for(pi=1; pi<=100; pi++){

glBindTexture(GL_TEXTURE_2D, btexture[pi]); ///Föld
glBegin(GL_QUADS);

for(ki=0; ki<testdb*8; ki+=8)
if(pont[ki].tavolsag<=latotav && pi==pont[ki].tipus && pont[ki].latas==1){

///alja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z

///teteje
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z

///eleje
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z); // X,Y,Z

///jobb
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z

///bal
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z

}
glEnd();}

}


void ketkepes(){

for(ki=0; ki<testdb*8; ki+=8)
if(pont[ki].tavolsag<=latotav && pont[ki].tipus>100 && pont[ki].tipus<110 && pont[ki].latas==1){

///alja
glBindTexture(GL_TEXTURE_2D, btexture2[pont[ki].tipus-100]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z

///teteje
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
glEnd();

///eleje
glBindTexture(GL_TEXTURE_2D, btexture[pont[ki].tipus]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z); // X,Y,Z

///jobb
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z

///bal
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
glEnd();
}

}


void craftingtable(){

for(ki=0; ki<testdb*8; ki+=8)
if(pont[ki].tavolsag<=latotav && pont[ki].tipus==110 && pont[ki].latas==1){

///alja
glBindTexture(GL_TEXTURE_2D, btexture2[8]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glEnd();

///teteje
glBindTexture(GL_TEXTURE_2D, ctable[1]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
glEnd();

///eleje
glBindTexture(GL_TEXTURE_2D, btexture[110]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z); // X,Y,Z
glEnd();

///jobb
glBindTexture(GL_TEXTURE_2D, ctable[0]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z

///bal
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
glEnd();
}

}

void haromkepes(){
for(int lo=0; lo<3; lo++){
if(lo==0){glBindTexture(GL_TEXTURE_2D, harom2[0]); glBegin(GL_QUADS);}
if(lo==1){glBindTexture(GL_TEXTURE_2D, harom1[0]); glBegin(GL_QUADS);}
if(lo==2){glBindTexture(GL_TEXTURE_2D, btexture[111]); glBegin(GL_QUADS);}

for(ki=0; ki<testdb*8; ki+=8)
if(pont[ki].tavolsag<=latotav && pont[ki].tipus==111  && pont[ki].latas==1){

///alja
if(lo==0){
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
}

///teteje
if(lo==1){
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
}

///eleje
if(lo==2){
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z); // X,Y,Z

///jobb
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z

///bal
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
}
}
glEnd();
}

}


void ajtok(){

for(ki=0; ki<testdb*8; ki+=8)
if(pont[ki].tavolsag<=latotav && pont[ki].tipus>111 && pont[ki].tipus<119 && pont[ki].latas==1){

///alja
glBindTexture(GL_TEXTURE_2D, btexture[pont[ki].tipus]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(1.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y+100, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y+100, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y+100, pont[0+ki].z);// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y+100, pont[7+ki].z); // X,Y,Z


///teteje

glTexCoord2f(0.0, 1.0); // Bottom left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Bottom right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
glEnd();

///eleje
glBindTexture(GL_TEXTURE_2D, btexture[pont[ki].tipus]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y+100, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y+100, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y+100, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y+100, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z); // X,Y,Z

///jobb
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y+100, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y+100, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z

///bal
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y+100, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y+100, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z); // X,Y,Z
glEnd();


///alja
glBindTexture(GL_TEXTURE_2D, btexture[pont[ki].tipus]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Top right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z);// X,Y,Z
glTexCoord2f(0.0, 0.0); // Top left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z


///teteje

glTexCoord2f(0.0, 1.0); // Bottom left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y-100, pont[1+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y-100, pont[6+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y-100, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y-100, pont[5+ki].z); // X,Y,Z
glEnd();

///eleje
glBindTexture(GL_TEXTURE_2D, ajt[pont[ki].tipus-112]); ///Föld
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y-100, pont[6+ki].z);// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y-100, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y-100, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y-100, pont[2+ki].z); // X,Y,Z

///jobb
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y-100, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y-100, pont[6+ki].z); // X,Y,Z

///bal
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y-100, pont[1+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y-100, pont[5+ki].z); // X,Y,Z
glEnd();
}

}


void fuvek(){

for(pi=119; pi<=139; pi++){

glBindTexture(GL_TEXTURE_2D, btexture[pi]); ///Föld
glBegin(GL_QUADS);

for(ki=0; ki<testdb*8; ki+=8)
if(pont[ki].tavolsag<=latotav && pi==pont[ki].tipus && pont[ki].latas==1){
///eleje
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[7+ki].x, pont[7+ki].y, pont[7+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[4+ki].x, pont[4+ki].y, pont[4+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[2+ki].x, pont[2+ki].y, pont[2+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[1+ki].x, pont[1+ki].y, pont[1+ki].z); // X,Y,Z

///hatulja
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(pont[0+ki].x, pont[0+ki].y, pont[0+ki].z); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(pont[3+ki].x, pont[3+ki].y, pont[3+ki].z); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(pont[5+ki].x, pont[5+ki].y, pont[5+ki].z );// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(pont[6+ki].x, pont[6+ki].y, pont[6+ki].z); // X,Y,Z
}
glEnd();}

}



#endif
                    ///Írta és rendezte: Egri Krisztofer///

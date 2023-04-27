#ifndef _PLUSBLOCK
#define _PLUSBLOCK
#include <stdio.h>
#include <math.h>

#define asdgr(degree) (ALLEGRO_PI/180*degree)
#define asrd(degree) (degree/ALLEGRO_PI*180)


struct adat{ ///Nézet
float y=0; ///pozíció
float z=0; ///pozíció
float a=0; ///alpha szög  y tengely körüli forgatás
float b=0; ///beta szög x tengely körüli forgatás
float x=0; ///pozíció
float g=0; ///gamma szög z tengely körüli forgatás
float f=0; ///látószög
int s=6; ///játékos sebbessége
};

struct padat{ ///pontok
int x; ///pozíció
int y; ///pozíció
int z; ///pozíció
int tipus;
float tavolsag;
int latas;
};

struct kadat{ ///kijelzőre kerülő kép adatai
double xv; ///Végső x pozíció
double yv; ///végős y pozíció
int x; ///ieiglenes pozíció
int y; ///ieiglenes  pozíció
int z; ///ieiglenes pozíció
};

adat nezet;
padat *pont=(padat*)malloc(1000000000);
kadat kep[10];

int koza,kozb;
int kilracs[2][10];
int oszracs[2][10000]; ///Az összes már feltérképezett terület
int oracsdb=0; ///
int rhas=0;

void newblock(int db, int x, int y, int z){ ///új kocka létrehozása
for(int i=0; i<8; i++){
kep[i].x=pont[db+i].x+x;
kep[i].y=pont[db+i].y+y;
kep[i].z=pont[db+i].z+z;
}
}
int hasit;
void kepvh(int tdb, int tipusa){///képpontok végleges helyükre kerülnek
int testdb=tdb*8;
hasit=0;
if(tipusa>111 && tipusa<119) {kep[1].x-=90; kep[5].x-=90; kep[7].x-=90; kep[3].x-=90; kep[1].y+=100; kep[5].y+=100; kep[6].y+=100; kep[2].y+=100;}

for(int kol=0; kol<testdb*8; kol+=8)
if(pont[kol].x==kep[0].x && pont[kol].y==kep[0].y && pont[kol].z==kep[0].z){ if(pont[kol].latas==0) pont[kol].tipus=tipusa; pont[kol].latas=1; hasit=1; }

if(hasit==0){
pont[testdb].tipus=tipusa;
pont[testdb].latas=1;

for(int i=0; i<8; i++){
pont[testdb+i].x=kep[i].x;
pont[testdb+i].y=kep[i].y;
pont[testdb+i].z=kep[i].z;
}
}
}

void fir(int testdb){
FILE *f=fopen("adat/blocks.txt","w");
fprintf(f,"%d\n",testdb);
for(int i=0; i<testdb*8; i++){
    fprintf(f,"%d %d %d %d %d\n",pont[i].x,pont[i].y,pont[i].z,pont[i].tipus,pont[i].latas);}
fclose(f);

f=fopen("adat/jatekos.txt","w");
fprintf(f,"%f %f %f %f %f %f",nezet.x,nezet.y,nezet.z,nezet.a,nezet.b,nezet.g);
fclose(f);

f=fopen("adat/palya.txt","w");

fprintf(f,"%d\n",oracsdb);

for(int po=0; po<oracsdb; po++){
    fprintf(f,"%d %d\n",oszracs[0][po],oszracs[1][po]);
}

fclose(f);
}

int upblockad(int db){ ///kocka fölülre rakás

float x=nezet.x,y=nezet.y,z=nezet.z;
for(int i=0; i<100; i+=1){
z+=cos(asdgr(nezet.b))*sin(asdgr(nezet.a))*10;
x+=cos(asdgr(nezet.b))*cos(asdgr(nezet.a))*10;
y+=sin(asdgr(nezet.b))*10;

if(pont[db+1].z<=z && pont[db+2].z>=z && pont[db+1].x>=x && pont[db+2].x<=x && pont[db+2].y-12<=y && pont[db+2].y>=y ) return 1;
}
return 0;
}

int downblockad(int db){ ///kocka alulra rakás

float x=nezet.x,y=nezet.y,z=nezet.z;
for(int i=0; i<100; i+=1){
z+=cos(asdgr(nezet.b))*sin(asdgr(nezet.a))*10;
x+=cos(asdgr(nezet.b))*cos(asdgr(nezet.a))*10;
y+=sin(asdgr(nezet.b))*10;

if(pont[db+1].z<=z && pont[db+2].z>=z && pont[db+1].x>=x && pont[db+2].x<=x && pont[db].y+12>=y && pont[db].y<=y ) return 1;
}
return 0;

}

int enez(int db){

float x=nezet.x,y=nezet.y,z=nezet.z;
for(int i=0; i<100; i+=1){
z+=cos(asdgr(nezet.b))*sin(asdgr(nezet.a))*10;
x+=cos(asdgr(nezet.b))*cos(asdgr(nezet.a))*10;
y+=sin(asdgr(nezet.b))*10;

if(pont[db+1].x>=x && pont[db].x<=x && pont[db+6].y>=y && pont[db].y<=y && pont[db].z+12>=z && pont[db].z<=z) return 1;

}
return 0;
}

int hnez(int db){

float x=nezet.x,y=nezet.y,z=nezet.z;
for(int i=0; i<100; i+=1){
z+=cos(asdgr(nezet.b))*sin(asdgr(nezet.a))*10;
x+=cos(asdgr(nezet.b))*cos(asdgr(nezet.a))*10;
y+=sin(asdgr(nezet.b))*10;

if(pont[db+3].x>=x && pont[db+2].x<=x && pont[db+5].y>=y && pont[db+4].y<=y && pont[db+4].z-12<=z && pont[db+4].z>=z) return 1;
}
return 0;
}

int jnez(int db){

float x=nezet.x,y=nezet.y,z=nezet.z;
for(int i=0; i<100; i+=1){
z+=cos(asdgr(nezet.b))*sin(asdgr(nezet.a))*10;
x+=cos(asdgr(nezet.b))*cos(asdgr(nezet.a))*10;
y+=sin(asdgr(nezet.b))*10;

if(pont[db+2].y>=y && pont[db].y<=y && pont[db].z<=z && pont[db+4].z>=z && pont[db].x+12>=x && pont[db].x<=x) return 1;
}
return 0;
}

int bnez(int db){

float x=nezet.x,y=nezet.y,z=nezet.z;
for(int i=0; i<100; i+=1){
z+=cos(asdgr(nezet.b))*sin(asdgr(nezet.a))*10;
x+=cos(asdgr(nezet.b))*cos(asdgr(nezet.a))*10;
y+=sin(asdgr(nezet.b))*10;

if(pont[db+5].y>=y && pont[db+7].y<=y && pont[db+7].z<=z && pont[db+3].z>=z && pont[db+7].x-12<=x && pont[db+7].x>=x) return 1;

}
return 0;
}

int px;
int mindex;


void rendez(int testdb){


for(int i=0; i<(testdb-1)*8; i+=8){
        mindex=i;
for(int k=i+8; k<testdb*8; k+=8){
    if(pont[mindex].tavolsag<pont[k].tavolsag) mindex=k;
}
for(int f=0; f<8; f++){
    px=pont[mindex+f].x;
    pont[mindex+f].x=pont[i+f].x;
    pont[i+f].x=px;

    px=pont[mindex+f].y;
    pont[mindex+f].y=pont[i+f].y;
    pont[i+f].y=px;

    px=pont[mindex+f].z;
    pont[mindex+f].z=pont[i+f].z;
    pont[i+f].z=px;}

    px=pont[mindex].tavolsag;
    pont[mindex].tavolsag=pont[i].tavolsag;
    pont[i].tavolsag=px;

    px=pont[mindex].tipus;
    pont[mindex].tipus=pont[i].tipus;
    pont[i].tipus=px;

    px=pont[mindex].latas;
    pont[mindex].latas=pont[i].latas;
    pont[i].latas=px;

}
}

#endif
                    ///Írta és rendezte: Egri Krisztofer///

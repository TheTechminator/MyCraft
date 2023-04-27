#ifndef _CHUNK
#define _CHUNK
#include <stdio.h>
#include <math.h>
#include "plusblock.h"

char name[100];
int nam;
FILE*chuk;

int kilracs1[2][10];


int disz, disz1, disz2; ///x z

void general(){
disz=kilracs[0][nam]-1000;
disz1=kilracs[1][nam]-1000;

int db=testdb*8;
for(int ki=0; ki<20; ki++)
for(int ik=0; ik<20; ik++){

    pont[0+db].x=disz+ik*100;     pont[0+db].y=100;     pont[0+db].z=disz1+ki*100;
    pont[1+db].x=disz+100+ik*100; pont[1+db].y=200;     pont[1+db].z=disz1+ki*100;
    pont[2+db].x=disz+ik*100;     pont[2+db].y=200;     pont[2+db].z=disz1+100+ki*100;
    pont[3+db].x=disz+100+ik*100; pont[3+db].y=100;     pont[3+db].z=disz1+100+ki*100;

    pont[4+db].x=disz+ik*100;     pont[4+db].y=100;     pont[4+db].z=disz1+100+ki*100;
    pont[5+db].x=disz+100+ik*100; pont[5+db].y=200;     pont[5+db].z=disz1+100+ki*100;
    pont[6+db].x=disz+ik*100;     pont[6+db].y=200;     pont[6+db].z=disz1+ki*100;
    pont[7+db].x=disz+100+ik*100; pont[7+db].y=100;     pont[7+db].z=disz1+ki*100;
    pont[0+db].tipus=111; pont[0+db].latas=1; db+=8;}

    testdb+=400;

}

void position(){

  if(nezet.x>0) koza=int(nezet.x+1000)/2000*2000;
  if(nezet.x<0) koza=int(nezet.x-1000)/2000*2000;

  if(nezet.z>0) kozb=int(nezet.z+1000)/2000*2000;
  if(nezet.z<0) kozb=int(nezet.z-1000)/2000*2000;
return;
}

void kilencracs(){

    kilracs[0][0]=koza+2000;     kilracs[0][1]=koza+2000;     kilracs[0][2]=koza+2000;
    kilracs[0][3]=koza;          kilracs[0][4]=koza;          kilracs[0][5]=koza;
    kilracs[0][6]=koza-2000;     kilracs[0][7]=koza-2000;     kilracs[0][8]=koza-2000;

    kilracs[1][0]=kozb-2000;     kilracs[1][1]=kozb;          kilracs[1][2]=kozb+2000;
    kilracs[1][3]=kozb-2000;     kilracs[1][4]=kozb;          kilracs[1][5]=kozb+2000;
    kilracs[1][6]=kozb-2000;     kilracs[1][7]=kozb;          kilracs[1][8]=kozb+2000;
return;
}

void masol(){

for(int ko1=0; ko1<9; ko1++){
kilracs1[0][ko1]=kilracs[0][ko1];
kilracs1[1][ko1]=kilracs[1][ko1];
}
return;
}

int ideigx, ideigy, ideigz; ///A chunk írásnál olvasásnál ezeket a középpontokat használja
int fhgdb;

void kozepont(){ ///Az blockokat amelyek kockák lebontja a kozéppontjukra hogy majd chunk ba írhassa
    ideigx=pont[fhgdb].x+50;
    ideigy=pont[fhgdb].y+50;
    ideigz=pont[fhgdb].z+50;
}

void kozepontbol(){ ///A chunk bol kiolvasott középpontból felépiti az eredeti blockot de ez csak kockáknál működik
    pont[fhgdb].x=ideigx-50;   pont[fhgdb].y=ideigy-50;   pont[fhgdb].z=ideigz-50;
    pont[fhgdb+1].x=ideigx+50; pont[fhgdb+1].y=ideigy+50; pont[fhgdb+1].z=ideigz-50;
    pont[fhgdb+2].x=ideigx-50; pont[fhgdb+2].y=ideigy+50; pont[fhgdb+2].z=ideigz+50;
    pont[fhgdb+3].x=ideigx+50; pont[fhgdb+3].y=ideigy-50; pont[fhgdb+3].z=ideigz+50;

    pont[fhgdb+4].x=ideigx-50; pont[fhgdb+4].y=ideigy-50; pont[fhgdb+4].z=ideigz+50;
    pont[fhgdb+5].x=ideigx+50; pont[fhgdb+5].y=ideigy+50; pont[fhgdb+5].z=ideigz+50;
    pont[fhgdb+6].x=ideigx-50; pont[fhgdb+6].y=ideigy+50; pont[fhgdb+6].z=ideigz-50;
    pont[fhgdb+7].x=ideigx+50; pont[fhgdb+7].y=ideigy-50; pont[fhgdb+7].z=ideigz-50;

}

void chunkir(){ ///chunkokba írja a blockokat
for(int ko1=0; ko1<9; ko1++){
sprintf(name,"chunk/%d %d.chunk",kilracs1[0][ko1], kilracs1[1][ko1]);
chuk=fopen(name,"w");

for(int lo=0; lo<testdb*8; lo+=8){
    fhgdb=lo; kozepont();
    if(pont[lo].x<=kilracs1[0][ko1]+900 && pont[lo].x>=kilracs1[0][ko1]-1000 && pont[lo].z<=kilracs1[1][ko1]+900 && pont[lo].z>=kilracs1[1][ko1]-1000){
       fprintf(chuk,"%d %d %d %d %d\n",ideigx,ideigy,ideigz,pont[lo].tipus,pont[lo].latas);
    }

}
fclose(chuk);
}
return;
}

void chunkolvas(){ ///Kiolvassa a chunkokbol az adatokat
sprintf(name,"chunk/%d %d.chunk",kilracs[0][nam], kilracs[1][nam]);
chuk=fopen(name,"r");

int chukdb=testdb*8;

while(fscanf(chuk,"%d %d %d %d %d\n",&ideigx,&ideigy,&ideigz,&pont[chukdb].tipus,&pont[chukdb].latas)==5) {fhgdb=chukdb; kozepontbol(); chukdb+=8; testdb++;}

fclose(chuk);
}

void racshas(){
chunkir();
testdb=0;

for(int op=0; op<9; op++){
    rhas=0;
    for(int i=0; i<oracsdb; i++){
        if(oszracs[0][i]==kilracs[0][op] && oszracs[1][i]==kilracs[1][op]) rhas=1;
    }
    nam=op;
    if(rhas==0){ oszracs[0][oracsdb]=kilracs[0][op]; oszracs[1][oracsdb]=kilracs[1][op]; oracsdb++; general();}
    else chunkolvas();
    }

}

void beread(){
    FILE *f=fopen("adat/palya.txt","r");
    fscanf(f,"%d\n",&oracsdb);
    for(int pofon=0; pofon<oracsdb; pofon++)
    fscanf(f,"%d %d\n",&oszracs[0][pofon],&oszracs[1][pofon]);
    fclose(f);

    f=fopen("adat/blocks.txt","r");
    fscanf(f,"%d\n",&testdb);
    if(testdb>0){
    for(int i=0; i<testdb*8; i++)
    fscanf(f,"%d %d %d %d %d\n",&pont[i].x,&pont[i].y,&pont[i].z,&pont[i].tipus,&pont[i].latas);}
    fclose(f);

    f=fopen("adat/jatekos.txt","r");
    fscanf(f,"%f %f %f %f %f %f",&nezet.x,&nezet.y,&nezet.z,&nezet.a,&nezet.b,&nezet.g);
    fclose(f);}

void general2(){

disz=pont[torol].x-100;
disz1=pont[torol].z-100;
disz2=pont[torol].y-100;

int db=testdb*8;
int elenor;
for(int kik=0; kik<3; kik++)
for(int ki=0; ki<3; ki++)
for(int ik=0; ik<3; ik++){
elenor=0;
for(int nok=0; nok<testdb*8; nok+=8) if(pont[nok].x==disz+ik*100 && pont[nok].z==disz1+ki*100 && pont[nok].y==disz2+kik*100) elenor=1;

if(elenor==0 && disz2+kik*100<200){
    pont[0+db].x=disz+ik*100;     pont[0+db].y=disz2+kik*100;         pont[0+db].z=disz1+ki*100;
    pont[1+db].x=disz+100+ik*100; pont[1+db].y=disz2+100+kik*100;     pont[1+db].z=disz1+ki*100;
    pont[2+db].x=disz+ik*100;     pont[2+db].y=disz2+100+kik*100;     pont[2+db].z=disz1+100+ki*100;
    pont[3+db].x=disz+100+ik*100; pont[3+db].y=disz2+kik*100;         pont[3+db].z=disz1+100+ki*100;

    pont[4+db].x=disz+ik*100;     pont[4+db].y=disz2+kik*100;         pont[4+db].z=disz1+100+ki*100;
    pont[5+db].x=disz+100+ik*100; pont[5+db].y=disz2+100+kik*100;     pont[5+db].z=disz1+100+ki*100;
    pont[6+db].x=disz+ik*100;     pont[6+db].y=disz2+100+kik*100;     pont[6+db].z=disz1+ki*100;
    pont[7+db].x=disz+100+ik*100; pont[7+db].y=disz2+kik*100;         pont[7+db].z=disz1+ki*100;
    pont[0+db].tipus=9; pont[0+db].latas=1; db+=8;  testdb++;}}


}



#endif
                    ///Írta és rendezte: Egri Krisztofer///

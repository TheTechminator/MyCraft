#ifndef _THEBOSS
#define _THEBOSS
#include "blocktipusok.h"

int lodb=0;
int tipusa;
int van=-1; ///Ha talál olyan blockot amire rámutat már nem megy végig
int torol;
int ajtovalt;


void latja(){ ///látja vagy nem látja az adott pontot
van=-1; ///Ha talál olyan blockot amire rámutat már nem megy végig
ajtovalt=0;
for(lodb=testdb*8-8; lodb>=0; lodb-=8)
if(pont[lodb].tavolsag<=600 && pont[lodb].latas==1){

if(nezet.z<pont[lodb].z){if(enez(lodb)==1) {torol=lodb;   newblock(lodb,0,0,-100); van=lodb;}   } ///előröl
if(nezet.z>pont[lodb+4].z){if(hnez(lodb)==1) {torol=lodb; newblock(lodb,0,0,100); van=lodb;}} ///hátulrol

if(nezet.x>pont[lodb+7].x){if(bnez(lodb)==1) {torol=lodb; newblock(lodb,100,0,0); van=lodb;} } ///ballról
if(nezet.x<pont[lodb].x){if(jnez(lodb)==1) {torol=lodb;   newblock(lodb,-100,0,0); van=lodb;} } ///jobbról

if(nezet.y>pont[lodb+6].y){if(upblockad(lodb)==1) {torol=lodb; newblock(lodb,0,100,0); van=lodb;}} ///felülről
if(nezet.y<pont[lodb].y){if(downblockad(lodb)==1){torol=lodb;  newblock(lodb,0,-100,0); van=lodb;} } ///alulról
if(van!=-1){ if(pont[torol].tipus>111 && pont[torol].tipus<119) ajtovalt=torol; return;}
}
}

void kocka(){ ///kocka rajzolása
//glEnable(GL_CULL_FACE);
ketkepes();
craftingtable();
haromkepes();
ajtok();
egykepes();
//glDisable(GL_CULL_FACE);
fuvek();
}


void elore(float *visza){
        for(int i=testdb*8-8; i>=0; i-=8)
        if(pont[i].latas==1 && pont[i].tipus<119){

        if(pont[i+4].z+20>=nezet.z && pont[i].z-20<=nezet.z && pont[i+7].x+20>=nezet.x && pont[i].x-20<=nezet.x && pont[i].y-30<=nezet.y && pont[i+2].y>=nezet.y){mehetek[1]=1;} ///nem mehet föl
        if(pont[i+4].z+20>=nezet.z && pont[i].z-20<=nezet.z && pont[i+7].x+20>=nezet.x && pont[i].x-20<=nezet.x && pont[i+6].y+160>=nezet.y && pont[i].y<=nezet.y){mehetek[2]=1; if(pont[i+6].y+156>=nezet.y) *visza=(pont[i+6].y+160)-nezet.y; } ///nem mehet le


        if(nezet.a>0 && nezet.a<180 && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].z-30<=nezet.z && pont[i].z-20>=nezet.z) {mehetek[3]=1;} ///nem mehet előre -90 90 között

        if((nezet.a>-180 && nezet.a<0) && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+5].z+30>=nezet.z && pont[i+5].z+20<=nezet.z) {mehetek[3]=1;} ///nem mehet előre 90 -90 között

        if(nezet.a>-90 && nezet.a<90 && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].x-30<=nezet.x && pont[i].x-20>=nezet.x) {mehetek[4]=1;} ///nem mehet előre 0 180 között

        if((nezet.a<-90 || nezet.a>90) && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+1].x+30>=nezet.x && pont[i+1].x+20<=nezet.x) {mehetek[4]=1;} ///nem mehet előre -180 0 között

        if(nezet.a>-180 && nezet.a<0 && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].z-30<=nezet.z && pont[i].z-20>=nezet.z) {mehetek[5]=1;} ///nem mehet hátra 90 -90 között

        if((nezet.a>0 && nezet.a<180) && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+5].z+30>=nezet.z && pont[i+5].z+20<=nezet.z) {mehetek[5]=1;} ///nem mehet hátra -90 90 között

        if((nezet.a<-90 || nezet.a>90) && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].x-30<=nezet.x && pont[i].x-20>=nezet.x) {mehetek[6]=1;} ///nem mehet hátra -180 0 között

        if(nezet.a>-90 && nezet.a<90 && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+1].x+30>=nezet.x && pont[i+1].x+20<=nezet.x) {mehetek[6]=1;} ///nem mehet hátra 0 180 között


        if(nezet.a>-90 && nezet.a<90 && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].z-30<=nezet.z && pont[i].z-20>=nezet.z) {mehetek[7]=1;} ///nem mehet jobbra -180 0 között

        if((nezet.a<-90 || nezet.a>90) && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+5].z+30>=nezet.z && pont[i+5].z+20<=nezet.z) {mehetek[7]=1;} ///nem mehet jobbra 180 0 között

        if(nezet.a<0 && nezet.a>-180 && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].x-30<=nezet.x && pont[i].x-20>=nezet.x) {mehetek[8]=1;} ///nem mehet jobbra -90 90 között

        if((nezet.a<180 && nezet.a>0) && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+1].x+30>=nezet.x && pont[i+1].x+20<=nezet.x) {mehetek[8]=1;} ///nem mehet jobbra -180 0 között

        if((nezet.a<-90 || nezet.a>90) && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].z-30<=nezet.z && pont[i].z-20>=nezet.z) {mehetek[9]=1;} ///nem mehet ballra 180 0 között

        if((nezet.a>-90 && nezet.a<90) && pont[i].x-20<=nezet.x && pont[i+1].x+20>=nezet.x && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+5].z+30>=nezet.z && pont[i+5].z+20<=nezet.z) {mehetek[9]=1;} ///nem mehet ballra -180 0 között

        if((nezet.a<180 && nezet.a>0) && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i].x-30<=nezet.x && pont[i].x-20>=nezet.x) {mehetek[10]=1;} ///nem mehet ballra -90 90 között

        if((nezet.a<0 && nezet.a>-180) && pont[i+6].z-20<=nezet.z && pont[i+4].z+20>=nezet.z && pont[i+6].y+150>=nezet.y && pont[i].y-20<=nezet.y && pont[i+1].x+30>=nezet.x && pont[i+1].x+20<=nezet.x) {mehetek[10]=1;} ///nem mehet ballra -180 0 között

        }}

#endif
                ///Írta és rendezte: Egri Krisztofer///

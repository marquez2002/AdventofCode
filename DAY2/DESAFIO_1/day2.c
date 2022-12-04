#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE* f;
    if((f=fopen("code.txt", "r"))==NULL){
        printf("ERROR al abrir el fichero\n");
        exit(0);
    }
    fclose(f);

    char eleccion1, eleccion2;
    int nEle=0; 
    f=fopen("code.txt", "r");
    while(fscanf(f, "%c %c\n", &eleccion1, &eleccion2)!=EOF){
        nEle++;
    }
    fclose(f);
    
    int rival_vector[nEle];
    int our_vector[nEle];

    for(int i=0; i<nEle; i++){
        rival_vector[i]=0;
        our_vector[i]=0;
    }

    f=fopen("code.txt", "r");
    int i=0;
    while(fscanf(f, "%c %c\n", &eleccion1, &eleccion2)!=EOF){
        //Puntuacion por tirada
        int rival_turn, our_turn;
        if(eleccion1=='A'){
            rival_vector[i]+=1;
            rival_turn=1;
        }
        else if(eleccion1=='B'){
            rival_vector[i]+=2;
            rival_turn=2;
        }
        else if(eleccion1=='C'){
            rival_vector[i]+=3;
            rival_turn=3;
        }
        if(eleccion2=='X'){
            our_vector[i]+=1;
            our_turn=1;
        }
        else if(eleccion2=='Y'){
            our_vector[i]+=2;
            our_turn=2;
        }
        else if(eleccion2=='Z'){
            our_vector[i]+=3;
            our_turn=3;
        }
        //Puntuacion por resultado
        if(our_turn==1 && rival_turn==3){
            our_vector[i]+=6;
            rival_vector[i]+=0;
        }
        else if(our_turn==3 && rival_turn==1){
            our_vector[i]+=0;
            rival_vector[i]+=6;
        }
        else if(our_turn==3 && rival_turn==2){
            our_vector[i]+=6;
            rival_vector[i]+=0;
        }
        else if(our_turn==2 && rival_turn==3){
            our_vector[i]+=0;
            rival_vector[i]+=6;
        }
        else if(our_turn==2 && rival_turn==1){
            our_vector[i]+=6;
            rival_vector[i]+=0;
        }
        else if(our_turn==1 && rival_turn==2){
            our_vector[i]+=0;
            rival_vector[i]+=6;
        }
        else if(our_turn==rival_turn){
            our_vector[i]+=3;
            rival_vector[i]+=3;
        }
        printf("%d -> %d - %d\n", i, our_vector[i], rival_vector[i]);
        i++;
    }

    int our_suma=0, rival_suma=0;
    for(int i=0; i<nEle; i++){
        our_suma+=our_vector[i];
        rival_suma+=rival_vector[i];
    }

    printf("Nuestra puntuacion seria %d, frente a la del rival, que seria %d\n", our_suma, rival_suma);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int suma=0;
    char letra;
    FILE* f;
    if((f=fopen("code.txt", "r"))==NULL){
        printf("ERROR al abrir el fichero\n");
        exit(0);
    }
    fclose(f);
    
    int s=1;
    f=fopen("code.txt", "r");
    char cadena[256];
    while(fscanf(f, "%s\n", cadena)!=EOF){
        int tamano=strlen(cadena);
        int mitad=tamano/2;
        for(int i=mitad; i<(tamano); i++){
            for(int j=0; j<(mitad);j++){
                if(cadena[i]==cadena[j]){
                    letra=cadena[i];
                    int puntuacionindividual=0;
                    if(letra=='a'){puntuacionindividual=1;}    
                    else if(letra=='b'){puntuacionindividual=2;}
                    else if(letra=='c'){puntuacionindividual=3;}
                    else if(letra=='d'){puntuacionindividual=4;}
                    else if(letra=='e'){puntuacionindividual=5;}
                    else if(letra=='f'){puntuacionindividual=6;}
                    else if(letra=='g'){puntuacionindividual=7;}
                    else if(letra=='h'){puntuacionindividual=8;}
                    else if(letra=='i'){puntuacionindividual=9;}
                    else if(letra=='j'){puntuacionindividual=10;}
                    else if(letra=='k'){puntuacionindividual=11;}
                    else if(letra=='l'){puntuacionindividual=12;}
                    else if(letra=='m'){puntuacionindividual=13;}
                    else if(letra=='n'){puntuacionindividual=14;}
                    else if(letra=='o'){puntuacionindividual=15;}
                    else if(letra=='p'){puntuacionindividual=16;}
                    else if(letra=='q'){puntuacionindividual=17;}
                    else if(letra=='r'){puntuacionindividual=18;}
                    else if(letra=='s'){puntuacionindividual=19;}
                    else if(letra=='t'){puntuacionindividual=20;}
                    else if(letra=='u'){puntuacionindividual=21;}
                    else if(letra=='v'){puntuacionindividual=22;}
                    else if(letra=='w'){puntuacionindividual=23;}
                    else if(letra=='x'){puntuacionindividual=24;}
                    else if(letra=='y'){puntuacionindividual=25;}
                    else if(letra=='z'){puntuacionindividual=26;}
                    else if(letra=='A'){puntuacionindividual=27;}    
                    else if(letra=='B'){puntuacionindividual=28;}
                    else if(letra=='C'){puntuacionindividual=29;}
                    else if(letra=='D'){puntuacionindividual=30;}
                    else if(letra=='E'){puntuacionindividual=31;}
                    else if(letra=='F'){puntuacionindividual=32;}
                    else if(letra=='G'){puntuacionindividual=33;}
                    else if(letra=='H'){puntuacionindividual=34;}
                    else if(letra=='I'){puntuacionindividual=35;}
                    else if(letra=='J'){puntuacionindividual=36;}
                    else if(letra=='K'){puntuacionindividual=37;}
                    else if(letra=='L'){puntuacionindividual=38;}
                    else if(letra=='M'){puntuacionindividual=39;}
                    else if(letra=='N'){puntuacionindividual=40;}
                    else if(letra=='O'){puntuacionindividual=41;}
                    else if(letra=='P'){puntuacionindividual=42;}
                    else if(letra=='Q'){puntuacionindividual=43;}
                    else if(letra=='R'){puntuacionindividual=44;}
                    else if(letra=='S'){puntuacionindividual=45;}
                    else if(letra=='T'){puntuacionindividual=46;}
                    else if(letra=='U'){puntuacionindividual=47;}
                    else if(letra=='V'){puntuacionindividual=48;}
                    else if(letra=='W'){puntuacionindividual=49;}
                    else if(letra=='X'){puntuacionindividual=50;}
                    else if(letra=='Y'){puntuacionindividual=51;}
                    else if(letra=='Z'){puntuacionindividual=52;}
                    suma=suma+puntuacionindividual;
                    if(puntuacionindividual!=0){
                        printf("%d -> %d\n", s, puntuacionindividual);
                    }
                    for(int a=0; a<tamano; a++){
                        cadena[a]=0;
                    }
                }
            }
        }
    s++;
    }
    printf("La puntacion final es %d\n", suma);
    fclose(f);
    return 0;
}
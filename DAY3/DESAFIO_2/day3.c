#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "day3.h"

int main(){
    char letra;
    FILE* f;
    if((f=fopen("code.txt", "r"))==NULL){
        printf("ERROR al abrir el fichero\n");
        exit(0);
    }
    fclose(f);
    
    int s=0;
    char vector[100];
    f=fopen("code.txt", "r");
    char cadena1[256], cadena2[256], cadena3[256];
    while(fscanf(f, "%s\n%s\n%s\n", cadena1, cadena2, cadena3)!=EOF){
        int tamano1=strlen(cadena1);
        int tamano2=strlen(cadena2);
        int tamano3=strlen(cadena3);
        for(int i=0; i<tamano1; i++){
            for(int j=0; j<tamano2;j++){
                for(int k=0; k<tamano3; k++){
                    if(cadena1[i]==cadena2[j] && cadena2[j]==cadena3[k] && cadena1[i]==cadena3[k]){
                        letra=cadena1[i];
                        vector[s]=letra;
                        i=tamano1-1;
                        j=tamano2-1;
                        k=tamano3-1;
                        s++;
                    }
                }
            }
        }
    }
    printf("La prioridad total sera %d\n", prioridadtotal(vector));
}
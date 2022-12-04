int prioridadtotal(char vector[]){
    int suma=0;
    for(int i=0; i<100; i++){
            printf("%c -> ", vector[i]);
            int puntuacionindividual=0;
            if(vector[i]=='a'){puntuacionindividual=1;}    
            else if(vector[i]=='b'){puntuacionindividual=2;}
            else if(vector[i]=='c'){puntuacionindividual=3;}
            else if(vector[i]=='d'){puntuacionindividual=4;}
            else if(vector[i]=='e'){puntuacionindividual=5;}
            else if(vector[i]=='f'){puntuacionindividual=6;}
            else if(vector[i]=='g'){puntuacionindividual=7;}
            else if(vector[i]=='h'){puntuacionindividual=8;}
            else if(vector[i]=='i'){puntuacionindividual=9;}
            else if(vector[i]=='j'){puntuacionindividual=10;}
            else if(vector[i]=='k'){puntuacionindividual=11;}
            else if(vector[i]=='l'){puntuacionindividual=12;}
            else if(vector[i]=='m'){puntuacionindividual=13;}
            else if(vector[i]=='n'){puntuacionindividual=14;}
            else if(vector[i]=='o'){puntuacionindividual=15;}
            else if(vector[i]=='p'){puntuacionindividual=16;}
            else if(vector[i]=='q'){puntuacionindividual=17;}
            else if(vector[i]=='r'){puntuacionindividual=18;}
            else if(vector[i]=='s'){puntuacionindividual=19;}
            else if(vector[i]=='t'){puntuacionindividual=20;}
            else if(vector[i]=='u'){puntuacionindividual=21;}
            else if(vector[i]=='v'){puntuacionindividual=22;}
            else if(vector[i]=='w'){puntuacionindividual=23;}
            else if(vector[i]=='x'){puntuacionindividual=24;}
            else if(vector[i]=='y'){puntuacionindividual=25;}
            else if(vector[i]=='z'){puntuacionindividual=26;}
            else if(vector[i]=='A'){puntuacionindividual=27;}    
            else if(vector[i]=='B'){puntuacionindividual=28;}
            else if(vector[i]=='C'){puntuacionindividual=29;}
            else if(vector[i]=='D'){puntuacionindividual=30;}
            else if(vector[i]=='E'){puntuacionindividual=31;}
            else if(vector[i]=='F'){puntuacionindividual=32;}
            else if(vector[i]=='G'){puntuacionindividual=33;}
            else if(vector[i]=='H'){puntuacionindividual=34;}
            else if(vector[i]=='I'){puntuacionindividual=35;}
            else if(vector[i]=='J'){puntuacionindividual=36;}
            else if(vector[i]=='K'){puntuacionindividual=37;}
            else if(vector[i]=='L'){puntuacionindividual=38;}
            else if(vector[i]=='M'){puntuacionindividual=39;}
            else if(vector[i]=='N'){puntuacionindividual=40;}
            else if(vector[i]=='O'){puntuacionindividual=41;}
            else if(vector[i]=='P'){puntuacionindividual=42;}
            else if(vector[i]=='Q'){puntuacionindividual=43;}
            else if(vector[i]=='R'){puntuacionindividual=44;}
            else if(vector[i]=='S'){puntuacionindividual=45;}
            else if(vector[i]=='T'){puntuacionindividual=46;}
            else if(vector[i]=='U'){puntuacionindividual=47;}
            else if(vector[i]=='V'){puntuacionindividual=48;}
            else if(vector[i]=='W'){puntuacionindividual=49;}
            else if(vector[i]=='X'){puntuacionindividual=50;}
            else if(vector[i]=='Y'){puntuacionindividual=51;}
            else if(vector[i]=='Z'){puntuacionindividual=52;}
            printf("%d\n", puntuacionindividual);
            suma+=puntuacionindividual;
    }
    return suma;
}
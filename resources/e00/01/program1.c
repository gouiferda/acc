#include <stdio.h>

float note_math = 0;
float note_fr = 0;
float note_resultat = 0;

void calcul(){
    printf("Donner moi la note de mathematique : ");
    scanf("%f",&note_math);
    printf("Donner moi la note de francais : ");
    scanf("%f",&note_fr);

    printf("--------------\n");
    printf("Note math : %.2f \t",note_math);
    printf("Note fr : %.2f \n",note_fr);



    note_resultat = ( (note_math * 7) + (note_fr * 4) ) / 11;



    printf("--------------\n");
    printf("Resultat final : %.2f \n",note_resultat);
}

int main(){
    
    calcul();


    return(0);
}
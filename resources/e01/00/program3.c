#include <stdio.h>

// [type de variable] [nom de variable] = : <- [valeur de variable];

// sndo9 <- 1337

char sndok_2 = 'a'; //character

char* sndok_3 = "Hello world"; //string of characters : chaine des characters

int sndok_1 = 1337; //integer : entier
float sndok_4 = 10.67; //float : nombre avec virgule
double sndok_5 = 10.67; //double : nombre avec virgule

// afficher hello world
// [type de valeur returné] [nom de fonction] (){}
void fonction_1(){
    printf("Hello world\n");
}

// [type de valeur returné] [nom de fonction] (variable : parmeters){}
void calculer_age(int annee_naissance,int mois){
    
    int age_mois = ((2022 - annee_naissance) * 12) - mois;
    
    float age = age_mois / 12;
    
    printf("Age : %.2f\n",age);
}

int main(){

    // printf("sndo9_1 : %d\n",sndok_1);
    // fonction_1();  //calling function_1
    calculer_age(1994,12); //calling calculer_age

    return (0);
}
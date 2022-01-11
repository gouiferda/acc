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
   
    int age_annee_simple = (2022 - annee_naissance); //  2022 - 1997 = 25
    int age_mois_simple = (age_annee_simple * 12); //25 * 12 = 300 mois
    float age_mois_exact = age_mois_simple - mois; // 296
    double age = (double) (age_mois_exact / 12);


    printf("Age : %1f\n",age); //24.6
}


void calculAge_2(int anneeNaiss, int moisNaiss){
	int thisMonth = 1;
	int thisYear = 2022;
	int ageYear = 0;
	int ageMonth = 0;
	if(moisNaiss > thisMonth){
		ageYear = thisYear - anneeNaiss - 1;
		ageMonth = 12 - moisNaiss + thisMonth;
	}
	if(moisNaiss < thisMonth){
		ageYear = thisYear - anneeNaiss;
		ageMonth = thisMonth - moisNaiss;
	}
	if(moisNaiss == thisMonth){
		ageYear = thisYear - anneeNaiss;
		ageMonth = 0;
	}
	printf("Vous avez %d annees et %d mois",ageYear, ageMonth);
}

int main(){

    // printf("sndo9_1 : %d\n",sndok_1);
    // fonction_1();  //calling function_1
   // calculer_age(1999,11); //calling calculer_age
   // calculAge_2(1994,12);

    return (0);
}
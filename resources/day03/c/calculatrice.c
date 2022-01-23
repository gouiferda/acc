
// variables + values 
// operations
// functions
// conditions
// loops 
// 

// main : fonction   : group of instructions // instruction in each line

//structure de fonction :
// [valeur de return] nom_de_fonction(){
    //instructions (fonctions , varibale ... )
//}

// commentaire un ligne

/* 
commentaire 
multi ligne
*/

# include <stdio.h>

//fonction : definition of a function
void afficher_mon_message(){
    printf(" Hamza \n");
    printf(" <3 \n");
    printf(" Tarik ");
    printf(" \n");
    printf(" nh \n");
}

int main(){
    //calling a function : rappel la fonction
    //afficher_mon_message();

    printf("Welcome to ASK Calculator"); //afficher message
    printf("\n"); //new line 

    // 6 + 3 = 9 

    // 6 : input
    // 3  : input
    // + : input
    // =  : input (ACTION : taper sur entré/enter)
    // 9 : output

    // input and outputs are saved inside : variables

    //initialisation : affecter une valeur par defaut au variables déclarer

    float number_1 = 0.00;
    float number_2 = 0.00;
    float result = 0.00;
    char operation_char = '+';
    

    printf("Donner moi la premier nombre"); //afficher message
    printf("\n"); //new line 
    scanf("%f",&number_1);

    //printf("Donner moi l\'operation :\n 1 : + , 2: - , 3 : x , 4: /"); //afficher message
    printf("Donner moi l\'operation :\n  + , - , * , /"); //afficher message

    printf("\n"); //new line 
    //scanf("%d",&operation_number);
    scanf(" %c", &operation_char);

    printf("Donner moi la deuxieme nombre"); //afficher message
    printf("\n"); //new line 
    scanf("%f",&number_2);

    printf("\n ---- \n");

    /* if (condition is true){
        do this
    } */
    // if (condition) do this
    if (operation_char == '+'){
        result = number_1 + number_2;
    }
    if (operation_char == '-'){
        result = number_1 - number_2;
    }
    if (operation_char == '*'){
        result = number_1 * number_2;
    }
    if (operation_char == '/'){
        result = number_1 / number_2;
    }
    
    printf("Information : %0.2f %c %0.2f = %0.2f",number_1,operation_char,number_2,result);

    printf("\n"); //new line 

    return (0);
}

#include <stdio.h>

int main() {
    /*  Exercice 1
     int a;
    int b;
    printf("Saisissez une première valeure.\n");
    scanf("%d",&a);
    printf("Saisissez une deuxième valeure.\n");
    scanf("%d",&b);
    if (a == b)printf("Les deux valeures sont égales.\n");
    else if (a < b) {
        printf("La deuxième valeure est la plus grande.\n",);
    } else{
        printf("La première valeure est la plus grande.\n",);
    } */
    /* Exercice 2
    int a;
    int b;
    int c=0;
    int d=0;
    printf("Saisissez la longueur:\n");
    scanf("%d",&a);
    printf("Saisissez la largeur:\n");
    scanf("%d",&b);
    c=(a+b)*2;
    d=(a*b);
    printf("Le périmètre est :%d\n",c);
    printf("L'aire est :%d\n",d); */

    /* Exercice 3
    int a;
    const int b=3;
    printf("Saisissez un entier.\n");
    scanf("%d",&a);
    if(a%b==0 && a>=10){
        printf("L'entier est multiple de 3 et est supérieur à 10.\n");
    }
    else {
        printf("L'entier n'est pas multiple de 3 et supérieur à 10.\n");
    } */


    /* Exercice 4
    int etudiant=0;
    int age=0;
    printf("Tapez 1 si vous êtes etudiant de moins de 27 ans, tapez 0 sinon.\n");
    scanf("%d",&etudiant);
    printf("Saisissez votre age.\n");
    scanf("%d",&age);
    if(age<=12){
        printf("Tarif enfant(4€).\n");
    }
    else if(age>12 && age<=17 || etudiant==1){
        printf("Tarif jeune(6€).\n");
    }
    else if(age>17 && age<=65){
        printf("Plein tarif(9€).\n");
    }
    else {
        printf("Tarif sénior(6)€.\n");
    } */


    /* Exercice 5
    int boisson=0;
    printf("Selectionnez votre boisson.\n");
    scanf("%d",&boisson);
    if(boisson==1){
        printf("Eau.\n");
    }
    else if(boisson==2){
        printf("Sprite.\n");
    }
    else if(boisson==3){
        printf("7up Mojito.\n");
    }
    else if(boisson==10){
        printf("Thé Glacé.\n");
    }
    else if(boisson==11){
        printf("Lait.\n");
    }
    else{
        printf("ERREUR : Aucune boisson selectionné.\n");
    }
    */

    /* Exercice 6
    float note1=0;
    float note2=0;
    float note3=0;
    float moyenne=0;
    printf("Saisissez votre premiere note.\n");
    scanf("%f",&note1);
    while ( note1<0 || note1>20){
        printf("ERREUR : Saisissez votre premiere note.\n");
        scanf("%f",&note1);
    }
    printf("Saisissez votre deuxième note.\n");
    scanf("%f",&note2);
    while (note2<0 || note2>20){
        printf("ERREUR : Saisissez votre deuxième note.\n");
        scanf("%f",&note2);
    }
    printf("Saisissez votre troisième note.\n");
    scanf("%f",&note3);
    while (note3<0 || note3>20){
        printf("ERREUR : Saisissez votre troisième note.\n");
        scanf("%f",&note3);
    }
    moyenne=(note1+note2+note3)/3;
    printf("Votre moyenne est :%f.\n",moyenne);
    */

    /* Exercice 7
    int i=0;
    int classe=0;
    int eleves=0;
    int total=0;
    printf("Saisissez le nombre de classe.\n");
    scanf("%d",&classe);
    for (i=1;i<classe+1;i++){
        printf("Saisissez le nombre d'eleves dans la classe %d.\n",i);
        scanf("%d",&eleves);
        total=total+eleves;
    }
    printf("Le nombre total d'eleves est : %d.\n",total);
    */

    /* Exercice 8
    int entier=0;
    printf("Saisissez un entier.\n");
    scanf("%d",&entier);
    while(entier%2!=0 || entier%7!=0){
        printf("Veuillez ressaisissir un entier.\n");
        scanf("%d",&entier);
    }
     */

    /* Exercice 9
    int pierre=0;
    int etage=0;
    int somme=0;
    printf("Saisissez le nombre de pierres.\n");
    scanf("%d",&pierre);
        while(somme<=pierre){
            etage=etage+1;
            somme=(etage*(etage+1)*(2*etage+1))/6;
            }
    printf("Vous pouvez faire %d etages.\n",etage-1);
    */



    /* Exercice 10
    int entier=0;
    int somme=0;
    int i=0;
    float moyenne=0;
    while(entier>=0){
        printf("Saisissez un nombre.\n");
        scanf("%d",&entier);
        if (entier>=0){
            somme=somme+entier;
            i=i+1;
        }
    }
    moyenne=somme/i;
    printf("La moyenne est %f.\n",moyenne);
    */


    return 0;
}

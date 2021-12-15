#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tiedot {
    char etunimi[50];
    char sukunimi[50];
    int jasennro;
    int liittymisvuosi;
    int jasenmaksut[5];
};

void menu();
struct tiedot uusijasen();
struct tiedot jasenenpoisto();

int main(void){
    printf("\n");
    while(1){
        
        menu();
    }
    
}

void menu(){
    
    int toiminto, n, jasen=0, temp;
    
    int i, valinta=0, uusiliittymisvuosi=0, 
        muutettavaVuosi=0, uusinro=0, summa=0, 
        hakunumero = 0, hakuvuosi = 0, temp2 = 0;
    
    char uusietu[20];
    char uusisuku[20];
    char hakuetu[20];
    char hakusuku[30];
    
    struct tiedot jasenisto[100];

    printf("1 Uuden jasenen lisaaminen\n");
    printf("2 Jasenen tietojen poisto\n");
    printf("3 Jasenen tietojen muuttaminen\n");
    printf("4 Tulosta jasen\n");
    printf("5 Tulosta rekisteri\n");
    printf("6 Haku\n");
    printf("7 Lopetus\n");
    printf("\nValintasi > ");
    scanf("%d", &toiminto);
    
    printf("\n");

    
    if (toiminto == 1){
        
        jasenisto[n] = uusijasen();
        n++;
        printf("\n");
    }

    else if (toiminto == 2){
        
        printf("\nAnna poistettavan jasenen jasennumero > ");
        scanf("%d", &jasen);
        
        for (i=0; i<n; i++){
            if (jasenisto[i].jasennro == jasen){
                jasenisto[i] = jasenenpoisto();
                break;
            }
        }
        
        n--;
        
        
    }

    else if (toiminto == 3){
        printf("\n");
        printf("\nAnna muutettavan jasenen jasennumero > ");
        scanf("%d", &jasen);
        printf("\n");
        
        
        for (i=0; i<n; i++){
            if (jasenisto[i].jasennro == jasen){
                break;
            }
        }
    
        printf("1 Muuta etunimi\n");
        printf("2 Muuta sukunimi\n");
        printf("3 Muuta jasennumero\n");
        printf("4 Muuta liittymisvuosi\n");
        printf("5 Muuta jasenmaksutietoja\n");
        
        printf("\nValintasi > ");
        scanf("%d", &valinta);
        printf("\n");
        
        if (valinta == 1){
            printf("\nAnna uusi etunimi > ");
            scanf("%s", jasenisto[i].etunimi);
            printf("\n");
        }
        
        if (valinta == 2){
            printf("\nAnna uusi sukunimi > ");
            scanf("%s", jasenisto[i].sukunimi);
            printf("\n");
        }
        
        if (valinta == 3){
            printf("\nAnna uusi jasennumero > ");
            scanf("%d", &jasenisto[i].jasennro);
            printf("\n");
        }
        
        if (valinta == 4){
            printf("\nAnna uusi liittymisvuosi > ");
            scanf("%d", &jasenisto[i].liittymisvuosi);
            printf("\n");
        }
        
        if (valinta == 5){
            
            printf("\nAnna vuosi, jonka jasenmaksuja muutetaan > ");
            scanf("%d", &muutettavaVuosi);
            printf("\nAnna summa > ");
            scanf("%d", &summa);
            
            if (muutettavaVuosi == 2016){
                printf("\nAnna summa > ");
                scanf("%d", &jasenisto[i].jasenmaksut[0]);
                
            }
            if (muutettavaVuosi == 2017){
                printf("\nAnna summa > ");
                scanf("%d", &jasenisto[i].jasenmaksut[1]);
                
            }
            if (muutettavaVuosi == 2018){
                printf("\nAnna summa > ");
                scanf("%d", &jasenisto[i].jasenmaksut[2]);
                
            }
            if (muutettavaVuosi == 2019){
                printf("\nAnna summa > ");
                scanf("%d", &jasenisto[i].jasenmaksut[3]);
                
            }
            if (muutettavaVuosi == 2020){
                printf("\nAnna summa > ");
                scanf("%d", &jasenisto[i].jasenmaksut[4]);
                
            }
            
        }
        
        printf("\n");
    }

    else if (toiminto == 4){

        printf("\nAnna jasennumero > ");
        scanf("%d", &jasen);
        
        printf("\n");
        printf("\n");
        
        for (i=0; i<=n; i++){
            if (jasenisto[i].jasennro == jasen){
                printf("   ETUNIMI: %s\n", jasenisto[i].etunimi);
                printf("  SUKUNIMI: %s\n", jasenisto[i].sukunimi);
                printf("  JASENNRO: %d\n", jasenisto[i].jasennro);
                printf("LIITTYMISVUOSI: %d\n", jasenisto[i].liittymisvuosi);
                break;
            }

        }
        
        printf("\n");
        printf("\n");
        printf("\n");
        
    }

    else if (toiminto == 5){

        printf("\n");
        printf("***************************");
        printf("\n");
        printf("\n");
        
        for (i=0; i<n; i++){
           
            printf("ETUNIMI: %s\n", jasenisto[i].etunimi);
            printf("SUKUNIMI: %s\n", jasenisto[i].sukunimi);
            printf("JASENNRO: %d\n", jasenisto[i].jasennro);
            printf("LIITTYMISVUOSI: %d\n", jasenisto[i].liittymisvuosi);
            printf("\n");
            printf("\n");
        
        }
    }
    
    else if (toiminto == 6){
        
        printf("1 Haku etunimella\n2 Haku sukunimella\n3 Haku jasennumerolla\n4 Haku liittymisvuodella\n");
        printf("Valintasi >");
        scanf("%d", &valinta);
        printf("\n");

        if (valinta == 1){
            printf("Anna etunimi > ");
            scanf("%s", hakuetu);
            printf("\n");

            for (i=0; i<=n; i++){
                if (strcmp(jasenisto[i].etunimi, hakuetu)  == 0){
                    printf("ETUNIMI: %s\n", jasenisto[i].etunimi);
                    printf("SUKUNIMI: %s\n", jasenisto[i].sukunimi);
                    printf("JASENNUMERO: %d\n", jasenisto[i].jasennro);
                    printf("\n");
                }
            }
        }
        
        else if (valinta == 2){
            printf("Anna sukunimi > ");
            scanf("%s", hakusuku);
            printf("\n");

            for (i=0; i<=n; i++){
                if (strcmp(jasenisto[i].sukunimi, hakusuku)  == 0){
                    printf("ETUNIMI: %s\n", jasenisto[i].etunimi);
                    printf("SUKUNIMI: %s\n", jasenisto[i].sukunimi);
                    printf("JASENNUMERO: %d\n", jasenisto[i].jasennro);
                    printf("\n");
                }
            }
        }
        
        else if (valinta == 3){
            printf("Anna jasennumero > ");
            scanf("%d", &hakunumero);
            
            printf("\n");
            
            for (i=0; i<=n; i++){
                if (jasenisto[i].jasennro == hakunumero){
                    printf("ETUNIMI: %s\n", jasenisto[i].etunimi);
                    printf("SUKUNIMI: %s\n", jasenisto[i].sukunimi);
                    printf("JASENNUMERO: %d\n", jasenisto[i].jasennro);
                    printf("\n");
                }
            }
        }
        
        else if (valinta == 4){
            printf("Anna liittymisvuosi > ");
            scanf("%d", &hakuvuosi);
            
            printf("\n");

            
            for (i=0; i<=n; i++){
                if (jasenisto[i].liittymisvuosi == hakuvuosi){
                    printf("ETUNIMI: %s\n", jasenisto[i].etunimi);
                    printf("SUKUNIMI: %s\n", jasenisto[i].sukunimi);
                    printf("JASENNUMERO: %d\n", jasenisto[i].jasennro);
                    printf("\n");
                }
            }
        }
        
    }
    
    
    else if (toiminto == 7){
        exit(0);
    }

}

struct tiedot uusijasen(){
    
    struct tiedot jasen;
    
    int i=0;
    
    printf("\nAnna Jasenen Etu- ja Sukunimi  > ");
    scanf("%s", jasen.etunimi);
    scanf("%s", jasen.sukunimi);
    
    printf("\n");
    
    printf("\nAnna jasennumero > ");
    scanf("%d", &jasen.jasennro);
    
    printf("\n");
    
    printf("\nAnna liittymisvuosi > ");
    scanf("%d", &jasen.liittymisvuosi);
   
    printf("\n");
   
    for (i=0; i<5; i++){
        printf("\nAnna vuoden %d jasenmaksu > ", i+2016);
        scanf("%d", &jasen.jasenmaksut[i]);
        printf("\n");
    }
    
    printf("\n");
    
    return jasen;
}

struct tiedot jasenenpoisto(){
    
    struct tiedot jasen;
    char temp[20] = " ";
    int i;
    
    strcpy(jasen.etunimi, " ");
    strcpy(jasen.sukunimi, " ");
    jasen.jasennro = 0;
    jasen.liittymisvuosi = 0;
    
    for (i=0; i<5; i++){
        jasen.jasenmaksut[i] = 0;
    }
    
    printf("\n");

    return jasen;
}

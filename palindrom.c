#include<stdio.h>
#include<stdlib.h>

int main(){
    char slowo[40];
    char odwrotnosc[40];
    int dl = 0, w = 0;
    printf("podaj slowo:\n");
    scanf("%s", slowo);
    dl = strlen(slowo);
    for (int i = 0; i < dl; ++i){
        odwrotnosc[i] = slowo[dl - 1 -i];
    }
    odwrotnosc[dl] = '\0';
    for (int j = 0; j < dl; ++j){
        if (slowo[j] != odwrotnosc[j]){
            printf("podane slowo nie jest palindromem");
            break;
        }else{
            w += 1;
        }
    }
    if (w == dl){
       printf("podane slowo jest palindromem");
    }
//    printf("\n%s", odwrotnosc);
    return 0;
}

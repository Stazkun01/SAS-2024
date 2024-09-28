#include<stdio.h>
int main(){
        int n;
                printf(" entrer un nombre entier :");
                scanf("%d" ,&n);
    if(n <= 2){
                printf("c'est un nombre premier\n");
                return 0;
 }
    else {
        int i;
        for (i =2 ;i< n;i++){
            if(n % i == 0){
        printf("ce n'est pas un nombre premier\n");
        return 0;}
    }
    }
        printf("c'est un nombre premier\n");
    return 0;
}

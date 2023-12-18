#include <stdio.h>
#include <stdlib.h>

void Ascendente(int n1,int n2,int n3);
int main()
{
    int a,b,c;

    do{
        printf("Ingrese 3 valores: \n");
        scanf("%d %d %d",&a,&b,&c);
        Ascendente(a,b,c);
    }while(a&&b&&c!=0);

    return 0;
}

void Ascendente(int n1,int n2,int n3){

    if((n1>=n2)&&(n1>=n3)){
        if(n2>=n3){
            printf("%d %d %d\n",n3,n2,n1);
        }
        else
            printf("%d %d %d\n",n2,n3,n1);
    }
    if((n2>=n1)&&(n2>=n3)){
        if(n1>=n3){
            printf("%d %d %d\n",n3,n1,n2);
        }
        else{
            printf("%d %d %d\n",n1,n3,n2);
        }
    }
    if((n3>=n1 && n3>=n2)){
        if(n1>=n2){
            printf("%d %d %d\n",n2,n1,n3);
        }
        else{
            printf("%d %d %d\n",n1,n2,n3);
        }
    }
}

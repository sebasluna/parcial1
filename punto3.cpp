#include<stdio.h>

int main(){
int matrizA[2][4];
int matrizB[4][2];
int matrizC[2][2];

//llenar matriz
for(int f=0; f<2; f++){
    for(int c=0; c<4; c++){
            scanf("%d",matrizA[f][c]);
    for(int f=0; f<2; f++){
        for(int c=0; c<4; c++){
        scanf("%d",matrizB[f][c]);
            for(int f=0; f<f; f++){
                for(int c=0; c=c; c++){
                    matrizC[filas][columnas] = matrizC[f][c] + matrizA[f][c]*matrizB[f][c];
                    }
                }
            }
        }
    }
}

//imprimir matriz
for(int f=0; f<f; f++){
    for(int c=0; c=c; c++){
            printf("posicion [%d][%d] = %d\n",f,c,matrizC[f][c]);
        }
        printf("\n")
    }
return 0;
}

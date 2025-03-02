#include <stdio.h>

void movtorre(int movT){
    if(movT > 0){
        
        printf("Torre: Direira\n");
        printf("\n");
        
        movtorre(movT - 1);
    }
}
void movBispo(int movB){
    if (movB > 0){
        while (movB > 0)
        {
            
        printf("Bispo: Cima\n");
        printf("\n");
        
        movB--;}
        movB = 5;
        while ( movB > 0)
        {
            printf("Bispo: Direita\n");
            printf("\n");
            movB--;
        }
             
        
        
        
    }
}

void movRainha(int movR){
    if(movR > 0){
        
        printf("Rainha: Esquerda\n");
        printf("\n");
        movRainha(movR - 1);

    }
}


int main(){
movtorre(5);
movBispo(5);
movRainha(8);

for(int cimaC = 2, direitaC = 1; cimaC > 0; cimaC--, direitaC-- ){
   
     if(cimaC > 0){
        switch (cimaC)
        {
        case 1: 
        printf("Cavalo: Cima\n");
        printf("\n");
            break;
        case 2: 
        printf("Cavalo: Cima\n");
        printf("\n");
        }

     }
      
      while(direitaC > 0){
        switch (direitaC)
        {
        case 1:
        printf("Cavalo: Direita\n");
        printf("\n");
        direitaC--;
            break;
        
        
        }
      } 
       
    }


    return 0;
}


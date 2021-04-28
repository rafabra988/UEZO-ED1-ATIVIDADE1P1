#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

////--------------------------------------<exercicio 1>-----------------------------------------------------

/*x e y recebem as posições no vetor, i fazera o loop com o for, r recebe o
 valor da soma das posições e o test passa o valor verdadeiro pro boolean
 quando algum if é executado*/
//    int vetor[12], x=0,y=0 ,i=0 , r=0,test=0;
//    _Bool veri = false; /*boolean para poder finalizar o loop*/
//
//    /*for para receber valores to vetor*/
//    for(i=0;i<12;i++){
//        printf("valor do vetor na posição %d ", i+1);
//        scanf("%d",&vetor[i]);
//        system("cls");
//    }
//
//    /* recebimento do valor de x e y e verificação*/
//   do{
//        printf("\nquais as possições você gostaria de somar?\n");
//        scanf("%d %d",&x,&y);
//        x-=1; /*retira 1 para se enquandar as 12 posições do vetor(0 a 11)*/
//        y-=1;
//        /*ve se y e x estão dentro do escopo do vetor, caso n esteja, printa
//         uma mensagem de erro e refaz o loop*/
//        if(x<0 || x>11){
//            printf("\nX deve está entre 0 e 12\n");
//            test++;
//        }
//        if(y<0 || y>11){
//            printf("\nY deve está entre 0 e 12\n");
//            test++;
//        }
//        /*caso nenhum if seja executadp, passa o valor verdadeiro para o
//        boolean*/
//        if(test==0){
//            veri=1;
//        }
//
//        test=0; /*recebe zero para caso a condição seja cumprida no proximo
//                loop, o loop possa terminar*/
//    }while(veri==false);
//
//    /*soma das posições*/
//    r=vetor[x]+vetor[y];
//
//    /*print do resultado da soma*/
//    printf("a soma das posições %d e %d é %d", x+1,y+1,r);



////--------------------------------------<exercicio 2>-----------------------------------------------------



//    int i,j=0,resto, vetor[10];
//
//    srand(time(NULL));/*alimentando o seed com o relogio*/
//
//    /*for para preencher o vetor com valores*/
//    for(i=0;i<100;i++){
//        int r = rand(); /*r recebendo um numero aleatorio*/
//        resto = r % 2; /*vendo se a tem resto na divisão do número*/
//        if(resto>0){
//            vetor[j]=r; /*caso tenha, ele é adicionado ao vetor*/
//            j++;
//        }
//        if(j==10){
//            break; /*quebra o loop caso j fique igual a 10*/
//        }
//    }
//
//    /*printando o vetor*/
//    for(i=0;i<10;i++){
//        printf("%d   ", vetor[i]);
//    }



////--------------------------------------<exercicio 3>-----------------------------------------------------



//    int vetor[16], aux, posi =1,i=0, j=15;
//
//    /*lendo vetor*/
//    for(i=0;i<16;i++){
//        printf("valor da %dª posição ", posi);
//        scanf("%d", &vetor[i]);
//        posi++; /*contador para as posições no printf ficar bonitinha*/
//        system("cls");
//    }
//
//    /*for para fazer a troca das posições, enquanto o i
//    faz a troca crescente, o j faz o mesmo decrescente*/
//    for(i=0;i<8;i++){
//        aux=vetor[i];
//        vetor[i]=vetor[j];
//        vetor[j]=aux;
//        j--;
//    }
//
//    posi=1;
//
//    /*printando o novo vetor*/
//    for(i=0;i<16;i++){
//        printf("\n na %dª posição está o número %d",posi, vetor[i]);
//        posi++;/*contador para as posições no printf ficar bonitinha*/
//    }




////--------------------------------------<exercicio 4>-----------------------------------------------------



//    int vetor[20] ,x ,i ,posi =1;
//    _Bool identi = false;
//
//
//    /*for para ler o vetor*/
//    for(i=0;i<20;i++){
//        printf("valor da %dª posição ", posi);
//        scanf("%d", &vetor[i]);
//        posi++;
//        system("cls");
//    }
//
//    /*lendo x*/
//    printf("qual o valor de x?");
//    scanf("%d",&x);
//
//    /*procurando x dentro do vetor*/
//    for(i=0;i<20;i++){
//        /*se achado, printa na tela, passa true
//         pro boolean e quebra o loop*/
//        if(x==vetor[i]){
//            printf("a posição de x é %dª no vetor",i);
//            identi=1;
//            break;
//        }
//    }
//
//    /*caso não tenha achado, printa mensagem*/
//    if(identi==false){
//        printf("o valor não foi encontrado");
//    }




////--------------------------------------<exercicio 5>-----------------------------------------------------




//    int vetor[40], i,posi =1, contador=0 ;
//
//
//    /*lendo o vetor*/
//    for(i=0;i<40;i++){
//        printf("valor da %dª posição ", posi);
//        scanf("%d", &vetor[i]);
//        posi++;
//        system("cls");
//    }
//
//    for(i=0;i<40;i++){
//        /*dividindo cada posição por 2. caso não
//        sobre resto, incrementa contador*/
//        int resto = vetor[i]%2;
//        if(resto==0){
//            contador++;
//        }
//    }
//
//    /*printando resultado*/
//    if(contador==0){
//        printf("não exite número par no vetor");
//    }else if(contador==1){
//        printf("existe %d número par no vetor", contador);
//    }else{
//        printf("existem %d números pares no vetor", contador);
//    }



////--------------------------------------<exercicio 6>-----------------------------------------------------


//    int vetor[40], i,posi =1;
//
//
//    /*lendo o vetor*/
//    for(i=0;i<40;i++){
//        printf("valor da %dª posição ", posi);
//        scanf("%d", &vetor[i]);
//        posi++;
//        system("cls");
//    }
//
//    for(i=0;i<40;i++){
//        /*se a posição do vetor for menor que zero,
//         iguala ela a zero*/
//        if(vetor[i]<0){
//            vetor[i]=0;
//        }
//    }
//
//    /*printando o vetor*/
//    for(i=0;i<40;i++){
//        printf("\n %d", vetor[i]);
//    }






    return 0;
}

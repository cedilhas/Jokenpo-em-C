#include <stdio.h>
#include <stdlib.h>

char jogador1[50], jogador2[50];
int jogada1, jogada2;
int placar1, placar2;
int resultado;
int continuar;

int resultadofinal(){

 if (jogada1 == jogada2){
    printf("Empate!\n");
    return 0;
 }

else if ((jogada1 == 1 && jogada2 == 3)||(jogada1 == 2 && jogada2 == 1)||(jogada1 == 3 && jogada2 == 2)){

    printf("%s venceu!\n", jogador1);
    return 1;

} else{

    printf("%s venceu!\n", jogador2);
    return 2;
    }

    system("cls");
}

int main(){

    printf("Selecione o seu nome Jogador 1: ");
    scanf("%49s", jogador1);

    system("cls");

    printf("Selecione o seu nome Jogador 2: ");
    scanf("%49s", jogador2);

    system("cls");

    while(1){

        printf("Rodada jogador %s\n\n", jogador1);
        printf("Escolha sua Jogada,\n 1-Pedra\n 2-Papel\n 3-Tesoura\n\n");
        scanf("%d", &jogada1);

        system("cls");

        printf("Rodada jogador %s\n\n", jogador2);
        printf("Escolha sua Jogada,\n 1-Pedra\n 2-Papel\n 3-Tesoura\n\n");
        scanf("%d", &jogada2);

        system("cls");
        
        resultado = resultadofinal();

        if (resultado == 1){
            placar1++;
        } else if (resultado == 2){
            placar2++;
        }

        system("cls");

        printf("Placar atual %d : %d \n\n",placar1, placar2);

        printf("Desejam continuar jogando?\n\n 1-Sim\n 2-Nao\n\n");
        scanf("%d", &continuar);

        system("cls");

        if (continuar == 2){

            printf("----- FIM DA PARTIDA -----\n\n");
        if (placar1 > placar2){
            printf("O %s venceu!\n\n", jogador1);
}       else if (placar2 > placar1){
            printf("O %s venceu!\n\n", jogador2);
}       else{
            printf("A partida terminou em empate com %d pontos para %s e %d pontos para %s!\n\n", placar1, jogador1, placar2, jogador2);
}
            printf("--------------------------");
        break;
           }
    }

    return 0;

}

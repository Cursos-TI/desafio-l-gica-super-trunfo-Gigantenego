#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char nome_da_cidade[50],nome_da_cidade2[50],estado[50],estado2[50];
    char codigo_da_cidade[50],codigo_da_cidade2[50];
    unsigned long int populacao,populacao2;
    float area,area2,densidade_populacional,densidade_populacional2;
    float PIB_per_capita,PIB,PIB2,PIB_per_capita2;
    float super_poder_cidade1,super_poder_cidade2;
    int menu1,categoria,numero_de_pontos_turisticos,numero_de_pontos_turisticos2,pontos_cidade1=0,pontos_cidade2=0;    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("***BEM VINDO AO JOGOS SUPERTRUNFO***\n\n");
    printf("1- INICIAR JOGO\n2- REGRAS\n3- SAIR ");
    scanf("%u",&menu1);
    
    switch (menu1)
    {
    case 1:
        
        printf("\n\n***INSERINDO DADOS DA PRIMEIRA CIDADE***\n\n");
        
        printf("Insira nome do estado: \n");
        //usei fgets porque existem cidades com nomes compostos
        fgets(estado, sizeof(estado), stdin);
        //usei getchar pra ler a linha vazia e nao ignorar mais o proximo printf
        getchar();
        printf("Insira nome da cidade: \n");
        //usei fgets porque existem cidades com nomes compostos
        fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
        //usei getchar pra ler a linha vazia e nao ignorar mais o proximo printf
        getchar();
        printf("Insira o código da cidade: \n");
            scanf("%s",  codigo_da_cidade);

        printf("Insira a população da cidade: \n");
            scanf("%lu", &populacao);

        printf("Insira a area da cidade: \n");
            scanf("%f", &area);

        printf("Insira PIB da cidade: \n");
            scanf("%f", &PIB);

        printf("Insira o número de pontos turisticos da cidade: \n");
            scanf("%u", &numero_de_pontos_turisticos);

        //usei getchar pra ler a linha vazia e nao ignorar mais o proximo printf
        getchar();

        printf("\n\n***INSERINDO DADOS DA SEGUNDA CIDADE***\n\n");

        printf("Insira nome do estado: \n");
        //usei fgets porque existem cidades com nomes compostos
        fgets(estado2, sizeof(estado2), stdin);

        printf("Insira nome da 2° cidade: \n");
            fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);

        printf("Insira o código da 2° cidade: \n");
            scanf("%s",  codigo_da_cidade2);
        
        printf("Insira a população da 2° cidade: \n");
            scanf("%lu", &populacao2);

        printf("Insira a area da 2° cidade: \n");
            scanf("%f", &area2);

        printf("Insira PIB da 2° cidade: \n");
            scanf("%f", &PIB2);

        printf("Insira o número de pontos turisticos da 2° cidade: \n");
            scanf("%u", &numero_de_pontos_turisticos2);

        densidade_populacional = (double) populacao/area;
        PIB_per_capita = (double) PIB/populacao;

        densidade_populacional2 = (double) populacao2/area2;
        PIB_per_capita2 = (double) PIB2/populacao2;

        super_poder_cidade1 = (double) populacao+area+PIB+PIB_per_capita+densidade_populacional;
        super_poder_cidade2 = (double) populacao2+area2+PIB2+PIB_per_capita2+densidade_populacional2;
        
        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("\n\n***RESUMO DA PRIMEIRA CIDADE***\n\n");

        printf("Estado: %s",estado);
        printf("Nome da 1° cidade %s",nome_da_cidade);
        printf("Código de %s%s \n",nome_da_cidade, codigo_da_cidade);
        printf("População de %s%lu \n",nome_da_cidade,populacao);
        printf("Área de %s%f Km² \n",nome_da_cidade,area);
        printf("PIB de %s%f \n",nome_da_cidade, PIB);
        printf("Número de pontos turísticos de %s%u \n",nome_da_cidade,numero_de_pontos_turisticos);
        printf("Densidade populacional de %s%f \n",nome_da_cidade,densidade_populacional);
        printf("PIB per capita de %s%f \n",nome_da_cidade,PIB_per_capita);
        printf("Super-poder de %s%f \n",nome_da_cidade,super_poder_cidade1);

        printf("\n\n***RESUMO DA SEGUNDA CIDADE***\n\n"); 

        printf("Estado:%s \n",estado2);
        printf("Nome da 2° cidade:%s \n",nome_da_cidade2);
        printf("Código de %s%s \n",nome_da_cidade2, codigo_da_cidade2);
        printf("População de %s%lu \n",nome_da_cidade2,populacao2);
        printf("Área de %s%f Km² \n",nome_da_cidade2,area2);
        printf("PIB de %s%f \n",nome_da_cidade2, PIB2);
        printf("Número de pontos turísticos de %s%u \n",nome_da_cidade2,numero_de_pontos_turisticos2);
        printf("Densidade populacional de %s%f \n",nome_da_cidade2,densidade_populacional2);
        printf("PIB per capita de %s%f \n",nome_da_cidade2,PIB_per_capita2);
        printf("Super-poder de %s%f \n",nome_da_cidade2,super_poder_cidade2);


        printf("\n\n***ESCOLHA UMA CATEGORIA PARA COMPARAÇAO***\n\n");
        printf("1 - POPULAÇÃO\n2 - ÁREA\n3 - PIB\n4 - NÚMERO DE PONTOS TURIRÍSTICOS\n5 - DENSIDADE POPULACIONAL\n6 - PIB PER CAPTA\n7 - SUPER-PODER\n");

        scanf("%d",&categoria);

        switch (categoria)
        {
        case 1:

            printf("A cidade %s possui %lu habitantes\n",nome_da_cidade,populacao);
            printf("A cidade %s possui %lu habitantes\n\n",nome_da_cidade2,populacao2);

            if (populacao>populacao2){
            printf("O vencedor é a cidade é a cidade: %s",nome_da_cidade);
            ++pontos_cidade1 ;
            }else{
            printf("O vencedor é a cidade: %s",nome_da_cidade2);
            ++pontos_cidade2 ;
            }
            break;
        case 2:
            
            printf("A cidade %s possui %f m²\n",nome_da_cidade,area);
            printf("A cidade %s possui %f m²\n\n",nome_da_cidade2,area2);

            if (area>area2){
            printf("O vencedor é a cidade %s com %f",nome_da_cidade,area);
            ++pontos_cidade1 ;
            }else{
            printf("O vencedor é a cidade %s com %f",nome_da_cidade2,area2);
            ++pontos_cidade2 ;
            }
            break;

        case 3:

            printf("A cidade %s possui %f de PIB\n",nome_da_cidade,PIB);
            printf("A cidade %s possui %f de PIB\n\n",nome_da_cidade2,PIB2);

            if(PIB>PIB2){
            printf("O vencedor é a cidade %s com %f de PIB",nome_da_cidade,PIB);
            pontos_cidade1++;
            }else{
            printf("O vencedor é a cidade %s com %f de PIB",nome_da_cidade2,PIB2);
            pontos_cidade2++;
            }
            break;

        case 4:

            printf("A cidade %s possui %u pontos turisticos\n",nome_da_cidade,numero_de_pontos_turisticos);
            printf("A cidade %s possui %u pontos turisticos\n\n",nome_da_cidade2,numero_de_pontos_turisticos2);

            if(numero_de_pontos_turisticos>numero_de_pontos_turisticos2){
            printf("O vencedor é a cidade %s com %f pontos turisticos",nome_da_cidade,numero_de_pontos_turisticos);
            pontos_cidade1 ++;
            }else{
            printf("O vencedor é a cidade %s com %f pontos turisticos",nome_da_cidade,numero_de_pontos_turisticos2);
            pontos_cidade2 ++;
            }
            break;

        case 5:

            printf("A cidade %s possui %f de densidade populacional\n",nome_da_cidade,densidade_populacional);
            printf("A cidade %s possui %f de densidade populacional\n\n",nome_da_cidade2,densidade_populacional2);

            if(densidade_populacional<densidade_populacional2){
            printf("O vencedor é a cidade %s com %f menor densidade populacional em relação a cidade %s",nome_da_cidade,densidade_populacional,nome_da_cidade2);
            pontos_cidade1++;
            }else{
            printf("O vencedor é a cidade %s com %f menor densidade populacional em relação a cidade %s",nome_da_cidade2,densidade_populacional,nome_da_cidade);
            pontos_cidade2 ++;
            }
            break;

        case 6:

        printf("A cidade %s possui %f de PIB per capta\n",nome_da_cidade,PIB_per_capita);
        printf("A cidade %s possui %f de PIB per capta\n\n",nome_da_cidade2,PIB_per_capita2);

            if(PIB_per_capita>PIB_per_capita2){
            printf("O vencedor é a cidade %s com %f PIB per capta",nome_da_cidade,PIB_per_capita);
            ++pontos_cidade1;
            }else{
            printf("O vencedor é a cidade %s com %f PIB per capta",nome_da_cidade2,PIB_per_capita2);
            ++pontos_cidade2 ;
            }
            break;

        case 7:

            printf("A cidade %s possui %f de SUPER-PODER\n",nome_da_cidade,super_poder_cidade1);
            printf("A cidade %s possui %f de SUPER-PODER\n\n",nome_da_cidade2,super_poder_cidade2);

            if(super_poder_cidade1>super_poder_cidade2){
            printf("O vencedor é a cidade %s com %f de SUPER-PODER",nome_da_cidade,super_poder_cidade1);
            ++pontos_cidade1;
            }else{
            printf("O vencedor é a cidade %s com %f de SUPER-PODER",nome_da_cidade2,super_poder_cidade2);
            ++pontos_cidade2 ;
            }
            break;

        
            default:
            printf("Opção invalida!!!");
            break;
        }
        break;
    
    case 2:
        printf("Os dados das cartas são inseridos pelos jogadores.\nOs jogadores sorteados escolhem uma característica.\nGanha a rodada o jogador em que o país em questão possui o maior valor\n(exceto a categoria -DENSIDADE DEMOGRAFICA- que vence quem tiver o MENOR valor).\n");
        break;

    case 3:
        printf("SAINDO...");
        break;

    default:
        printf("OPÇÃO INVALIDA");
        break;
    }

   
    
return 0;

}

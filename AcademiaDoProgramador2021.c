#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese");
   int num=0;
   char nome[50];
   char preco[50];
   char serie[50];
   char datafab[50];
   char fab[50];

   while(num!=5){
    system("cls");
    printf("\t\t\t Controle de equipamento\n\n\n");
    printf("1-Registrar\n");
    printf("2-Visualizar\n");
    printf("3-Editar\n");
    printf("4-Excluir\n");
    printf("5-Sair\n");
    scanf("%d",&num);

    switch (num){
        case 1:
             system("cls");
             printf("\t\t  Registro  \n\n");
             printf("Nome: \n");
             fflush(stdin);
             scanf("%[^\n]s",nome);

             printf("Preço: \n");
             fflush(stdin);
             scanf("%[^\n]s",preco);

             printf("N° série: \n");
             fflush(stdin);
             scanf("%[^\n]s",serie);

             printf("Data de fabricação: \n");
             fflush(stdin);
             scanf("%[^\n]s",datafab);

             printf("Fabricante: \n");
             fflush(stdin);
             scanf("%[^\n]s",fab);

             printf("\n\n");
             printf("\t\t Registrado de com sucesso \n");
             system("pause");
             break;

        case 2:
            system("cls");
            printf("\t\t Visualizar Registros \n\n");
            printf("Nome: %s \n",nome);
            printf("Preço: %s \n",preco);
            printf("N° Série: %s \n",serie);
            printf("Data de Fabricação: %s \n",datafab);
            printf("Fabricação: %s \n",fab);
            system("pause");
            break;

        case 3:
            system("cls");
            int edit;



            printf("\t\t Editar Registros \n\n");
            printf("Nome: %s \n",nome);
            printf("Preço: %s \n",preco);
            printf("N° Série: %s \n",serie);
            printf("Data de Fabricação: %s \n",datafab);
            printf("Fabricação: %s \n\n\n\n\n",fab);



            printf("\t Editar Registro de Equipamento\n");
            printf("\t1-Editar o Nome.\n");
            fflush(stdin);
            printf("\t2-Editar o Preço.\n");
            fflush(stdin);
            printf("\t3-Editar o N° Série.\n");
            fflush(stdin);
            printf("\t4-Editar o Data de Fabrição.\n");
            fflush(stdin);
            printf("\t5-Editar o Fabricante.\n");
            fflush(stdin);
            printf("\t6-Modificar todos os dados\n");
            fflush(stdin);
            scanf("%d",edit);


            switch(edit){
                case 1:
                printf("Modificar o Nome: \n");
                scanf("%c",nome);

            case 2:
                printf("Modificar o Preço: \n");
                scanf("%c",preco);

            case 3:
                printf("Modificar o N° Série: \n");
                scanf("%c",serie);

            case 4:
                printf("Modificar o Data de fabricação: \n");
                scanf("%c",datafab);

            case 5:
                printf("Modificar o fabricante: \n");
                scanf("%c",fab);

             case 6:
                printf("\t\t Registro: \n\n");
                printf("Nome: \n");

                scanf("%[^\n]s",nome);

                printf("Preço: \n");

                scanf("%[^\n]s",preco);

                printf("N° Série \n");

                scanf("%[^\n]s",serie);

                printf("Data de Fabricação: \n");

                scanf("%[^\n]s",datafab);

                printf("Fabricante: \n");

                scanf("%[^\n]s",fab);


             default:
    printf("Opção Inválida");
    return 0;
}
system("pause");
break;

        case 4:
            system("cls");
            int excluir;
            printf("Nome: %s \n",nome);
            printf("Preço: %s \n",preco);
            printf("N° Série: %s \n",serie);
            printf("Data de Fabricação: %s \n",datafab);
            printf("Fabricação: %s \n\n\n\n\n",fab);

            printf("\t Excluir registro\n");
            printf("\t1-Excluir\n\t2- Não excluir");
            scanf("%d",&excluir);
            if(excluir == 1){
                memset(nome,0,sizeof(nome));
                memset(preco,0,sizeof(preco));
                memset(serie,0,sizeof(serie));
                memset(datafab,0,sizeof(datafab));
                memset(fab,0,sizeof(fab));
                    printf("Todos os registros foram exclúidos\n");
            }
            else{
                printf("Registros não excluidos");
            }
            system("pause");
            break;

        default:
             printf("Opção Inválida");
            fflush(stdin);
             return main();

}
}
}

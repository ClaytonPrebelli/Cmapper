#define _WIN32_WINNT 0x0601
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<dos.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
FILE *arq_usuarios;
FILE *id_usuario;
char login_coleta[10];
char senha_coleta[10];
char cpf[30];
void valida_cpf();
void valida_letra(char *);
void valida_numero(char *);
char texto_digitado[50];
char troca_por_numero[50];
int id_user;

int main(){
   keybd_event ( VK_LWIN, 0x36, 0, 0 );
   keybd_event ( VK_UP, 0x36, 0, 0 );
   keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
   keybd_event ( VK_LWIN, 0x38, KEYEVENTF_KEYUP, 0 );
   keybd_event ( VK_UP, 0x38, KEYEVENTF_KEYUP, 0 );

    system("title CMAPPER 2020");

    setlocale(LC_ALL, "Portuguese");

        system("color 71");
int x;
int y;
    HWND hnd;
    HMENU menu;
    int i, j, cont;
    LPTSTR buffer;

    // Recebe o handle do console
    hnd = GetConsoleWindow();

    // Recebe o handle para o menu do sistema
    menu = GetSystemMenu(hnd, 0);

    // Recebe quantos itens tem no menu
    cont = GetMenuItemCount(menu);

    j = -1;

    // Alocando espaço para receber a string que "não sabemos" o tamanho
    buffer = (TCHAR*) malloc (256 *sizeof(TCHAR));

    for (i=0; i<cont; i++) {
        // Recebe a string do menu, na posição "i" e a coloca no buffer
        GetMenuString(menu, i, buffer, 255, MF_BYPOSITION);
    //Compara se a string do menu é igual a string "Fechar"
        if (!strcmp(buffer, "&Fechar")) {
            j = i;
            break;
        }
    }
    // Se a string "Fechar" for encontrada, remove do menu
    if (j >= 0)
        RemoveMenu(menu, j, MF_BYPOSITION);

           system("color 4F");
            printf("\n\n\n");
            printf("                            ######   #######  ##   ##           ### ###   ######  ##  ###  ######    #####\n");
            printf("                            ### ###  ### ###  ### ###           ### ###     ##    ### ###  ### ###  ### ###\n");
            printf("                            ### ###  ###      #######           ### ###     ##    #######  ### ###  ### ###\n");
            printf("                            ######   #####    #######           ### ###     ##    #######  ### ###  ### ###\n");
            printf("                            ### ###  ###      ### ###           ### ###     ##    ### ###  ### ###  ### ###\n");
            printf("                            ### ###  ### ###  ### ###            #####      ##    ### ###  ### ###  ### ###\n");
            printf("                            ######   #######  ### ###             ###     ######  ### ###  ######    #####\n\n\n");
            printf("                                                         #####    #####\n");
            printf("                                                        ### ###  ### ###\n");
            printf("                                                        ### ###  ### ###\n");
            printf("                                                        #######  ### ###\n");
            printf("                                                        ### ###  ### ###\n");
            printf("                                                        ### ###  ### ###\n");
            printf("                                                        ### ###   #####\n\n\n");
            printf("                                     #####   ##   ##   #####   ######   ######   #######  ######\n");
            printf("                                    ### ###  ### ###  ### ###  ### ###  ### ###  ### ###  ### ###\n");
            printf("                                    ###      #######  ### ###  ### ###  ### ###  ###      ### ###\n");
            printf("                                    ###      #######  #######  ######   ######   #####    ######\n");
            printf("                                    ###      ### ###  ### ###  ###      ###      ###      ### ##\n");
            printf("                                    ### ###  ### ###  ### ###  ###      ###      ### ###  ### ###\n");
            printf("                                     #####   ### ###  ### ###  ###      ###      #######  ### ###\n");
            sleep(1);
            system("color 71");
            sleep(1);
            system("color 4F");
            sleep(1);
            system("color 71");
            printf("                          ----------------------------------------------------------------------------------\n");
             printf ("\n\n                                                                 Loading \n\n");
             for (x = 1; x <= 50; x++){
      printf ("  %d%%\r", x*2);
      fflush (stdout);

      for (y = 0; y < x; y++){
         if (!y)
           printf("                                         ");

         printf ("%c",35);
         usleep(1000);
      }
   }
   puts("\a");
            printf("\n\n                                                      Sistema iniciado com sucesso\n\n");
            printf("                          ----------------------------------------------------------------------------------\n");
            printf("\n\t\t\t\t\t");

            system("pause");
            system("cls");
            logar();
}
int logar(){
    char login_adm[10]="unip\n";
char senha_adm[10]="unip\n";
int valida_login;
int valida_senha;
            printf("\n\t\t\t\t\tNecessário autenticar seu usuário.\n");
            printf("\n");
            printf("\t\t\t\t\tEntre com o Login:\n");
            printf("\t\t\t\t\tLogin: ");
            fgets(login_coleta,10,stdin);
            fflush(stdin);
            printf("\n");
            printf("\t\t\t\t\tEntre com a Senha:\n");
            printf("\t\t\t\t\tSenha: ");
            fgets(senha_coleta,10,stdin);
            fflush(stdin);
            valida_login=strcmp(login_coleta,login_adm);
            valida_senha=strcmp(senha_coleta,senha_adm);
            if (valida_login==0 && valida_senha==0){
                        menu_adm();
            }else{valida_user();}
}

int menu_user(){
int opcao_menu_user=1;
int opc_cor_user;
                system("cls");
                system("color 3F");
             printf("\n\t\t\t\t\tBem vindo %s\n",login_coleta);
              do{
                    printf("\t\t\t\t\tPara sua comodidade, você pode escolher a cor do sistema\n");
                    printf("\t\t\t\t\tEscolha uma opção do menu abaixo\n");
                    printf("\n");
                    printf("\t\t\t\t\t1 - Deixar como está.\n");
                    printf("\t\t\t\t\t2 - Vinho\n");
                    printf("\t\t\t\t\t3 - Cinza\n");
                    printf("\t\t\t\t\t4 - Azul\n");
                    printf("\t\t\t\t\t5 - Branco\n");
                    printf("\t\t\t\t\t6 - Preto\n");
                    printf("\t\t\t\t\tDigite a opção: ");
                    valida_numero(troca_por_numero);
                    opc_cor_user = atoi (troca_por_numero);
                    switch(opc_cor_user){
                       case 1:  printf("\n");
                                printf("\t\t\t\t\tPerfeito! Deixaremos sua tela como está.\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 2:  printf("\n");
                                system("color 4F");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 3:  printf("\n");
                                system("color 71");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;

                       case 4:  printf("\n");
                                system("color 1F");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 5:  printf("\n");
                                system("color F0");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                system("pause");
                                printf("\n\t\t\t\t\t");
                                system("cls");
                                break;
                       case 6:  printf("\n");
                                system("color 0F");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;

                        default: printf("\n\t\t\t\t\tOpção Inválida\n");
                                 system("cls");
                             }

                }while(opc_cor_user>6);
            do{
               printf("\t\t\t\t\t---MENU DO USUARIO---\n");
               printf("\n");
               printf("\t\t\t\t\tDigite uma opção:\n");
               printf("\t\t\t\t\t1 - Ir para seção de Pacientes \n");
               printf("\t\t\t\t\t2 - Logout \n");
               printf("\t\t\t\t\t3 - Sair\n");
               printf("\n");
               printf("\t\t\t\t\t");
               valida_numero(troca_por_numero);
               opcao_menu_user = atoi(troca_por_numero);
               system("cls");
               switch(opcao_menu_user){
                   case 1:
                       modulo_paciente();
                       break;
                   case 2:
                       opcao_menu_user=0;
                       login_coleta[0]='\0';
                       senha_coleta[0]='\0';
                       fflush(stdin);
                       logar();
                       break;
                   case 3:
                       printf("\n\t\t\t\t\t");
                       system("cls");
                       printf("\n\t\t\t\t\tVolte sempre %s\n",login_coleta);
                       printf("\t\t\t\t\t");
                       system("pause");
                       exit(1);
                       break;
                   default:
                       printf("\n\t\t\t\t\tOpção inválida\n");
                    }
               }while(opcao_menu_user==1);
}

int menu_adm(){

char user[10];
char pass[10];
int saltos=0;

int opc_cor_adm;
int opcao_login_adm=1;
    id_usuario = fopen("id_user.txt", "a");
    fclose(id_usuario);
    id_usuario = fopen("id_user.txt", "r");
    fscanf(id_usuario,"%d",&id_user);
    int fclose(id_usuario);
            system("cls");
            system("color 4F");
             printf("\n\t\t\t\t\tBEM VINDO ADMINISTRADOR\n");
               do{
                    printf("\t\t\t\t\tPara sua comodidade, você pode escolher a cor do sistema\n");
                    printf("\t\t\t\t\tEscolha uma opção do menu abaixo\n");
                    printf("\n");
                    printf("\t\t\t\t\t1 - Deixar como está.\n");
                    printf("\t\t\t\t\t2 - Verde água\n");
                    printf("\t\t\t\t\t3 - Cinza\n");
                    printf("\t\t\t\t\t4 - Azul\n");
                    printf("\t\t\t\t\t5 - Branco\n");
                    printf("\t\t\t\t\t6 - Preto\n");
                    printf("\t\t\t\t\tDigite a opção: ");
                    valida_numero(troca_por_numero);
                   opc_cor_adm = atoi (troca_por_numero);
                      switch(opc_cor_adm){
                       case 1:  printf("\n");
                                printf("\t\t\t\t\tPerfeito! Deixaremos sua tela como está.\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 2:  printf("\n");
                                system("color 3F");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 3:  printf("\n");
                                system("color 71");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;

                       case 4:  printf("\n");
                                system("color 1F");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 5:  printf("\n");
                                system("color F0");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;
                       case 6:  printf("\n");
                                system("color 0F");
                                printf("\n\t\t\t\t\tAlterações feitas!\n");
                                printf("\n\t\t\t\t\t");
                                system("pause");
                                system("cls");
                                break;

                        default: printf("\n\t\t\t\t\tOpção Inválida\n");
                                printf("\t\t\t\t\t");
                                system("pause");
                                system("cls");
                             }

                }while(opc_cor_adm>6);
            do{ printf("\n\t\t\t\t\tEscolha uma opcão.\n");
                printf("\t\t\t\t\t1 - Cadastrar novo usuário\n");
                printf("\t\t\t\t\t2 - Ir para seção de Pacientes\n");
                printf("\t\t\t\t\t3 - Logout\n");
                printf("\t\t\t\t\t4 - Sair\n");
                printf("\t\t\t\t\tDigite a opção: ");
                valida_numero(troca_por_numero);
                opcao_login_adm = atoi(troca_por_numero);
                system("cls");
                switch(opcao_login_adm){
                    case 1:
                             id_user=id_user+1;
                             id_usuario = fopen("id_user.txt","wt");
                             fprintf(id_usuario,"%d\n",id_user);
                             fclose(id_usuario);
                             printf("\t\t\t\t\tDigite o novo usuário:\n");
                             printf("\t\t\t\t\tUsuário: ");
                             scanf("%s",&user);
                             printf("\t\t\t\t\tSenha: ");
                             scanf("%s",&pass);
                             arq_usuarios = fopen("users.txt","a");
                             fprintf(arq_usuarios,"%s\n%s\n",user,pass);
                             fclose(arq_usuarios);
                             printf("\t\t\t\t\tUsuário cadastrado com sucesso!\n\n");
                             printf("\t\t\t\t\tUsuário cadastrado: %s\n",user);
                             printf("\t\t\t\t\tSenha cadastrada: %s\n\n",pass);
                             printf("\t\t\t\t\tInforme ao usuário seus dados de login\n\n");
                             printf("\t\t\t\t\t");
                             system("pause");
                             system("cls");
                             break;
                     case 2:
                            modulo_paciente();
                            break;
                     case 3:
                            opcao_login_adm=0;
                            login_coleta[0]='\0';
                            senha_coleta[0]='\0';
                            fflush(stdin);
                            system("cls");
                            logar();
                            break;
                     case 4:
                            printf("\t\t\t\t\tVolte sempre %s\n",login_coleta);
                            printf("\t\t\t\t\t");
                            exit(1);
                            break;
                    default:
                            printf("\t\t\t\t\tOpção inválida\n");
                            printf("\t\t\t\t\t");
                            system("pause");
                            system("cls");
                    }
            }while((opcao_login_adm>4)||(opcao_login_adm==1));
    }

int valida_user(){
int saltos;
char user[10];
char pass[10];
int valida_login=1;
int valida_senha=1;
                id_usuario = fopen("id_user.txt", "r");
    fscanf(id_usuario,"%d",&id_user);
    int fclose(id_usuario);
        arq_usuarios=fopen("users.txt","r");
        for(saltos=1;saltos<=id_user;saltos++){
                fgets(user,10,arq_usuarios);
                fgets(pass,10,arq_usuarios);
                valida_login = strcmp(login_coleta,user);
                valida_senha = strcmp(senha_coleta,pass);
                if((valida_login==0)&&(valida_senha==0)){
                printf("\t\t\t\t\tBem vindo %s\n",user);
                menu_user();
                       }}
                       printf("\t\t\t\t\tUsuário ou Senha inválidos\n");
                       printf("\t\t\t\t\t");
                       system("pause");
                       system("cls");
            logar();
            }



int modulo_paciente(){

    setlocale(LC_ALL, "Portuguese");
    /*variaveis*/
    FILE *arq_cadastrados;
    FILE *arq_id;
    float infectados=0;
    float nao_infectados=0;
    float percentual_infectados=0;
    float percentual_nao=0;
    int esta;
    int opcao=1;
    float total_pacientes;
    int percent=100;
    float result_infectados;
    float result_nao;
    char nome[50];
    char telefone[13];
    char rua[50];
    int numero;
    char compl[20];
    char bairro[30];
    int cep;
    int idade;
    char cidade[30];
    char estado[10];
    char email[30];
    int valida_comorb;
    char comorbidades[30];
    int dian;
    int mesn;
    int anon;
    int diad;
    int mesd;
    int anod;
    int diar;
    int mesr;
    int anor;
    int id=0;
    int dia_mes;
    int idade2;
    FILE *conta_infectados;
    FILE *conta_nao;
    FILE *relatorio;
    FILE *pacientes_infectados;
    FILE *grupo_de_risco_i;
    int opcao_compl;

    /*coleta id*/
    arq_id = fopen("id.txt", "r");
    fscanf(arq_id,"%d",&id);
    int fclose(arq_id);
    conta_infectados=fopen("infectados.txt","r");
    fscanf(conta_infectados,"%f",&infectados);
    int fclose(conta_infectados);
    conta_nao=fopen("nao_infectados.txt","r");
    rewind(conta_nao);
    fscanf(conta_nao,"%f",&nao_infectados);
    int fclose(conta_nao);
    /*escolher opçao de menu. ponto do loop de repetiçao*/

    do
    {

        printf("\t\t\t\t\t--------------CADASTRO DE PACIENTES CMAPPER-------------\n");
        printf("\t\t\t\t\tDigite a opção desejada\n");
        printf("\t\t\t\t\t1 - Cadastrar novo paciente\n");
        printf("\t\t\t\t\t2 - Mostrar Relatório\n");
        printf("\t\t\t\t\t3 - Logout\n");
        printf("\t\t\t\t\t4 - Sair\n");
        printf("\t\t\t\t\t");
        scanf("%d",&opcao);
        /* switch case das opçoes*/
        switch(opcao)
        {
        /*caso digite 1 cadastra pacientes e exibe o registro*/
            case 1:
            system("cls");
            id=id+1;
            printf("\t\t\t\t\t----Cadastro de pacientes----\n");
            printf("\t\t\t\t\tDigite o Nome: ");
            valida_letra(nome);
            printf("\n\t\t\t\t\tDigite o CPF: ");
            valida_cpf();
            printf("\n\t\t\t\t\tDigite o Telefone (xx-xxxxxxxxx): ");
            scanf(" %s",&telefone);
            printf("\t\t\t\t\tDigite a Rua: ");
            valida_letra(rua);
            printf("\n\t\t\t\t\tDigite o Numero (somente números): ");
            valida_numero(troca_por_numero);
            numero=atoi(troca_por_numero);
            printf("\n\t\t\t\t\tPossui complemento?\n");
            printf("\t\t\t\t\t1 - Sim\n");
                printf("\t\t\t\t\t2 - Não\n");
                printf("\t\t\t\t\t");
                valida_numero(troca_por_numero);
                opcao_compl=atoi(troca_por_numero);
               do{
                        switch(opcao_compl){
                            case 1:
            printf("\n\t\t\t\t\tDigite a Complemento: ");
           fflush(stdin);
           fgets(compl,20,stdin);
           fflush(stdin);
           printf("\t\t\t\t\tDigite o Bairro: ");
            fgets(bairro,30,stdin);
            fflush(stdin);
            break;
                            case 2:
                                 fflush(stdin);
           printf("\n\t\t\t\t\tDigite o Bairro: ");
            fgets(bairro,30,stdin);
                                break;
                            default:
                                printf("\n\t\t\t\t\t Opção inválida\n");}}while((opcao_compl<1)||(opcao_compl>2));

            printf("\t\t\t\t\tDigite o CEP(somente números): ");
            valida_numero(troca_por_numero);
            cep=atoi(troca_por_numero);
            printf("\n\t\t\t\t\tDigite a Cidade: ");
            valida_letra(cidade);
            printf("\n\t\t\t\t\tDigite o Estado: ");
            valida_letra(estado);
            printf("\n\t\t\t\t\tDigite o email: ");
            scanf(" %[^\n]s",&email);
            printf("\t\t\t\t\tDigite a data de nascimento (dd/mm/aaaa): ");
            scanf("%d/%d/%d",&dian,&mesn,&anon);
            /*verifica se ha comorbidades*/
            do
            {
                printf("\t\t\t\t\tPossui comorbidades?\n");
                printf("\t\t\t\t\t1 - Sim\n");
                printf("\t\t\t\t\t2 - Não\n");
                printf("\t\t\t\t\t");
                valida_numero(troca_por_numero);
                valida_comorb=atoi(troca_por_numero);
                switch (valida_comorb)
                {
                case 1:
                    printf("\n\t\t\t\t\tDigite as comorbidades: ");
                    fflush(stdin);
                    fgets(comorbidades,30,stdin);
                    fflush(stdin);
                    break;
                case 2:
                    break;
                default:
                {
                    printf("\n\t\t\t\t\tOpção inválida\n");
                    printf("\t\t\t\t\t");
                    system("pause");
                }
                }
            }
            while(valida_comorb >2);
            /*finaliza as comorbidades*/
            printf("\n\t\t\t\t\tPaciente está infectado?\n");
            printf("\t\t\t\t\t1 - Sim\n");
            printf("\t\t\t\t\t2 - Não\n");
            printf("\t\t\t\t\t");
            valida_numero(troca_por_numero);
            esta=atoi(troca_por_numero);
            /*confere se esta infectado ou nao e soma na variavel correspondente*/
           do{
            if(esta==1)
            {
                infectados=infectados+1;
                conta_infectados=fopen("infectados.txt","w");
                fprintf(conta_infectados,"%.0f",infectados);
                fclose(conta_infectados);
            }
            else if(esta==2)
            {
                nao_infectados=nao_infectados+1;
                conta_nao=fopen("nao_infectados.txt","w");
                fprintf(conta_nao,"%.0f",nao_infectados);
                fclose(conta_nao);

            }else{printf("\n\t\t\t\t\tOpção Inválida!\n");}}while((esta<1)||(esta>2));

            /*insere dados de infectados e nao*/


            printf("\n\t\t\t\t\tDigite a data do diagnóstico: (dd/mm/aaaa)\n");
            printf("\t\t\t\t\t");
            scanf("%d/%d/%d",&diad,&mesd,&anod);
            /*calcula idade*/
            diar=diad-dian;
            mesr=mesd-mesn;
            anor=anod-anon;
            if ((diar>=0)&&(mesr=0))
            {
                dia_mes=1;
            }
            else if (mesr>0)
            {
                dia_mes=1;
            }
            else
            {
                dia_mes=0;
            }

            switch(dia_mes)
            {
            case 0:
                idade=anod-anon;
                idade=idade-1;
                break;
            case 1:
                idade=anod-anon;
                break;
            default:
                printf("\t\t\t\t\tdatas inválidas\n");
            }

            printf("\t\t\t\t\t------------------\n");
            printf("\n");
            printf("\n");
            printf("\t\t\t\t\t");
            system("pause");
            system("cls");

            /* imprime a ficha criada*/

            printf("\t\t\t\t\tSegue abaixo seu cadastro\n");
            printf("\t\t\t\t\t--------------------------------------------------------\n");
            printf("\t\t\t\t\tId: %d\n",id);
            printf("\t\t\t\t\tAtendente: %s\n",login_coleta);
            printf("\t\t\t\t\tNome: %s                \n",nome);
            printf("\t\t\t\t\tIdade: %d anos          \n",idade);
            printf("\t\t\t\t\tCPF: %s                 \n",cpf);
            printf("\t\t\t\t\tTelefone: %s            \n",telefone);
            printf("\t\t\t\t\tRua: %s                 \n",rua);
            printf("\t\t\t\t\tNúmero: %d              \n",numero);
            if(opcao_compl==1){printf("\t\t\t\t\tComplemento: %s",compl);
            printf("\t\t\t\t\tBairro: %s              ",bairro);}
                        else{printf("\t\t\t\t\tBairro: %s              ",bairro);}
            printf("\t\t\t\tCep: %d                 \n",cep);
            printf("\t\t\t\t\tCidade: %s              \n",cidade);
            printf("\t\t\t\t\tEstado: %s              \n",estado);
            printf("\t\t\t\t\tData de Nascimento: %d/%d/%d\n",dian,mesn,anon);
            printf("\t\t\t\t\tEmail: %s\n",email);
                        if (valida_comorb==1)
                        {
                            printf("\t\t\t\t\tComorbidades: %s\n",comorbidades);
                        }
                        else
                        {
                            printf("\t\t\t\t\tPaciente sem Comorbidades\n");
                        }
                                if (esta==1)
                                {
                                    printf("\t\t\t\t\tPaciente Infectado. Isolar imediatamente!\n");
                                }
                                else
                                {
                                    printf("\t\t\t\t\tPaciente não infectado. Manter cuidados de higiene!\n");
                                }
                                        if ((idade>=65)||(valida_comorb==1)){
                                            printf("\t\t\t\t\tPaciente do grupo de risco.\n");}else{
                                                printf("\t\t\t\t\tPaciente fora do grupo de risco.\n");}

            /*imprime em arquivo*/
            arq_cadastrados = fopen("pacientes.txt", "a");
            arq_id = fopen("id.txt","wt");/*abre e zera o arquivo id*/
            fprintf(arq_id,"%d\n",id);/*insere o novo valor de id*/
            fclose(arq_id);/*fecha id*/
            fprintf(arq_cadastrados,"ID: %d\n",id);
            fprintf(arq_cadastrados,"Atendente: %s\n",login_coleta);
            fprintf(arq_cadastrados,"NOME: %s\n",nome);
            fprintf(arq_cadastrados,"Idade: %d anos\n",idade);
            fprintf(arq_cadastrados,"CPF: %s\n",cpf);
            fprintf(arq_cadastrados,"Telefone: %s\n",telefone);
            fprintf(arq_cadastrados,"Rua: %s\n",rua);
            fprintf(arq_cadastrados,"Numero: %d\n",numero);
            if(opcao_compl==1)fprintf(arq_cadastrados,"Complemento: %s",compl);
            fprintf(arq_cadastrados,"Bairro: %s",bairro);
            fprintf(arq_cadastrados,"Cep: %d\n",cep);
            fprintf(arq_cadastrados,"Cidade: %s\n",cidade);
            fprintf(arq_cadastrados,"Estado: %s\n",estado);
            fprintf(arq_cadastrados,"Data de Nascimento: %d/%d/%d\n",dian,mesn,anon);
            fprintf(arq_cadastrados,"Email: %s\n",email);
            if(valida_comorb==1)
            {
                fprintf(arq_cadastrados,"Comorbidades: %s\n",comorbidades);
            }
            else
            {
                fprintf(arq_cadastrados,"Paciente sem comorbidades.\n");
            }
            if (esta==1)
            {
                fprintf(arq_cadastrados,"Infectado: Sim\n");
                fprintf(arq_cadastrados,"Data do Diagnóstico: %d/%d/%d\n",diad,mesd,anod);
                fprintf(arq_cadastrados,"-----------------\n");
                fprintf(arq_cadastrados,"\n\n");
            }
            else
            {
                fprintf(arq_cadastrados,"Infectado: Não\n");
                fprintf(arq_cadastrados,"Data do Diagnóstico: %d/%d/%d\n",diad,mesd,anod);
                fprintf(arq_cadastrados,"-----------------\n");
                fprintf(arq_cadastrados,"\n\n");
            }
            int fclose(arq_cadastrados);
            if ((esta==1)&&((valida_comorb==1)||(idade>=65))){
                        /*imprime em arquivo inectados grupo de risco*/

            grupo_de_risco_i = fopen("grupo de risco infectados.txt", "a");
            fprintf(grupo_de_risco_i,"----------------\n");
            fprintf(grupo_de_risco_i,"ID: %d\n",id);
            fprintf(grupo_de_risco_i,"Atendente: %s\n",login_coleta);
            fprintf(grupo_de_risco_i,"NOME: %s\n",nome);
            fprintf(grupo_de_risco_i,"Cep: %d\n",cep);
            fprintf(grupo_de_risco_i,"Idade: %d anos\n",idade);
            fprintf(grupo_de_risco_i,"----------------\n");
            fprintf(grupo_de_risco_i,"\n");

            int fclose(grupo_de_risco_i);
            }

            printf(" \t\t\t\t\t__________________________________________\n");

            printf("\t\t\t\t\t");
            system("pause");
            system("cls");
            modulo_paciente();
            break;
        /*caso digite 2 mostra relatório obtido*/
            case 2:
               /*calcula os dados das variaveis e percentuais*/
                          relatorio=fopen("relatorio.txt","w");
            total_pacientes=nao_infectados+infectados;
            result_infectados=infectados/total_pacientes;
            result_nao=nao_infectados/total_pacientes;
            percentual_infectados=result_infectados*percent;
            percentual_nao=result_nao*percent;
            if (total_pacientes==0){
                    system("cls");
                    printf("\t\t\t\t\tNão há pacientes cadastrados\n");
                    printf("\t\t\t\t\t");
                    system("pause");
                    system("cls");
            }else{
                           fprintf(relatorio,"Pacientes: %.0f\n",total_pacientes);
            fprintf(relatorio,"Infectados: %.0f\n",infectados);
            fprintf(relatorio,"Não infectados: %.0f\n",nao_infectados);
            fprintf(relatorio,"Percentual de Infectados: %.2f%%\n",percentual_infectados);
            fprintf(relatorio,"Percentual de Não Infectados: %.2f%%\n",percentual_nao);
                       int fclose(relatorio);
            /*exibe o relatorio*/
            system("cls");
            printf("\n\t\t\t\t\t----------------------------");
            printf("\n\t\t\t\t\tPacientes: %.0f\n",total_pacientes);
            printf("\t\t\t\t\tInfectados: %.0f\n",infectados);
            printf("\t\t\t\t\tNão infectados: %.0f\n",nao_infectados);
            printf("\t\t\t\t\tPercentual de Infectados: %0.2f%%\n",percentual_infectados);
            printf("\t\t\t\t\tPercentual de Não Infectados: %0.2f%%\n",percentual_nao);
            printf("\n");
            printf("\t\t\t\t\t----------------------------");
            printf("\n\t\t\t\t\t");
            system("pause");
            system("cls");}
                       /*imprime em arquivo o relatorio*/
                    /*calcula os dados das variaveis e percentuais*/
            /*exibe o relatorio*/
            modulo_paciente();
            break;
        /*caso digite 3, agradece e fecha*/
        case 3:
            opcao=0;
            login_coleta[0]='\0';
            senha_coleta[0]='\0';
            fflush(stdin);
            printf("\t\t\t\t\t");
            system("pause");
            system("cls");
            logar();
            break;
        case 4:
            printf("\t\t\t\t\tVolte sempre %s\n",login_coleta);
            printf("\t\t\t\t\t");
            system("pause");
            exit(1);
            break;
        /*caso digite uma opção inválida*/
        default:
            printf("\t\t\t\t\tOpção inválida!\n");
            printf("\t\t\t\t\t");
            system("pause");
            system("cls");
        }
    }
    while(opcao>4);
}
void valida_cpf(){
    char c;
    int i;
    i=0;
    do
    {
        c=getch();
        if(isdigit(c)!=0)
        {
            cpf[i]=c;
            i++;
            printf("%c",c);

        }
        else if(c==8&&i){
            cpf[i]='\0';
            i--;
            printf("\b \b");
        }
    }while(c!=13);
    cpf[i]='\0';

}
void valida_numero(char * numero){
    char c;
    int i;
    i=0;
    do
    {
        c=getch();
        if(isdigit(c)!=0)
        {
            numero[i]=c;
            i++;
            printf("%c",c);

        }
        else if(c==8&&i){
            numero[i]='\0';
            i--;
            printf("\b \b");
        }
    }while(c!=13);
    numero[i]='\0';}
void valida_letra(char * letras){
    char c;
    int i;
    i=0;
    do
    {
        c=getch();
        if((c>=97 && c<=122) || (c>=65 && c<=90) || (c==32) || (c>=128 && c<=154)||(c>=160 && c<=165))
        {
            letras[i]=c;
            i++;
            printf("%c",c);

        }
        else if(c==8&&i){
            letras[i]='\0';
            i--;
            printf("\b \b");
        }
    }while(c!=13);
    letras[i]='\0';
}






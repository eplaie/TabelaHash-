int main(){
    int tamanho, i, k;
    char resp;
    no_hash *T;

    
    tb2 * raiz = cria_tb2();

    printf("\nEntre com o tamanho da tabela: ");
    scanf("%d", &tamanho);
    T = Cria_Hash(tamanho);
    getchar();

    while(1){
        printf("\n*********MENU*********");
        printf("\nInserir (i) \nBuscar (b) \nRemover (r) \nImprimir Colisoes (p)");
        printf("\nImprimir Tabela (t)\nSair (s)\n");
        printf("\n**********************\nOpcao: ");
        resp = getchar();
        getchar();

        switch(resp){
            case 'i':
                system("cls"); //limpa a tela
                printf("\nEntre com o numero a ser inserido na tabela: ");
                scanf("%d", &k);

                Insere_Hash(T, tamanho, k);
                if(flag == 1){
                    printf("Inserindo na tabela\n");

                    if(insere_tb2(raiz, k))
                        printf("%d inserido com sucesso!\n", k);
                    else
                        printf("%d nao foi inserido!\n", k);
                }

                break;
            case 'b':
                system("cls"); //limpa a tela
                printf("\nEntre com o numero a ser buscado na tabela: ");
                scanf("%d", &k);
                i = Busca_Hash(T, tamanho, k, 0);
                if(i == -1)
                    printf("\nNumero nao encontrado!\n");
                else
                    printf("\nNumero encontrado!\n");
                break;
            case 'r':
                system("cls"); //limpa a tela
                printf("\nEntre com o numero a ser removido da tabela: ");
                scanf("%d", &k);
                i = Remove_Hash(T, tamanho, k);
                if(i == -1)
                    printf("\n %d nao encontrado!\n", k);
                else
                    printf("\n %d removido com sucesso!\n", k);
                break;
            case 'p':
                preOrdem_tb2(raiz, 0);
                break;
            case 't':
                imprimeHash(T, tamanho);
                break;
            case 's':
                libera_tb2(raiz);
                exit(0);
                break;
            default:
                printf("\nOpcao invalida! Tente de novo\n");
                break;
      }
      getchar();
   }

   return 0;
}


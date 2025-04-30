//Esse codigo tem como objetivo encontrar números primos entre dois números escolhidos pelo usuario
//O usuario escolhe o primeiro número e o segundo numero
//teste github
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

bool ehprimo(int n) // Função que verifica se um número é primo
{
    if (n <= 1) // Números menores ou iguais a 1 não são primos
        return false;
    for (int i = 2; i * i <= n; i++) // Verifica se o número é divisível por algum número entre 2 e a raiz quadrada de n
    {
        if (n % i == 0) // Se for divisível, não é primo
            return false;
    }
    return true; // Se não for divisível por nenhum número, é primo
}
int main()
{
    int n1, n2, i, primo;
    setlocale(LC_ALL, "Portuguese");
    //Definindo o locale para português para exibir mensagens corretamente
    
    do{
    //Solicita ao usuario os numeros 
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
            printf("Os numeros primos entre %d e %d são:\n", n1, n2);
            
    // Verifica se o primeiro número é maior que o segundo        
    if(n1>n2){
    printf("O segundo número deve ser maior que o primeiro número.\n");
    }
    else{
    for(i = n1; i <= n2; i++)
    {
        primo= ehprimo(i); // Chama a função primo para verificar se o número é primo
        
        if(primo == true)
            printf("%d ", i); // Imprime o número se for primo
    }
    //Mensagem final
    printf("\n");
    printf("Pressione qualquer tecla para sair...\n");
    }
 }while(n1>n2); // Repete o loop até que o primeiro número seja menor que o segundo
    return 0;
}
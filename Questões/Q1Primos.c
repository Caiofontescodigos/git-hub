//Esse codigo tem como objetivo encontrar n�meros primos entre dois n�meros escolhidos pelo usuario
//O usuario escolhe o primeiro n�mero e o segundo numero
//teste github
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

bool ehprimo(int n) // Fun��o que verifica se um n�mero � primo
{
    if (n <= 1) // N�meros menores ou iguais a 1 n�o s�o primos
        return false;
    for (int i = 2; i * i <= n; i++) // Verifica se o n�mero � divis�vel por algum n�mero entre 2 e a raiz quadrada de n
    {
        if (n % i == 0) // Se for divis�vel, n�o � primo
            return false;
    }
    return true; // Se n�o for divis�vel por nenhum n�mero, � primo
}
int main()
{
    int n1, n2, i, primo;
    setlocale(LC_ALL, "Portuguese");
    //Definindo o locale para portugu�s para exibir mensagens corretamente
    
    do{
    //Solicita ao usuario os numeros 
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &n2);
            printf("Os numeros primos entre %d e %d s�o:\n", n1, n2);
            
    // Verifica se o primeiro n�mero � maior que o segundo        
    if(n1>n2){
    printf("O segundo n�mero deve ser maior que o primeiro n�mero.\n");
    }
    else{
    for(i = n1; i <= n2; i++)
    {
        primo= ehprimo(i); // Chama a fun��o primo para verificar se o n�mero � primo
        
        if(primo == true)
            printf("%d ", i); // Imprime o n�mero se for primo
    }
    //Mensagem final
    printf("\n");
    printf("Pressione qualquer tecla para sair...\n");
    }
 }while(n1>n2); // Repete o loop at� que o primeiro n�mero seja menor que o segundo
    return 0;
}
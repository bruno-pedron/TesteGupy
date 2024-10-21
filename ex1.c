#include <stdio.h>

int fibonacci(int n){
    int a = 0, b = 1, next;

    // Verifica se o número é 0 ou 1, que fazem parte da sequência.
    if (n == 0 || n == 1) {
        return 1;
    }

    // Gera os próximos números da sequência e verifica se encontra o número n.
    while (b <= n) {
        next = a + b;
        a = b;
        b = next;

        if (b == n) {
            return 1; // O número pertence à sequência.
        }
    }

    return 0; // O número não pertence à sequência.
}

int main(void)
{
    int a;
    printf("Digite um numero:");
    scanf("%d",&a); // identifica o numeor digitado e o atribui a variavel "a"

    if (fibonacci(a)) // caso a pertencer a sequencia
    {
        printf("pertence a sequencia");
    }
    else{ // caso contrario
       printf("nao pertence a sequencia"); 
    } 

    return 0;
}



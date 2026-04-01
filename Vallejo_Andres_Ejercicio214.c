#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n , V[100];
    printf("Ingrese la cantidad de números que desea ingresar ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Ingrese un número");
        scanf("%d", &V[i]);
    }
    printf("Valores del vector\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\n", V[i]);
    }
    
    return 0;
}

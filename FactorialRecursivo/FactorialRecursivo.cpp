/*
 * Escribe una funci�n que calcule y retorne el factorial de un n�mero dado
 * de forma recursiva.
 */

#include <iostream>
//La recursividad consiste en llamar a la misma funci�n dentro de la misma

int FactorialRecursive(int n) //Defino los valores de la funci�n
{
    if (n == 1)//Caso Base
    {
        return 1;
    }
    else { //Caso General
        return n * FactorialRecursive(n - 1);
    }
}

int main()
{
    int n;
    std::cout << "Ingresa un n�mero:" << std::endl;
    std::cin >> n;

    std::cout << "El factorial de " << n << " es igual a: " << FactorialRecursive(n);

}

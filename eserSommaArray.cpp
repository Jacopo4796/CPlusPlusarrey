/* Scivi una funzione che prenda in input un array 
di interi e la sua lunghezza e restituisca la somma 
di tutti gli elementi dell'array. */

#include <iostream>
#include <array>
using namespace std;

int sumArray(int arrayNumbers[], int arrayLength) // Funzione ch mi calcola la somma degli elementi dell'array
{
    int risultato = 0;
    for( int i = 0; i < arrayLength; i++) // Mi scorro la lunghezza dell'array
    {
        risultato += arrayNumbers[i];
    }
    return risultato;
}

int main()
{
    int arrayNumbers[] = {2, 4, 6, 8, 10}; // Creo l'array
    int arrayLength = sizeof(arrayNumbers) / sizeof(arrayNumbers[0]);
    cout << "La somma dei numeri presenti nell'array è " << sumArray(arrayNumbers, arrayLength) << ". \n";
}   
/* Scivi una funzione che prenda in input un array 
di interi e la sua lunghezza e restituisca l'elemento
più grande dell'array. */
#include <iostream>
#include <array>
using namespace std;

int arrayMax(int arrayNumbers[], int arrayLength)
{
    int risultato = arrayNumbers[0]; // Il risultato lo imposto uguale array[0]
    for( int i = 0; i < arrayLength; i++) // Mi scorro la lunghezza dell'array
    {
        if(arrayNumbers[i] > risultato) // Se l'array è maggiore di risultato
        {
            risultato = arrayNumbers[i]; // Imposto come risultato l'array[i]
        }
    }
    return risultato;
}

int main()
{
    int arrayNumbers[] = {2, 4, 6, 8, 10}; // Creo l'array
    int arrayLength = sizeof(arrayNumbers) / sizeof(arrayNumbers[0]);
    cout << "L'elemento più grande presente nell'array è " << arrayMax(arrayNumbers, arrayLength) << ". \n";
}
/* Scrivi una funzione che prenda in input un array
di interi e la sua lunghezza e restituisca l'indice
dell'elemento che ha il valore massimo all'interno
dell'array. Se ci sono più elementi con lo stesso
valore massimo, la funzione restituisce il primo
di questi. */
#include <iostream>
#include <array>
using namespace std;

int indiceArrayMax(int arrayNumbers[], int arrayLength)
{
    int indice = 0;
    int risultato = arrayNumbers[0];      // Il risultato lo imposto uguale array[0]
    for (int i = 1; i < arrayLength; i++) // Mi scorro la lunghezza dell'array
    {
        if (arrayNumbers[i] > risultato) // Se l'array è maggiore di risultato
        {
            risultato = arrayNumbers[i]; // Imposto come risultato l'array[i]
            indice = i; // Imposto l'indice a i
        }
    }
    return indice;
}

int main()
{
    int lunghezza;
    cout << "Quanto deve essere lungo l'array? \n";
    cin >> lunghezza;
    int arrayNumbers[lunghezza];
    cout << "Inserisci gli elementi dell'array: \n";
    for(int i = 0; i < lunghezza; i++)
    {
        cin >> arrayNumbers[i];
    }
    cout << "L'indice del valore massimo dell'elemento dell'array è " << indiceArrayMax(arrayNumbers, lunghezza) << ". \n";
}
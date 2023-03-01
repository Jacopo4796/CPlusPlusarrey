/* Scrivi una funzione che prenda in input un array
di interi e la sua lunghezza e restituisca il numero
di sequenza di interi crescenti all'interno dell'array.
input {1,2,3,5,4,7}
output {1,2,3} {4,7}.*/
#include <iostream>
#include <array>
using namespace std;

int arraySequenze(int arrayNumbers[], int lunghezza)
{
    int sequenze = 0;
    for (int i = 0; i < lunghezza; i++) // Mi scorro la lunghezza dell'array
    {
        if (arrayNumbers[i] < arrayNumbers[i + 1] && i < lunghezza -1)
        {
            while (arrayNumbers[i] < arrayNumbers[i + 1])
            {
                i++; // Incrementa i finchè [i] < [i +1]
            }
            sequenze++; // Incrementa il contatore sequenze
        }
    }
    return sequenze;
}

int main()
{
    int lunghezza;
    cout << "Quanto deve essere lungo l'array? \n";
    cin >> lunghezza;
    int arrayNumbers[lunghezza];
    cout << "Inserisci gli elementi dell'array: \n";
    for (int i = 0; i < lunghezza; i++)
    {
        cin >> arrayNumbers[i];
    }
    cout << "Nell'array sono presenti " << arraySequenze(arrayNumbers, lunghezza) << " sequenze. \n";
}
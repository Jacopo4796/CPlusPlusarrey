/* Scrivi una funzione che prenda in input un array
di interi e la sua lunghezza e restituisca il numero
di sequenza di interi crescenti all'interno dell'array.
input {1,2,3,5,4,7}
output {1,2,3} {4,7}.*/
#include <iostream>
#include <array>
using namespace std;

int arraySequenze(int arrayNum[], int lunghezza)
{
    int sequenze = 0;
    for (int i = 0; i < lunghezza; i++) // Mi scorro la lunghezza dell'array
    {
        while(arrayNum[i] < arrayNum[i + 1]) // Incrementa i finchè [i] < [i +1]
        {
            i++;
        }
        sequenze++; // Incrementa il contatore sequenze
    }
    return sequenze;
}

int main()
{
    int arrayNum[7] = {5, 2, 3, 5, 4, 7, 6};
    int lunghezza = sizeof(arrayNum) / sizeof(arrayNum[0]);
    cout << "Nell'array sono presenti " << arraySequenze(arrayNum, lunghezza) << " sequenze. \n";
}
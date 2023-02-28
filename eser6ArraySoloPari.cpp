/* Scrivi nel main un algoritmo che su un array,
calcola e restituisce un nuovo array che contenga 
solo gli elementi dell'array di input che sono pari.*/
#include <iostream>
#include <array>
using namespace std;

int numPari(int arrayNumbers[], int arrayLength)
{
    int contaPari = 0;
    for(int i = 0; i < arrayLength; i++) // Mi scorro la lunghezza dell'array
    {
        if(arrayNumbers[i] % 2 == 0)
        {
            contaPari++;
        }
    }
    return contaPari;
}

 int main()
 {
    int arrayNumbers[5] = {1, 2, 3, 4, 5};
    int arrayLength = sizeof(arrayNumbers) / sizeof(arrayNumbers[0]);
 }
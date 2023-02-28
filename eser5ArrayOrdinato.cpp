/* Scrivi una funzione che prenda in input un array
di interi e la sua lunghezza e restituisca true se 
l'array è ordinato in ordine crescente e false 
altrimenti. */
#include <iostream>
#include <array>
using namespace std;

bool arrayOrdine(int arrayNumbers[], int arrayLength)
{
    bool ordine = true; 
    for(int i = 0; i < arrayLength; i++) // Mi scorro l'array
    {
        if(arrayNumbers[i] > arrayNumbers[i +1]) // Comparo l'array[i] con il successivo(array[i +1])
        {
            return true; 
        }
        else
        {
            return false;
            break;
        }
    }
    return ordine;
}

int main ()
{
    int arrayNumbers[5] = {1, 2, 3, 4, 5};
    int arrayLength = sizeof(arrayNumbers) / sizeof(arrayNumbers[0]);
    if(arrayOrdine(arrayNumbers, arrayLength) == false)
    {
        cout << "L'array è in ordine crescente. \n";
    }
    else
    {
        cout << "L'array è in ordine decrescente. \n";
    }
}
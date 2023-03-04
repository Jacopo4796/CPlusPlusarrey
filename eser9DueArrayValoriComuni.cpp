/* Scrivi una funzione che prenda in input due array
di interi e le loro lunghezze e restituisca il numero
di elementi comuni ai due array.
input {1,2,3,4} {2,4,6,8}
output 2 {2,4}*/
#include <iostream>
#include <array>
using namespace std;

int datiArrayUguali(int arrayNumbers[], int arrayNumbers2[], int lunghezza, int lunghezza2)
{
    int valoriUguali = 0;
    for (int i = 0; i < lunghezza; i++) // Scorro il primo array
    {
        for(int j = 0; j < lunghezza2; j++) // Scorro il secondo array
        {
            if(arrayNumbers[i] == arrayNumbers2[j]) // Se la i è uguale alla j
            {
                valoriUguali++; // Incrementa valoriUguali
            }
        }
    } 
    return valoriUguali;
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

    int lunghezza2;
    cout << "Quanto deve essere lungo l'array2? \n";
    cin >> lunghezza2;
    int arrayNumbers2[lunghezza2];
    cout << "Inserisci gli elementi dell'array2: \n";
    for(int i = 0; i < lunghezza2; i++)
    {
        cin >> arrayNumbers2[i];
    }

    cout << "Gli elementi uguali dei due array sono: " << datiArrayUguali(arrayNumbers, arrayNumbers2, lunghezza, lunghezza2);
}
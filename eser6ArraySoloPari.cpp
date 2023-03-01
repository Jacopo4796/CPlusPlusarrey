/* Scrivi nel main un algoritmo che su un array,
calcola e restituisce un nuovo array che contenga 
solo gli elementi dell'array di input che sono pari.*/
#include <iostream>
#include <array>
using namespace std;

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

    int contaPari = 0;
    for(int i = 0; i < lunghezza; i++) // Mi scorro la lunghezza dell'array
    {
        if(arrayNumbers[i] % 2 == 0)
        {
            contaPari++; // Mi conto i pari
        }
    }

    int pari[contaPari]; // Mi creo un secondo array
    int indice = 0;
    for(int i = 0; i < lunghezza; i++) // Mi scorro ancora la lunghezza dell'array
    {
        if(arrayNumbers[i] % 2 == 0)
        {
            pari[indice] = arrayNumbers[i]; // Qhando trovo il pari lo metto nel secondo array
            indice++;
        }
    }

    for(int i = 0; i < contaPari; i++) // Mi scorro la lunghezza del NUOVO array
    {
        cout << pari[i] << " - ";
    }
 }
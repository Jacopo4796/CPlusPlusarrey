/* Scrivi due array di due dimensioni diverse,
riempili con numeri consecutivi
Crea e stampa a schermo i due array concatenati
array1 [0,1,2,3,4]
array2 [0,1,2]
arrayRisultato[0,1,2,3,4,0,1,2]*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int lunghezza1;
    cout << "Quanto deve essere lungo l'array? \n";
    cin >> lunghezza1;
    int arrayNumbers[lunghezza1];
    cout << "Inserisci gli elementi dell'array: \n";
    for (int i = 0; i < lunghezza1; i++)
    {
        cin >> arrayNumbers[i];
    }

    int lunghezza2;
    cout << "Quanto deve essere lungo l'array2? \n";
    cin >> lunghezza2;
    int arrayNumbers2[lunghezza2];
    cout << "Inserisci gli elementi dell'array2: \n";
    for (int i = 0; i < lunghezza2; i++)
    {
        cin >> arrayNumbers2[i];
    }

    int lung = lunghezza1 + lunghezza2; // Creo la variabile lung 
    int arrayRisultato[lung]; // Mi creo un nuovo array lungo lunghezza1 e lunghezza2

    for (int i = 0; i < lunghezza1; i++) // Scorro il primo array
    {
        arrayRisultato[i] = arrayNumbers[i]; // Dentro arrayRisultato metto cosa c'è dentro arrayNumbers
    }
    for (int i = 0; i < lunghezza2; i++) // Scorro il secondo array
    {
        arrayRisultato[lunghezza1] = arrayNumbers2[i]; // Dentro arrayRisultato metto cosa c'è dentro arrayNumbers2
    }
    cout << "La concarenazione dei due array è: \n";
    for (int i = 0; i < lung; i++) // Scorro la lunghezza di arrayRisultato
    {
        cout << arrayRisultato[i] << " "; // Stampo la concatenazione dei due array
    }
}
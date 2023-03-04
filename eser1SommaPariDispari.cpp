/* Scrivi un programma che, dato un array di interi, calcoli
la somma degli elemnti pari e degli elementi dispari in due cicli
separati. Il programma deve poi stampare a schermo le somme 
ottenute. 
es. input [3, 5, 2, 8, 9, 4]
    output: somma degli elemnti pari: 14
            somma degli elemnti dispari: 17*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int lunghezza;
    cout << "Quanto deve essere lungo l'array? \n";
    cin >> lunghezza;
    int array[lunghezza];
    cout << "Inserisci gli elementi dell'array: \n";

    int somPari = 0;
    int somDispari = 0;
    
    for(int i = 0; i < lunghezza; i++) 
    {
        if(array[i] % 2 == 0)
        {
            somPari += array[i]; // Mi somma i numeri pari
        }
    }
    for(int i = 0; i < lunghezza; i++) 
    {
        if(array[i] % 2 != 0)
        {
            somDispari += array[i]; // Mi somma i numeri dispari   
        }
    }
    cout << "La somma dei numeri pari è: " << somPari << ". \n";
    cout << "La somma dei numeri dispari è: " << somDispari << ". \n";      
}


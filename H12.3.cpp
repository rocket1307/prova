/* H12.3
Codificare un programma in linguaggio C++ che chieda all’utente 
di inserire da tastiera il proprio nome e cognome. 
Successivamente il programma dovrà stampare le seguenti informazioni:
 1. il primo e l’ultimo carattere del nome, il secondo ed il terzo carattere del cognome.
 2. una stringa formata da tutti i caratteri che sono presenti sia nel nome che nel cognome. 
    ES: se nome=”Mario”, cognome= ”Rossi” lo output sarà ”io”. 
 3. le segg. ulteriori informazioni:
    a) un messaggio che comunica all’utente se la prima lettera del nome 
       è uguale all’ultima lettera del cognome.
    b) un messaggio che comunica all’utente se il numero di caratteri del nome
       è uguale al numero di lettere del cognome.
    c) il numero di consonanti del nome e del cognome.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome, cognome, valori_comuni, nome_cognome;
    int conta=0;

    cout << "Inserisci il tuo nome : ";
    cin >> nome;
    cout << "Inserisci il tuo cognome : ";
    cin >> cognome;

    // 1)

    cout << nome.substr(0,1) << " " << nome.substr(nome.length()-1,1) << endl;
    cout << cognome.substr(1,1) << " " << cognome.substr(2,1) << endl;

    // 2)

    for(int i=0; i<nome.length(); i++) 
        for(int j=0; j<cognome.length(); j++)
            if(nome.substr(i,1) == cognome.substr(j,1))
                valori_comuni = valori_comuni + nome.substr(i,1);
    
  //  for(int z=0; z<valori_comuni.length(); z++)
  //    for(int k=0; k<valori_comuni.length(); k++)

    // 3)

        // a)
        if(nome.substr(0,1) == cognome.substr(cognome.length()-1,1))
            cout << "La prima lettera del nome è uguale all’ultima lettera del cognome !" << endl;
    
        // b)
        if(nome.length() == cognome.length())
            cout << "Il numero di caratteri del nome è uguale al numero di lettere del cognome !" << endl;

        // c)

        nome_cognome = nome + cognome;
        for(int i=0; i<nome_cognome.length(); i++)
            if(nome_cognome.substr(i,1) != "a" &&
               nome_cognome.substr(i,1) != "e" && 
               nome_cognome.substr(i,1) != "i" && 
               nome_cognome.substr(i,1) != "o" && 
               nome_cognome.substr(i,1) != "u" &&
               nome_cognome.substr(i,1) != "A" &&
               nome_cognome.substr(i,1) != "E" && 
               nome_cognome.substr(i,1) != "I" && 
               nome_cognome.substr(i,1) != "O" && 
               nome_cognome.substr(i,1) != "U" )
                
                conta++;

        cout << "Il numero di consonanti del nome e del cognome è : " << conta << endl;

    return 0;
}
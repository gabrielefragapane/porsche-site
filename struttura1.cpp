#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct persona {
    string nome;
    string cognome;
    int eta;
    float media_voti;
};

int main() {
    persona alunni[3]; // punto e virgola corretto

    for (int i = 0; i < 3; i++) {
        cout << "Inserisci il cognome: ";
        cin >> alunni[i].cognome;
        cout << "Inserisci il nome: ";
        cin >> alunni[i].nome;
        cout << "Inserisci l'età: ";
        cin >> alunni[i].eta;
        cout << "Inserisci la media voti: ";
        cin >> alunni[i].media_voti;
    }

    cout << endl << setw(10) << "COGNOME" << setw(10) << "NOME" 
         << setw(6) << "ETA" << setw(8) << "MEDIA" << endl;

    for (int i = 0; i < 3; i++) {
        cout << setw(10) << alunni[i].cognome
             << setw(10) << alunni[i].nome
             << setw(6) << alunni[i].eta
             << setw(8) << fixed << setprecision(2) << alunni[i].media_voti << endl;
    }

    return 0;
}

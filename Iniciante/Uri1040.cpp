#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float nota1, nota2 , nota3, nota4, media;
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    media = ((nota1*2)+(nota2*3)+(nota3*4)+(nota4*1))/10;

    cout << setprecision (1) << fixed << "Media: " << media << endl;
    if (media >= 7) {
        cout << "Aluno aprovado." << endl;
    } else if ( media >= 5) {
        cout << "Aluno em exame." << endl;
        double notaExame;
        cin >> notaExame;
        cout << "Nota do exame: " << notaExame << endl;
        if (notaExame >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        media = (media + notaExame)/2;
        cout << "Media final: " << media << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
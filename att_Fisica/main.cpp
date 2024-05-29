#include <iostream>

using namespace std;

int main() {
    int opcao;
    float temperatura;

    cout << "\n\nescolha o tipo de temperatura" << endl;
    cout << "\nGraus Celsius - 1";
    cout << "\nGraus Fahrenheit - 2";
    cout << "\nGraus Kelvin - 3" << endl <<endl;
    cin >> opcao;

    for(int i = 0; i < 3; i++) {
        if (opcao == 1) {
            cout << "\n\nEscolha a temperatura: ";
            cin >> temperatura;
            cout << "\nGraus Celsius: " << temperatura;
            cout << "\nGraus Celsius equivale a: " << ((temperatura * 9 / 5) + 32) << " em graus Fahrenheit";
            cout << "\nGraus Celsius equivale a: " << (temperatura + 273.15) << " em graus Kelvin";


        } else if (opcao == 2) {

            cout << "\n\nEscolha a temperatura: ";
            cin >> temperatura;
            cout << "\nGraus Fahrenheit: " << temperatura;
            cout << "\nGraus Fahrenheit equivale a: " << ((temperatura - 32) * 5 / 9) << " em graus Celsius";
            cout << "\nGraus Fahrenheit equivale a: " << ((temperatura - 32) * 5 / 9 + 273.15) << " em graus Kelvin";

        } else if (opcao == 3) {

            cout << "\n\nEscolha a temperatura: ";
            cin >> temperatura;
            cout << "\nGraus Kelvin: " << temperatura;
            cout << "\n\nGraus Kelvin equivale a: " << (temperatura - 273.15) << " em graus Celsius";
            cout << "\n\nGraus Kelvin equivale a: " << ((temperatura - 273.15) * 9 / 5 + 32) << " em graus Fahrenheit";

        } else {

            cout << "\n\nOpcao invalida. Tente novamente." << endl;
        }
    }
    return 0;
}

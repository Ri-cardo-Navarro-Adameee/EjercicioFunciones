#include <iostream>
using namespace std;

float areaCuadrado(float lado1, float lado2)
{
    float resultado = 0;
    resultado = lado1 * lado2;
    return resultado;
}

float volumenCilindro(float radio, float altura)
{
    float resultado2 = 0;
    resultado2 = ((radio * radio) * altura * 3.1415);
    return resultado2;
}

float volumenEsfera(float radio)
{
    float resultado = 0;
    resultado = ((radio * radio * radio) * 3 / 4 * 3.1415);
    return resultado;
}

int main()
{
    int opcion = 0, resultado1;
    float Area1 = 0, lado = 0, radio = 0, altura = 0, resultado2 = 0, resultado = 0;
    cout << "Elija 1) para calcular el area de uncuadrado" << endl;
    cout << "Elija 2) para calcular el volumen de un cilindro" << endl;
    cout << "Elija 3) para calcular el volumen de unqa esfera" << endl;
    cout << "Elija una opcion" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Ingrese el lado del cuadrado" << endl;
        cin >> lado;
        resultado1 = areaCuadrado(lado, lado);
        cout << "El area de su cuadraro es: " << resultado1 << endl;
        break;

    case 2:
        cout << "Ingrese el radio: " << endl;
        cin >> radio;
        cout << "Ingrese la altura" << endl;
        cin >> altura;
        resultado2 = volumenCilindro(radio, altura);
        cout << "El volumen de su cilindrio es: " << resultado2 << endl;
        break;

    case 3:
        cout << "Ingrese el radio: " << endl;
        cin >> radio;
        resultado = volumenEsfera(radio);
        cout << "El volumen de su esfera es: " << resultado << endl;
        break;
    default:
        cout << "Opcion invalida" << endl;
        break;
    }

    return 0;
}
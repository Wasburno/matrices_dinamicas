#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Variables para asignar el valor de las filas y las columnas
    int enter_1,enter_2,enter_3,enter_4;

    //Declaramos la matriz dinamica puntero de punteros
    int** matrix_1;
    int** matrix_2;
    int** matrix_3;



    //Pedimos y guardamos el numero de filas de la primera matriz
    cout << "Cuantas filas tiene la primera matriz: " << endl;
    cin >> enter_1;
    
    //Asignamos el valor al puntero asignado para las filas
    matrix_1 = new int* [enter_1];

    //Pedimos y guardamos el numero de columnas para la primera matriz
    cout << "Cuantas columnas tedra la primera matriz: " << endl;
    cin >> enter_2;

    //Asignamos el valor al puntero que asignado para las columnas
    for (int i = 0; i < enter_1; i++)
    {
        matrix_1[i] = new int[enter_2];
    }


    //Rellenamos la primera matriz con sus respectivos datos
    cout << "Ingrese los datos que contiene la matriz: " << endl;

    for (int i = 0; i < enter_1; i++)
    {
        for (int j = 0; j < enter_2; j++)
        {
            cout << "Digite el indice [" << i << "] [" << j << "] de la primera matriz:";
            cin >> *(*(matrix_1 + i) + j);
        }
    }


    //Pedimos y guardamos el numero de filas de la segunda matriz
    cout << "Cuantas filas tiene la segunda matriz: " << endl;
    cin >> enter_3;

    if (enter_3 != enter_2) {
        return 0;
    }

    //Asignamos el valor al puntero asignado para las filas
    matrix_2 = new int* [enter_3];

    //Pedimos y guardamos el numero de columnas para la segunda matriz
    cout << "Cuantas columnas tedra la segunda matriz: " << endl;
    cin >> enter_4;

    //Asignamos el valor al puntero que asignado para las columnas
    for (int i = 0; i < enter_3; i++)
    {
        matrix_2[i] = new int[enter_4];
    }

    //Rellenamos la segunda matriz con sus respectivos datos
    cout << "Ingrese los datos que contiene la matriz: " << endl;

    for (int i = 0; i < enter_3; i++)
    {
        for (int j = 0; j < enter_4; j++)
        {
            cout << "Digite el indice [" << i << "] [" << j << "] de la segunda matriz:";
            cin >> *(*(matrix_2 + i) + j);
        }
    }


    //Imprimiendo valores de la segunda matriz                  matrix_3[i][j] += matrix_1[i][x] * matrix_2[x][j];




    /*
    //Estableciendo tamanio de la tercera matriz
    matrix_3 = new int* [enter_1];

    for (int i = 0; i < enter_1; i++)
    {
        matrix_1[i] = new int[enter_4];
    }

    
    for (int i = 0; i < enter_1; ++i)
    {
        for (int j = 0; j < enter_4; ++j)
        {
            for (int x = 0; x < enter_2; x++)
            {
                matrix_3[i][j] += matrix_1[i][x] * matrix_2[x][j];
            }
        }
    }
    */


    //Liberando la memoria ocupada por la primera matriz
    for (int i = 0; i < enter_1; i++)
    {
        delete[] matrix_1[i];
    }

    //Liberando la memoria ocupada por la segunda matriz
    for (int i = 0; i < enter_3; i++)
    {
        delete[] matrix_2[i];
    }
}


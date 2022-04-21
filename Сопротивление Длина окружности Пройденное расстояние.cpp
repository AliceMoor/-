#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    //system("chcp 65001"); для Clion

    int dz=0;
    while (dz<4)
    {
    cout << endl;
    cout << "Задание 1." << endl;
    cout << "Заданы три сопротивления : R1, R2, R3. Вычислить значение сопротивления R0 по формуле: R0=1/R1+1/R2+1/R3" << endl;
    cout << endl;
    cout << "Задание 2." << endl;
    cout << "По заданной длине окружности найти площадь круга по формуле S=pi*R2, радиус вычислить из формулы длины окружности L=2*pi*R" << endl;
    cout << endl;
    cout << "Задание 3." << endl;
    cout << "Вычислить пройденное расстояние при прямолинейном равноускореном движении по формуле S=v*t+(a*t2)/2," << endl;
    cout << "где v-скорость, t-время, а - ускорение" << endl;
    cout << endl;
    cout << "Введите № задания: "; cin >> dz;
    
    system("cls");

        switch (dz) {
        case 1: {
            double R1, R2, R3; // сопротивления

            cout << "Введите значение сопротивления R1 - "; cin >> R1;
            cout << "Введите значение сопротивления R2 - "; cin >> R2;
            cout << "Введите значение сопротивления R3 - "; cin >> R3;

            double R0 = 1 / R1 + 1 / R2 + 1 / R3;

            cout << "Значение сопротивления R0 = " << R0 << endl;
            system("pause");           
        }
              break;

        case 2: {
            double S; //площадь круга
            double R; // радиус круга
            double L; // длина окружности

            cout << "Введите длину окружности L - "; cin >> L;

            R = L / (M_PI * 2);
            S = M_PI * pow(R, 2.);

            cout << "Площадь круга S = " << S << endl;
            system("pause");  
        }
              break;

        case 3: {
            double S; //пройденное расстояние
            double v; //скорость
            double t; //время
            double t2; //время
            double a; //ускорение

            cout << "Введите скорость v - "; cin >> v;
            cout << "Введите время t - "; cin >> t;
            cout << "Введите время t2 - "; cin >> t2; 
            cout << "Введите ускорение a- "; cin >> a; 

            S = v * t + (a * t2) / 2;

            cout << "Пройденное растояние - " << S << endl;
            system("pause");
        }
              break;

        default: 
               break;
        }

        if (dz > 3) {
            cout << endl;
            cerr << "\t\t\t\tОшибка выбора меню";
            cout << endl;
        }

        system("pause");
        system("cls");
        
    }
    return 0;


}
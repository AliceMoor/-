#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    //system("chcp 65001"); ��� Clion

    int dz=0;
    while (dz<4)
    {
    cout << endl;
    cout << "������� 1." << endl;
    cout << "������ ��� ������������� : R1, R2, R3. ��������� �������� ������������� R0 �� �������: R0=1/R1+1/R2+1/R3" << endl;
    cout << endl;
    cout << "������� 2." << endl;
    cout << "�� �������� ����� ���������� ����� ������� ����� �� ������� S=pi*R2, ������ ��������� �� ������� ����� ���������� L=2*pi*R" << endl;
    cout << endl;
    cout << "������� 3." << endl;
    cout << "��������� ���������� ���������� ��� ������������� �������������� �������� �� ������� S=v*t+(a*t2)/2," << endl;
    cout << "��� v-��������, t-�����, � - ���������" << endl;
    cout << endl;
    cout << "������� � �������: "; cin >> dz;
    
    system("cls");

        switch (dz) {
        case 1: {
            double R1, R2, R3; // �������������

            cout << "������� �������� ������������� R1 - "; cin >> R1;
            cout << "������� �������� ������������� R2 - "; cin >> R2;
            cout << "������� �������� ������������� R3 - "; cin >> R3;

            double R0 = 1 / R1 + 1 / R2 + 1 / R3;

            cout << "�������� ������������� R0 = " << R0 << endl;
            system("pause");           
        }
              break;

        case 2: {
            double S; //������� �����
            double R; // ������ �����
            double L; // ����� ����������

            cout << "������� ����� ���������� L - "; cin >> L;

            R = L / (M_PI * 2);
            S = M_PI * pow(R, 2.);

            cout << "������� ����� S = " << S << endl;
            system("pause");  
        }
              break;

        case 3: {
            double S; //���������� ����������
            double v; //��������
            double t; //�����
            double t2; //�����
            double a; //���������

            cout << "������� �������� v - "; cin >> v;
            cout << "������� ����� t - "; cin >> t;
            cout << "������� ����� t2 - "; cin >> t2; 
            cout << "������� ��������� a- "; cin >> a; 

            S = v * t + (a * t2) / 2;

            cout << "���������� ��������� - " << S << endl;
            system("pause");
        }
              break;

        default: 
               break;
        }

        if (dz > 3) {
            cout << endl;
            cerr << "\t\t\t\t������ ������ ����";
            cout << endl;
        }

        system("pause");
        system("cls");
        
    }
    return 0;


}
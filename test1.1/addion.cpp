#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "������ ����, ��� ������������ ������� \"������\";" << endl;
    cout << "�� ������� ������ ��� ����� �������� ��������?" << endl;

    cout << "�������� �����:" << endl;
    cout << "��� �������� �������� ������� ������� \"1\";" << endl;
    cout << "��� ������ �������� ������� ������� \"2\"." << endl;

    int choice, frstDep, scndDep, ttlDep;

    cout << "�������� ������.." << endl;
    cin >> choice;

    if (choice == 1) {

        for (int i = 1; i <= 2; i++) {
            cout << "������� " << i << " ������ �����" << endl;
            cin >> frstDep;

            if (frstDep < 100) {
                cout << "�� �� ������ ������� ����� ����� ��� 100 ������" << endl;
                break;
            }
            cout << "�� ������ ����� � ������� " << frstDep << endl;
            cout << "�������� ������ �������." << endl;
        }
        ttlDep = frstDep + scndDep;
        cout << "����� ����� = " << ttlDep << endl;
    }
    else if (choice == 2) {
        for (int c = 1; c <= 2; c++) {
            cout << "������� " << c << " ������ �����" << endl;
            cin >> scndDep;

            if (scndDep < 100) {
                cout << "�� �� ������ ������� ����� ����� ��� 100 ������" << endl;
                break;
            }
            cout << "�� ������ ����� � ������� " << scndDep << endl;
            cout << "�������� ������ �������." << endl;
        }
        ttlDep = frstDep + scndDep;
        cout << "����� ����� = " << ttlDep << endl;
    
    }
    else {
        cout << " ���������� ��������� ������� ������ 1 ��� 2" << endl;
    }
	return 0;
}
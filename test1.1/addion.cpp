#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Добрый день, вас приветствует система \"ЯрБанк\";" << endl;
    cout << "Вы желаете внести или снять денежные средства?" << endl;

    cout << "Выберите режим:" << endl;
    cout << "Для внесения денежных средств нажмите \"1\";" << endl;
    cout << "Для снятия денежных средств нажмите \"2\"." << endl;

    int choice, frstDep, scndDep, ttlDep;

    cout << "Выберите услугу.." << endl;
    cin >> choice;

    if (choice == 1) {

        for (int i = 1; i <= 2; i++) {
            cout << "Внесите " << i << " Первый взнос" << endl;
            cin >> frstDep;

            if (frstDep < 100) {
                cout << "Вы не можете выбрать сумму менее чем 100 Рублей" << endl;
                break;
            }
            cout << "Вы внесли сумму в размере " << frstDep << endl;
            cout << "Операция прошла успешно." << endl;
        }
        ttlDep = frstDep + scndDep;
        cout << "Общая сумма = " << ttlDep << endl;
    }
    else if (choice == 2) {
        for (int c = 1; c <= 2; c++) {
            cout << "Внесите " << c << " Первый взнос" << endl;
            cin >> scndDep;

            if (scndDep < 100) {
                cout << "Вы не можете выбрать сумму менее чем 100 Рублей" << endl;
                break;
            }
            cout << "Вы внесли сумму в размере " << scndDep << endl;
            cout << "Операция прошла успешно." << endl;
        }
        ttlDep = frstDep + scndDep;
        cout << "Общая сумма = " << ttlDep << endl;
    
    }
    else {
        cout << " Попробуйте корректно выбрать услуги 1 или 2" << endl;
    }
	return 0;
}
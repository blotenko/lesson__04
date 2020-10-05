
#include <iostream>
using namespace std;
/*
 1. Даны 4 числа типа int. Сравнить их и вывести наименьшее на консоль.
 2. Вывести на консоль количество максимальных чисел среди этих четырех.
 3. Даны 5 чисел (тип int). Вывести вначале наименьшее,
    а затем наибольшее из данных чисел.
 4. Дано число месяца (тип int). Необходимо определить время года
     (зима, весна, лето, осень) и вывести на консоль.

 */


void task4(){
    int month = 12;
    int num;
    cout<<"Введите номер месяца : ";
    cin>>num;
    
    switch (num) {
        case 12: case 1: case 2: cout<<" зима "<<endl;
        break;
        case 3: case 4: case 5: cout<<" весна "<<endl;
        break;
        case 6: case 7: case 8: cout<< "лето "<<endl;
        break;
        case 9: case 10: case 11:cout<< " осень "<<endl;
        break;
            
    }
}


int main() {
    task4();
    return 0;
}





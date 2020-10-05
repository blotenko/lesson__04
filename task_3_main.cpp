
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



int findmax(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int max(int x, int y, int z, int j, int k){
    int max = findmax(x,findmax(y,findmax(z,findmax(j,k))));
    cout<<"Максимальное число "<<max<<endl;
                      return 0;
}

int findmin(int x,int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}
int min(int x, int y, int z, int j,int k){
    int min = findmin(x,findmin(y,findmin(z,findmin(j,k))));
    cout<<"Минимальное число "<<min<<endl;
                      return 0;
}

int main() {
    int a,b,c,d,f;
    cout<<"Введите первое число : ";
    cin>>a;
    cout<<"Введите второе число : ";
    cin>>b;
    cout<<"Введите третье число : ";
    cin>>c;
    cout<<"Введите четвертое число : ";
    cin>>d;
    cout<<"Введите пятое число : ";
    cin>>f;
    max(a,b,c,d,f);
    min(a,b,c,d,f);
    return 0;
}





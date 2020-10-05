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

int findmin(int x,int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}
int min(int x, int y, int z, int j){
    int min = findmin(x,findmin(y,findmin(z,j)));
    cout<<"Минимальное число "<<min<<endl;
                      return 0;
}

int findmax(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int max(int x, int y, int z, int j){
    int max = findmax(x,findmax(y,findmax(z,j)));
    if(x==y &&  y==z && z==x && x==j && j==x && y==j){
    cout<<"4 максимальных числа : "<<max<<endl;
    }
    else if (x==z && x==j && x!=y){
        cout<<"3 максимальных числа : "<<max<<endl;

    }
    else if (y==z && y==j &&  y!=x){
        cout<<"3 максимальных числа : "<<max<<endl;

    }
    else if (x==y && y==j && z!=x){
        cout<<"3 максимальных числа : "<<max<<endl;

    }
    else if (x==y && x==z && j!=x){
        cout<<"3 максимальных числа : "<<max<<endl;

    }else if (x==y && x!=z && x!=j){
        cout<<"2 максимальных числа : "<<max<<endl;

    }
    else if (x==j && x!=z && x!=y){
        cout<<"2 максимальных числа : "<<max<<endl;

    }
    else if (x==z && x!=y && x!=j){
        cout<<"2 максимальных числа : "<<max<<endl;

    }
    else if (y==j && x!=y && z!=y){
        cout<<"2 максимальных числа : "<<max<<endl;

    }
    else if (x==j && x!=z && x!=y){
        cout<<"2 максимальных числа : "<<max<<endl;

    }else if (y==z && x!=y && y!=j){
        cout<<"2 максимальных числа : "<<max<<endl;

    }else if (z==j && x!=z && z!=y){
        cout<<"2 максимальных числа : "<<max<<endl;

    }else{
        cout<<"1 максимальное число : "<<max<<endl;
    }
                      return 0;
}

int main() {
    int a,b,c,d;
    cout<<"Введите первое число : ";
    cin>>a;
    cout<<"Введите второе число : ";
    cin>>b;
    cout<<"Введите третье число : ";
    cin>>c;
    cout<<"Введите четвертое число : ";
    cin>>d;
    int numMax = min(a,b,c,d);
    int numMin = max(a,b,c,d);
    return 0;
}







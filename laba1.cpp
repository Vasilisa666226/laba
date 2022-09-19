
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
const float a = 1.2, b = 0.875;

//double x1, x2, y1, y2;
//cin >> x1 >> x2 >> y1 >> y2;
//cout << hypot(x1 - x2, y1 - y2);
//int a;
//a = 100 + rand() % 899;
//cout << a / 100 << "," << (a / 10) % 10 << "," << a % 10 << "\n";
//a = 100 + rand() % 899;
//cout << a / 100 << "," << (a / 10) % 10 << "," << a % 10 << "\n";
//a = 100 + rand() % 899;
//cout << a / 100 << "," << (a / 10) % 10 << "," << a % 10 << "\n";
//a = 100 + rand() % 899;
//cout << a / 100 << "," << (a / 10) % 10 << "," << a % 10 << "\n";
//a = 100 + rand() % 899;
//cout << a / 100 << "," << (a / 10) % 10 << "," << a % 10 << "\n";
//a = 100 + rand() % 899;
//cout << a / 100 << "," << (a / 10) % 10 << "," << a % 10 << "\n";
/*system("pause");
return 0
int a, b, c;
    cout << "Sam age";
    cin >> a;
    cout << "\n" << "Jack age";
    cin >> b;
    cout << "\n" << "Armstrong age";
    cin >> c;


    if (a > b and a > c)
        cout << "Sam older";
    if (a < b and b > c)
        cout << "Jack older";
    if (c > b and a < c)
        cout << "Armstrong older";
*/

int main()
{
    setlocale(LC_ALL, "RU");
    double x, y, z, m, n, p;
    cout << "Введите переменные:";
    cout << "\n" << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "\nПромежуточные переменные:";
    m = (a * sin(pow(x, 2)) + pow(x, b) + pow(b, 2.3));
    cout << "\nm = " << m;
    n = log10(pow(x, 2)) + atan(fabs(x / y));
    cout << "\nn = " << n << "\n";
    p = 150;
    z = (m / n) + p;
    cout << "\nРезультат с промежуточными переменными: " << "\nz = " << z << "\n\n";
    z = (a * sin(pow(x, 2)) + pow(x, b) + pow(b, 2.3)) / (log10(pow(x, 2)) + atan(fabs(x / y))) + 150;
    cout << "Результат с помощью одного выражения:" << "\nz = " << z << "\n";
    cout << "\nРезультат с помощью выражения в операторе вывода:\nz = " << (a * sin(pow(x, 2)) + pow(x, b) + pow(b, 2.3)) / (log10(pow(x, 2)) + atan(fabs(x / y))) + 150;
    printf("\n\nРезультат с помощью выражения- параметра функции\ printf:\nz = % 12lf", (a * sin(pow(x, 2)) + pow(x, b) + pow(b, 2.3)) / (log10(pow(x, 2)) + atan(fabs(x / y))) + 150);
    int i;
    cout << "\n\nВведите координаты точки\nx = "; 
    cin >> x; 
    cout << "y = ";
    cin >> y;
    int c;
    c = sqrt(45);
    cout << "\n\nЗначение:\n" << (((pow(x, 2) + pow(y, 2) <= pow(c, 2)) && (0 <= x <= 3 && 0 <= y <= 6) && (y <= x * 2))) || ((pow((x - 5), 2) + pow(y, 2) <= 4) && (y >= 0));
    (((pow(x, 2) + pow(y, 2) <= pow(c, 2)) && (0 <= x <= 3 && 0 <= y <= 6) && (y <= x * 2))) || ((pow((x - 5), 2) + pow(y, 2) <= 4) && (y >= 0)) ?
    cout << "- true": cout << "-false";
    printf("\n\nВведите координаты точки\nx = ");
    scanf_s(" %lf", &x);
    printf("y = ");
    scanf_s(" %lf", &y);
    i = (((pow(x, 2) + pow(y, 2) <= pow(c, 2)) && (0 <= x <= 3 && 0 <= y <= 6) && (y <= x * 2))) || ((pow((x - 5), 2) + pow(y, 2) <= 4) && (y >= 0));
    printf("\nЗначение выражения: %d", i); 
    cout << endl;
    system("pause");
    return 0;

}

    
    




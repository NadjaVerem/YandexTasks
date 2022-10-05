#include "Task_1_4.h"

#include "iostream"

Task_1_4::Task_1_4()
{

}
int Task_1_4::exercise_1_4_1()
{
    int a, b;
    std::cin >> a >> b;
    if (a > b) {
        std::cout << a;
    }
    else {
        std::cout << b;
    }

    return 0;
}

int Task_1_4::exercise_1_4_2()

{
    int a, b;
    std::cin >> a >> b;
    if (a > b) {
        std::cout << 1;
    }
    if (a < b) {
        std::cout << 2;
    }
    if (a == b) {
        std::cout << 0;
    }

    return 0;
}

int Task_1_4::exercise_1_4_4()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}

int Task_1_4::exercise_1_4_5()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == b and a == c and b == c) {
        std::cout << 3;
    }
    else if (a == b || b == c || a == c) {
        std::cout << 2;
    }
    else {
        std::cout << 0;
    }

    return 0;

}

int Task_1_4::exercise_1_4_6()
{
    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    if (a == c || b == d) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}



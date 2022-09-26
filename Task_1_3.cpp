#include "Task_1_3.h"

#include "iostream"

Task_1_3::Task_1_3()
{

}

int Task_1_3::exercise_1_3_3()
{
    int n;
    std::cin >> n;
    std::cout << n % 10;

    return 0;
}

int Task_1_3::exercise_1_3_4()
{
    int n;
    std::cout << "Vvedite chislo" << std::endl ;
    std::cin >> n;
    std::cout << n / 10;

    return 0;
}

int Task_1_3::exercise_1_3_5()
{
    int n;
    std::cout << "Vvedite chislo" << std::endl ;
    std::cin >> n;
    std::cout << n % 100 / 10;

    return 0;
}

int Task_1_3::exercise_1_3_6()
{
    int n, a;
    std::cin >> n;
    std::cout << "Vvedite chislo" << std::endl ;
     a =  (n / 100) + ((n / 10) % 10) + (n % 10);
    std::cout  << a;

    return 0;
}

int Task_1_3::exercise_1_3_7()
{
    int n;
    std::cout << "Vvedite chislo" << std::endl ;
    std::cin >> n;
    std::cout << (n / 2) * 2 + 2 ;

    return 0;
}






// Указатель this, ключевое слов explicit(явный), наследование
//this - указатель на класс

#include <iostream>
#include "Point.h"
#include <string>
#include "Tiger.h"

int main()
{
   /* char str[] = "abc";
    Point my_point(5, 10, str); //explicit мешает явному преобразованию

    std::cout << my_point.getX() << std::endl;
    my_point.move(3, 9).move(2, 10).move(1, 11);
    std::cout << my_point.getX() << std::endl;*/

    Tiger t(5, "yellow"); //frend строго не рекомендуется
    //std::cout << t << std::endl;
    std::cout << t.fight() << std::endl; // обращаемся к фукции а не к приватным данным через наследование





}


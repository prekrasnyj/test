#pragma once

namespace lab1 {


class Time
{
private:
    //Поля:
    int hours;      //часы
    int minutes;    //минуты
    int seconds;    //секунды
public:


    //Методы:
    // конструктор без аргументов
    Time();

    //Конструктор с 3 аргументами
    Time(int h1, int min1, int sec1);

    //Setters
    void setHours(int newHours);
    void setMinutes(int newMinutess);
    void setSeconds(int newSeconds);

    //Getters
    int getHours();
    int getMinutes();
    int getSeconds();

    //позволяет просмотреть поля объекта
    void showTime();

    //Сеттер всех параметров сразу
    void setTime(int newHours, int newMinutes, int newSeconds);

    // переводит время в секунды
    int timeToSeconds();
    // переводит время в минуты
    float timeToMinutes();
    // переводит время в часы
    float timeToHours();

    // добавляет addH-часов ко времени объекта, не выходя за рамки суток
    void addHours(int addH);
    // добавляет addH-минут ко времени объекта, не выходя за рамки суток
    void addMinutes(int addM);
    // добавляет addH-cекунд ко времени объекта, не выходя за рамки суток
    void addSeconds(int addS);
    
    //Складывает объекты времени
    Time plus(const Time& t2);
};

}
#pragma once

namespace lab1 {


class Time
{
private:
    //����:
    int hours;      //����
    int minutes;    //������
    int seconds;    //�������
public:


    //������:
    // ����������� ��� ����������
    Time();

    //����������� � 3 �����������
    Time(int h1, int min1, int sec1);

    //Setters
    void setHours(int newHours);
    void setMinutes(int newMinutess);
    void setSeconds(int newSeconds);

    //Getters
    int getHours();
    int getMinutes();
    int getSeconds();

    //��������� ����������� ���� �������
    void showTime();

    //������ ���� ���������� �����
    void setTime(int newHours, int newMinutes, int newSeconds);

    // ��������� ����� � �������
    int timeToSeconds();
    // ��������� ����� � ������
    float timeToMinutes();
    // ��������� ����� � ����
    float timeToHours();

    // ��������� addH-����� �� ������� �������, �� ������ �� ����� �����
    void addHours(int addH);
    // ��������� addH-����� �� ������� �������, �� ������ �� ����� �����
    void addMinutes(int addM);
    // ��������� addH-c����� �� ������� �������, �� ������ �� ����� �����
    void addSeconds(int addS);
    
    //���������� ������� �������
    Time plus(const Time& t2);
};

}
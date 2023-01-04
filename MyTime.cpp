#include <iostream>
#include "MyTime.h"

using namespace std;


namespace lab1 {
    Time::Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time::Time(int h1,int min1, int sec1)
    {
        setHours(h1);
        setMinutes(min1);
        setSeconds(sec1);
    }

    void Time::setHours(int newHours)
    {
        hours = newHours;
    }
    void Time::setMinutes(int newMinutes)
    {
        minutes = newMinutes;
    }
    void Time::setSeconds(int newSeconds)
    {
        seconds = newSeconds;
    }

    int Time::getHours()
    {
        return hours;
    }
    int Time::getMinutes()
    {
        return minutes;
    }
    int Time::getSeconds()
    {
        return seconds;
    }

    void Time::showTime()
    {
        cout << "Time - " << hours << "." << minutes << "." << seconds << endl;
    }

    void Time::setTime(int newHours, int newMinutes, int newSeconds)
    {
        hours = newHours;
        minutes = newMinutes;
        seconds = newSeconds;
    }

    int Time::timeToSeconds()
    {
        int tSeconds = hours * 60 * 60 + minutes * 60 + seconds;
        return tSeconds;
    }


    float Time::timeToMinutes()
    {
        float s = seconds;
        float tMinutes = hours * 60 + minutes + s / 60;
        return tMinutes;
    }


    float Time::timeToHours()
    {
        float s = seconds;
        float m = minutes;
        float tHours = hours + m / 60 + s / 60 / 60;
        return tHours;
    }

    void Time::addHours(int addH)
    {
        hours = (hours + addH) % 24;
    }

    void Time::addMinutes(int addM)
    {
        hours = (hours + addM / 60) % 24;
        minutes = (minutes + addM) % 60;
    }
    void Time::addSeconds(int addS)
    {
        hours = (hours + addS / 60 / 60) % 24;
        minutes = (minutes + addS / 60) % 60;
        seconds = (seconds + addS) % 60;
    }

    Time Time::plus(const Time &t2)
    {
        Time t3; 
        t3.seconds = (this->seconds + t2.seconds)%60;
        t3.minutes = (this->minutes+ (this->seconds + t2.seconds) / 60 + t2.minutes) % 60;
        t3.hours = (this->hours + ((this->minutes + t2.minutes) / 60) + t2.hours) % 24;
        // todo: ...

        return Time(t3.hours, t3.minutes, t3.seconds);
    }

}
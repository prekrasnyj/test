#include <iostream>
#include <cassert>
#include "MyTime.h"

using namespace std;


void testing()
{
	using namespace lab1;
	Time t = Time(1, 9, 9);
	assert(t.getHours()==1 && t.getMinutes() == 8 && t.getSeconds() == 9);

	Time t2 = Time(-1, 9, 9);
	assert(t2.getHours() == 0 && t2.getMinutes() == 8 && t2.getSeconds() == 9);

}
	

 int main()
{

	testing();

	 using namespace lab1;
	 //Динамический объект
	 Time* t5 = new Time(9, 9, 9);
	 t5->showTime();
	 

	 //Статический объект с общим сеттером
	 Time t1,t2;
	 t1.setTime(12, 30, 45);
	 t1.showTime();
	 t2.setTime(18, 45, 23);
	 t2.showTime();


	 Time tt;


	 tt = t1.plus(t2);
	 cout << endl;
	 tt.showTime();
	
	

	 cout << t1.timeToSeconds() << endl;
	 cout << t1.timeToMinutes() << endl;
	 cout << t1.timeToHours() << endl;

	 t1.addSeconds(3725);
	 t1.showTime();

	 t1.addMinutes(70);
	 t1.showTime();

	 t1.addHours(18);
	 t1.showTime();

	

	 // todo: new Time[N]
	 // todo: new Time*[N]

	 
	 

}
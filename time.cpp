#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int sec;
        int hh,mm,ss;
    public:
        void _time(void);
        void convert_seconds(void);
        void display(void);
};
 
void Time::_time(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours:";          
    cin >> hh;
    cout << "Minutes:";          
    cin >> mm;
    cout << "Seconds:";          
    cin >> ss;
}
void Time::convert_seconds(void)
{
    sec = hh*3600 + mm*60 + ss;
}
void Time::display(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"<< setw(2) << setfill('0') << mm << ":"<< setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << sec;
}
int main()
{
    Time t;
    t._time();
    t.convert_seconds();
    t.display();
    return 0;
}

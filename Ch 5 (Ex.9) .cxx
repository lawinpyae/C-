#include <iostream>
using namespace std;
struct Time
{
    int hours, minutes, seconds;
};
void swap(Time &, Time &);

int main()
{
    Time t1, t2;
    char dummychar;
    cout << "Enter first time ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;
    cout << "Enter Second time ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;
    swap(t1, t2);
    cout << "After swapping\n";
    cout << "First time" << t1.hours << dummychar << t1.minutes << dummychar << t1.seconds << endl;

    cout << "Second time" << t2.hours << dummychar << t2.minutes << dummychar << t2.seconds;

    return 0;
}
void swap(Time &a, Time &b)
{
    int temp;
    temp = a.hours;
    a.hours = b.hours;
    b.hours = temp;

    temp = a.minutes;
    a.minutes = b.minutes;
    b.minutes = temp;

    temp = a.seconds;
    a.seconds = b.seconds;
    b.seconds = temp;
}
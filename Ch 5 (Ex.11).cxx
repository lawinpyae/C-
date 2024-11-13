#include <iostream>
using namespace std;

struct sterling
{
    int pounds, shillings, pences;
};

sterling getData();
sterling compare(sterling, sterling);
void display(sterling);

int main()
{
    sterling s1, s2, s3;
    s1 = getData();
    s2 = getData();
    s3 = compare(s1, s2);
    display(s3);
    return 0;
}

sterling getData()
{
    sterling s;
    char ch;
    cout << "Enter pounds, shillings and pences ";
    cin >> s.pounds >> ch >> s.shillings >> ch >> s.pences;
    return s;
}

sterling compare(sterling a, sterling b)
{
    sterling t;
    t.pounds = a.pounds + b.pounds;
    t.shillings = a.shillings + b.shillings;
    t.pences = a.pences + b.pences;

    if (t.pences > 11)
    {
        t.shillings += t.pences / 12;
        t.pences = t.pences % 12;
    }
    if (t.shillings > 19)
    {
        t.pounds += t.shillings / 20;
        t.shillings = t.shillings % 20;
    }
    return t;
}

void display(sterling f)
{
    cout << "Result is:" << f.pounds << "." << f.shillings << "." << f.pences;
}
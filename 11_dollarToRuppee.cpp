#include <iostream>
using namespace std;
class rs
{
public:
    float rupees;
    virtual void conv() = 0;
    void disp()
    {
        cout << " is eqvivalent to " << rupees << " INR \n";
    }
};
class doll : public rs
{
    float dol;

public:
    void conv()
    {
        cout << "Enter currncy in dollar \n";
        cin >> dol;
        rupees = 54.3 * dol;
        cout << " " << dol << " in dollar ";
        disp();
    }
};
class euro : public rs
{
    float er;

public:
    void conv()
    {
        cout << "Enter currency in Euro \n";
        cin >> er;
        rupees = 70.2 * er;
        cout << " " << er << " in euro ";
        disp();
    }
};
class pd : public rs
{
    float pnd;

public:
    void conv()
    {
        cout << "Enter currency in pound \n";
        cin >> pnd;
        rupees = 81.1 * pnd;
        cout << " " << pnd << " in pound ";
        disp();
    }
};
int main()
{
    int c;
    doll d;
    euro e;
    pd p;
    cout << "\t\t\t Currency conversion \n";
    while (1)
    {
        cout << "1.$ to Rs. 2.Euro to Rs. 3.Pound to Rs. 4.Exit \n";
        cin >> c;
        switch (c)
        {
        case 1:
            d.conv();
            break;
        case 2:
            e.conv();
            break;
        case 3:
            p.conv();
            break;
        default:
            return 0;
        }
    }
    return 0;
}
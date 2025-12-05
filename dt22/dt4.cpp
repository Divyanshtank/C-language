
#include <string>
#include <iostream>
using namespace std;
class Base
{
public:
    char name[20];
    int price;
    Base(char nm[], int pr)
    {
        strcpy(name,nm);
        price = pr;
    }
    virtual void show()
    {}
};
class Tape : public Base
{
public:
    int time;
    Tape(char nm[], int pr1, int tim) : Base(nm, pr1)
    {
        time = tim;
    }
    void show()
    {
        cout << "Tape Name=" << name << endl;
        cout << "Tape Price=" << price << endl;
        cout << "Tape Time= " << time;
    }
};
class Book : public Base
{
public:
    int pages;
    Book(char nm[], int pr2, int page) : Base(nm, pr2)
    {
        pages = page;
    }
    void show()
    {
        cout << "Book Name= " << name << endl;
        cout << "Book Price= " << price << endl;
        cout << "Book pages= " << pages << endl;
    }
};
int main()
{
    char tnm[20], bnm[20];
    int tprice, bprice, page, tim;
    cout << "Tape Name:";
    cin >> tnm;
    cout << "Tape Price:";
    cin >> tprice;
    cout << "Tape Time:";
    cin >> tim;
    Tape tp(tnm, tprice, tim);
    cout << "Book Name:";
    cin >> bnm;
    cout << "Book Price:";
    cin >> bprice;
    cout << "Book Page:";
    cin >> page;
    Book bk(bnm, bprice, page);

    Base *bs[2];
    bs[0] = &tp;
    bs[1] = &bk;

    bs[0]->show();
    bs[1]->show();
    return 0;
}
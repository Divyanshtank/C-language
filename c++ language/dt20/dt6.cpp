#include <iostream>
using namespace std;
class MP

{

public:
    int stu[10], i;
    void getmp()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "MP_MARKS:";
            cin >> stu[i];
        }
    }
};
class UP
{
public:
    int stu1[10], i;
    void getup()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "UP_Marks: ";
            cin >> stu1[i];
        }
    }
};
class MH
{
    int stu2[10], i;
    void getmh()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "MH_Marks:";
            cin >> stu2[i];
        }
    }
};
class Delhi : public MP, public UP, public MH
{
public:
    int i, m, u, h;
    void marks()
    {
        getmp();
        getup();
        getmh();
        m = stu[0];
        u = stu1[0];
        h = stu2[0];
        for (i = 1; i < 5; i++)
        {
            if (m < stu[i])
            {
                m = stu[i];
            }
            if (u < stu1[i])
            {
                u = stu1[i];
            }
            if (h < stu2[i])
            {
                h = stu2[i];
            }
        }
        (m > u && m > h) ? cout << "MP= " << m : (u > h) ? cout << "UP= " << u
                                                         : cout << "MH= " << h << endl;
    }
};
int main()
{
    Delhi d1;
    d1.marks(); 
    return 0;
}

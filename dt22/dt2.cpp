#include <iostream>
using namespace std;
class Demo
{
public:
    string nm[10], temp;
    int i, j;
    void get()
    {
        for (i = 0; i < 10; i++)

        {
            cout << "Name= :";
            cin >> nm[i];
        }
    }
    void sort()
    {
        for (j = 0; j < 10; j++)
        {

            for (i = 0; i < 9 - j; i++)
            {
                if (nm[i] > nm[i + 1])
                {
                    temp = nm[i];
                    nm[i] = nm[i + 1];
                    nm[i + 1] = temp;
                }
            }
        }
    }
    void show()
    {
        for (i = 0; i < 10; i++)
        {
            cout << "Val= " << nm[i] << endl;
        }
    }
};
int main()
{
    Demo d1;
    d1.get;
    d1.sort;
    d1.show;
    return 0;
}
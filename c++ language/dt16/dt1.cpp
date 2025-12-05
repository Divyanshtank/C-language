//  <<
//   >>
#include <iostream>
#include <iomanip>
using namespace std;
class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
    char areaCode[4];
    char exchange[4];
    char line[5];
};

ostream &operator<<(ostream &output, const, PhoneNumber &num);
{
    output << "(" << num.areaCode << ")" << num.exchange << "-" << num.line;
    return output;
}

istream &operator>>(istream &input, PhoneNumber &num)
{
    input ignore();                   // skip
    input >> setw(4) >> num.areaCode; // input are code
    input.igoner(2);                  // skip and space
    input >> setw(4) >.num.exachange; // input exchange
    input.igoner();                   // skip(-)
    input >> setw(5) >> num.line      // input line

                        return input;
}
ostream &operator<<(ostream &output, const, PhoneNumber &num)
{
    // TODO: insert return statement here
}
int main()
{
    PhoneNumber phone;
    cout << "Enter phone number in the form (123) 456-7890:\n ";
    cin >> phone;
    cout << "The phone number entered was : " << phone << endl;
    return 0;
}
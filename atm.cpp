#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class bank
{
    int acno;
    char nm[100], acc_type[100];
    float bal;

public:
    bank(int acc_no, char *name, char *acc_type, float balance)
    {
        acno = acc_no;
        strcpy(nm, name);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::deposit()
{
    int damt1;
    cout << "\n Enter Deposit Amount=";
    cin >> damt1;
    bal += damt1;
}
void bank::withdraw()
{
    int wamt1;
    cout << "\n Enter withdraw Amount=";
    cin >> wamt1;
    if (wamt1 > bal)
        cout << "\n Cannot withdraw Amount";
    bal -= wamt1;
}
void bank::display()
{
    cout << "\n________";
    cout << "\n Account No.:" << acno;
    cout << "\n Name:" << nm;
    cout << "\n Balance :" << bal;
}
int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
    cout << "\n Enter details:\n";
    cout << "___________";
    cout << "\n Account No.";
    cin >> acc_no;
    cout << "\n Name :";
    cin >> name;
    cout << "\n Account type :";
    cin >> acc_type;
    cout << "\n Balance :";
    cin >> balance;
    bank b1(acc_no, name, acc_type, balance);
    b1.deposit();
    b1.withdraw();
    b1.display();
    return 0;
}
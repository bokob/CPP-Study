#include <iostream>
#include <cstring>
using namespace std;

class DepositException
{
private:
    int reqDep;

public:
    DepositException(int money) : reqDep(money)
    {
    }
    void ShowExceptionReason()
    {
        cout << "[���� �޽���: " << reqDep << "�� �ԱݺҰ�]" << endl;
    }
};

class WithdrawException
{
private:
    int balance;

public:
    WithdrawException(int money) : balance(money)
    {
    }
    void ShowExceptionReason()
    {
        cout << "[���� �޽���: �ܾ� " << balance << ", �ܾ׺���]" << endl;
    }
};

class Account
{
private:
    char accNum[50];
    int balance;

public:
    Account(char *acc, int money) : balance(money)
    {
        strcpy(accNum, acc);
    }
    void Deposit(int money) throw(DepositException)
    {
        if (money < 0)
        {
            DepositException expn(money);
            throw expn;
        }
        balance += money;
    }
    void Withdraw(int money) throw(WithdrawException)
    {
        if (money > balance)
            throw WithdrawException(balance);
        balance -= money;
    }
    void ShowMyMoney()
    {
        cout << "�ܰ�: " << balance << endl
             << endl;
    }
};
#include<iostream>
using namespace std;
class Account {
    int account_balance;
public:
    Account(int balance)
    {
        if (balance>=0) {
            account_balance = balance;
        }
        else {
            balance=0;
            cout<<"Invalid initial balance "<<endl;
            account_balance=balance;
        }
    }
    void Credit(int amount) {
        account_balance += amount;

    }
    void Debit(int withdray_money) {
        int temp = account_balance - withdray_money;
        if (temp<0) {
            cout<<"Debit amount exceeded acoount balance "<<endl;
        }
        else {
            account_balance -= withdray_money;
        }
    }
    int getBalance() {

        return account_balance;

    }

};
int main()
{
    int money1;
    cout<<"Enter amount you want to start obj1 account with "<<endl;
    cin>>money1;
    Account obj1(money1);

    int addMoney1;
    cout<<"Enter money you want to add to obj1 account "<<endl;
    cin>>addMoney1;
    obj1.Credit(addMoney1);

    int withdrawMoney1;
    cout<<"Enter money you want to withdraw from obj1 account "<<endl;
    cin>>withdrawMoney1;
    obj1.Debit(withdrawMoney1);
    obj1.getBalance();
    cout<<"\n";


    int money_2;
    cout<<"Enter amount you want to start your with obj2 account "<<endl;
    cin>>money_2;
    Account obj2(money_2);

    int addMoney_2;
    cout<<"Enter money you want to add to obj2 account"<<endl;
    cin>>addMoney_2;
    obj2.Credit(addMoney_2);

    int withdrawMoney_2;
    cout<<"Enter money you want to withdraw from obj2 account"<<endl;
    cin>>withdrawMoney_2;
    obj2.Debit(withdrawMoney_2);
    obj2.getBalance();

    return 0;
}
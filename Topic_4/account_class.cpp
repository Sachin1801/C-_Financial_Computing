#include<iostream>
using namespace std ;

class Account{
    private:
        char *name;
        double balance;
        unsigned int id;

    public:
        Account();
        Account(const Account &a);
        Account(char const *person);
        ~Account();
        char *getName() const{return name;}
        int getID() const{return id;}
};

Account::Account():balance(0.0),name(NULL),id(0){}
Account::Account(const Account &a){
    balance = a.balance;
    id= a.id;
    name=new char[strlen(a.name)+1];
    strcpy(name,a.name);
}

Account::Account(char const* person){
    balance = 0.0;
    id = 0;

    name=new char[strlen(person)+1];
    strcpy(name,person);
    
}

Account::~Account(){
    //because name is a pointer, we need to delete it   
    delete [] name;
}

int main(){

    //give main to test the Account class
    Account a1("John");
    Account a2(a1);
    Account a3;

    cout<<a1.getName()<<endl;
    cout<<a2.getName()<<endl;
    cout<<a3.getID()<<endl;


    return 0;
}
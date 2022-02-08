#include <iostream>

using namespace std;

void showMenu(){

        cout<<"*****Menu*****"<<endl;
        cout<<"1. View Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"**************"<<endl;

}

int main()
{

        int option;
        double balance=0;
        do{
        showMenu();

        cout << "Select your Option: ";
        cin >> option;

        switch(option){
        case 1: cout << "Your Balance is "<<balance<<"$"<<endl;
        break;
        case 2: cout<<"Enter amount: ";
        double amountDeposit;
        cin>>amountDeposit;
        balance+=amountDeposit;
        break;
        case 3: cout<<"Enter amount: ";
        double withdrawAmount;
        cin>>withdrawAmount;
        if(withdrawAmount<=balance)
        balance-=withdrawAmount;
        else
                cout<<"You have insufficient balance.";
        break;
        }
        } while(option!=4);
        cout<<"Thank You..."<<endl;
        return 0;
}

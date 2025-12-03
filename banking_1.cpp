#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balnce);
int main(){
    double balance = 123;
    int choice = 0;
    do{
    std::cout << "*********************\n";
    std::cout << "ENTER YOUR CHOICE\n";
    std::cout << "*********************\n";
    std::cout << "1. SHOW BALANCE\n";
    std::cout << "2. DEPOSIT MONEY\n";
    std::cout << "3. WITHDRAW MONEY \n";
    std::cout << "4. EXIT\n";
    std::cin >> choice ;

    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1: showbalance(balance);
        break;
        case 2: balance += deposit();
        break;
        case 3: balance -=withdraw(balance);
        std::cout << "YOUR BALANCE IS $" << balance << '\n';
        break;
        case 4: std::cout << "THANKS FOR VISITING!\n";
        break;
        default:std::cout << "INVALID CHOICE\n";
    
    }
    }while(choice !=4 );

    return 0;

}
void showbalance(double balance){
    std::cout << "YOUR BALANCE IS : $" << balance << '\n';
}
double deposit(){

    double amount = 0;
    std::cout << "ENTER AMOUNT =";
    std::cin >> amount;

    if(amount > 0){
        return amount;

    }
    else{
        std::cout << "THAT'S NOT A VALID amount: \n";
    }
    return 0;
}
double withdraw(double balance){
        double amount = 0;
        std::cout << "ENTER AMOUNT TO WITHDRAW";
        std::cin >> amount;
        
        if(amount > balance)
        {
            std::cout << "insuffient funds\n";
            return 0 ;
        
        }
        else if (amount < 0){
            std::cout << "THAT'S NOT A VALID AMOUNT\n";
            return 0;
        }
        else{
            return amount;
        }
        
        return 0;
}
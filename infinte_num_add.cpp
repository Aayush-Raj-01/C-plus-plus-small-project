#include <iostream>
int add(int num);
int mul(int num);

int main(){
int num;
std::string wh;

std::cout << "WHAT YOU WANNA DO \nSUM OR MUL = ";
std::cin >> wh;

std::cout << "TAKE A NUMBER = ";
std::cin >> num;

if(wh=="SUM"){
    std::cout << "YOUR ANSWER IS " << add(num);
}
else if(wh=="MUL"){
    std::cout << "YOUR ANSWER IS " << mul(num);
}
else{
    std::cout << "TYPE SOMETHING VALID";
}

}

int add(int num){
    int d = 0;
    int i = 0;
    do{
        d = d + i;
        i++;
    }while(i<=num);
    return d;
}
int mul(int num){
    int d = 1;
    int i =1;
    do{
        d = d * i;
        i++;
    }while(i<=num);
     return d;
}
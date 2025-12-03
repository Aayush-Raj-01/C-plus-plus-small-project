#include <iostream>
int add(int num);
int mul(int num);

int main(){
int num;
std::string wh;

std::cout << "WHAT YOU WANNA DO \nSUM OR ADD";
std::cin >> wh;

std::cout << "TAKE A NUMBER = " << num;

if(wh=="SUM"){
    std::cout << add(num);
}
else{
    std::cout << mul(num);
}

}

int add(int num){
    int d = 0;
    int i;
    do{
        d = d + i;
        i++;
    }while(i<num);
    return d;
}
int sum(int num){
    int d = 1;
    int i;
    do{
        d = d * i;
        i++;
    }while(i<num);
     return d;
}
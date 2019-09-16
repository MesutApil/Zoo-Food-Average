//Program coded by Mesut Apil
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

double MONKEYS[3][5];
double Getinfo();
double calculate(double);
void leastnmost();
void report(double);
int main()
{
    double total;
    double avgg;
    cout<<" Please enter food eaten by monkeys:"<<endl;
    total = Getinfo();
    avgg = calculate(total);
    leastnmost();
    report(avgg);
    
}
double Getinfo(){
    double totalfood;
    totalfood = 0;
    for(int i =0; i<3; i++)
    {
        cout<<" Monkey "<<i+1<<endl;
        for(int g =0; g<5; g++)
        {
            cout<<" Day "<<g+1<<":";
            cin>>MONKEYS[i][g];
            totalfood+=MONKEYS[i][g];
        }
    }
    return totalfood;
}
double calculate(double ttl){
    
    double avg;
    avg = 0;
    
    avg = ttl / 15;
    
    return avg;
}

void leastnmost()
{
    MONKEYS[3][5] = 100;
    MONKEYS[3][4] = 0;
    for (int i =0; i<3; i++)
    {
        for(int g = 0; g<5; g++)
        {
            if(MONKEYS[3][5] > MONKEYS[i][g])
            {
                MONKEYS[3][5] = MONKEYS[i][g];
            }
            
            if(MONKEYS[3][4] < MONKEYS[i][g])
            {
                MONKEYS[3][4] = MONKEYS[i][g];
            }
        }
    }
}

void report(double m)
{
    cout<<" Average food eaten per day: "<<m<<endl;
}

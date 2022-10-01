/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct 
    {
        int BP ;
        int FP ;
        string substance ;
    } EthyAlcohol, Mercury, Oxygen, Water;
    
   EthyAlcohol.BP = 172;
   EthyAlcohol.FP = -173;
   EthyAlcohol.substance ="Ethyl Alcohol";
   
   Mercury.FP = -38;
   Mercury.BP = 676;
   Mercury.substance = "Mercury";
   
   Oxygen.BP = -306;
   Oxygen.FP = -362;
   Oxygen.substance = "Oxygen";
   
   Water.BP = 212;
   Water.FP = 32;
   Water.substance = "Water";
    
    int temp;
    cout<<"Enter temperature :";
    cin>> temp;
    
    if (temp>=EthyAlcohol.BP)
        cout<<EthyAlcohol.substance<<" boils at that temperature."<< endl;
    if (temp<EthyAlcohol.BP && temp > EthyAlcohol.FP)
        cout<<EthyAlcohol.substance<<" liquifies at this temperature."<<endl;
    if (temp<= EthyAlcohol.FP)
        cout<<EthyAlcohol.substance<<" will freeze at this temperature."<<endl;
        
    if (temp>=Mercury.BP)
        cout<<Mercury.substance<<" boils at that temperature."<< endl;
    if (temp<Mercury.BP && temp > Mercury.FP)
        cout<<Mercury.substance<<" liquifies at this temperature."<<endl;
    if (temp<= Mercury.FP)
        cout<<Mercury.substance<<" will freeze at this temperature."<<endl;
        
    if (temp>=Oxygen.BP)
        cout<<Oxygen.substance<<" boils at that temperature."<< endl;
    if (temp<Oxygen.BP && temp > Oxygen.FP)
        cout<<Oxygen.substance<<" liquifies at this temperature."<<endl;
    if (temp<= Oxygen.FP)
        cout<<Oxygen.substance<<" will freeze at this temperature."<<endl;
    
    if (temp>=Water.BP)
        cout<<Water.substance<<" boils at that temperature."<< endl;
    if (temp<Water.BP && temp > Water.FP)
        cout<<Water.substance<<" liquifies at this temperature."<<endl;
    if (temp<= Water.FP)
        cout<<Water.substance<<" will freeze at this temperature."<<endl;
        
    else
        cout<<"Please make a valid entry, only numbers and no characters.";

    return 0;
}
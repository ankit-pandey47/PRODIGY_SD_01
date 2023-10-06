#include<iostream>
using namespace std;
int main(){
    int op;
    double fah,cel,result,result2;
    cout<<"\t\tWELCOME TO THE TEMPERATURE CONVERTOR"<<endl;
    cout<<"---------------------------------------------------------------------------"<<endl;
    
    cout<<"\t\t1. To Convert from Fahrenheit to caelsius-"<<endl;
    cout<<"\t\t2. To Convert from Celsius to Fahrenheit"<<endl;
    cout<<"\t\t3. To Quit"<<endl<<endl;
    while(op!=3){
    cout<<"\n\t\tEnter the task number from the above options:";

    cin>>op;
    switch(op){
         case 1: cout<<"\t\tEnter the temperature in Fahrenheit: ";
                    cin>>fah;
                    result=(5*fah-160)/9;
                    cout<<"\t\tTemperature in degree celsius is :"<<result;
                    break;
         

         case 2: cout<<"\t\tEnter the temperature in Degree celsius : ";
                 cin>>cel;
                 result2=(9*cel/5)/32;
                 cout<<"\t\tTemperature in fahrenheit is : "<<result2;
                 break;

         case 3:  cout<<"\t\tYYou have choosen the opt to EXIT\n\t\tThanks to visit ";
                  break;

         default:
         cout<<"\t\tYou have entered a wrong opt";
         break;
    }


    }

}
/*
Full name
Lab 2, input and output streanming, string and character variables
Jan 2, 2025
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\v--------Example 1: cout and endl--------"<<endl;
    cout<<"\v This is my first program!\n"<<std::endl;
    cout<<"\n Lab 2 \t\t variables"<<endl;

    cout<<"\v--------- Example 2: string and character variables -------"<<endl;
    //declare identifier ( variable' name)
    string username;
    cout<<"Initail username: "<<username<<endl;
    //update identifier value
        username = "Peter Pan";
    cout<<"Updated username = "<<username<<endl;
    //updated identifier from user (keyword)
    cout<<"Enter a username";
    cin>>username;
    cout<<"Entered username: "<<username<<endl;

    cout<<"\v--------- Example 3: string and character variables -------"<<endl;
    //declare identifier with initial variable
    char symbol = '$';
    cout<<"Initail symbol = "<<symbol<<endl;
   //updated identifier from user (keyword)
   cout<<"which is your favourite symbol? "<<endl;
  
   cout<<"\v--------- Exercise : string and character variables -------"<<endl;
   //declare identifier
   string country;
   cout << "Enter the name of a country: "<<country<<endl;
   cin>>country;
   char gender;
   cout << "Enter your gender (f for female, m for male, o for others): "<<gender<<endl;
   cin>>gender;
   cout<<"\n Entered country:\t\t "<<country<<endl;
   cout<<"\n Entered gender:\t\t "<<gender<<endl;

    return 0;
}

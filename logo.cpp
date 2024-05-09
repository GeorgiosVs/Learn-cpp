//This is main Functions linked into Managment.h class of Airport Terminal program
#include<iostream>
#include<iomanip>
#include"Management.h"  //Linked to Management.h
using namespace std;

        //Main logo function prototype
void Management::logo()
{
    cout << "  __        __   _                            _ " << endl
              << "  \\ \\      / /__| | ___ ___  _ __ ___   ___  | |" << endl
              << "   \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | |" << endl
              << "    \\ V  V /  __/ | (_| (_) | | | | | |  __/ |_|" << endl
              << "     \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___| (_)" << endl;

    cout << "\n\t" << setw(45) << setfill('~') << "\n"
              << "\n\t          TO GEORGE AIRWAYS          " << endl;
    cout << "\n\t" << setw(45) << setfill('~') << "\n";
};

        //Name function prototype
string Management::name()
{
        //Variable Declaration for username
        string user1, user2, usertotal;
        char epilogh = '\0';
        
        //Loop creation for user to enter First Name and Last name
    do{
        cout << "\n\n\tPlease enter your First Name :";
        cin >> user1;
        
        cout << "\n\n\tPlease enter your Last Name :";
        cin >> user2;
        
        usertotal = user1 + " " + user2;
        
        cout << "\n\tYour name is  " << usertotal << "  is it correct? y/n :";
        cin >> epilogh;
        
        //Logical selection if the user doesn't input 'y' to enter again the First Name and the Last Name
    }while (epilogh != 'y' && epilogh != 'Y');
    
        cout << "\n\tPlease choose your Gender below " << usertotal << endl;
        
        //Return usertotal to int main() function
    return usertotal;
        
    };

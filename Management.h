/*
Αυτό είναι το αρχείο Management.h που περιέχει όλες τις
προτότυπες συναρτήσεις από το αρχείο logo.cpp είναι η κλάση για το αρχείο main.cpp
*/
#ifndef Management_h
#define Management_h

#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>

//Δήλωση δεδομένων User & Ticket
struct User {
    std::string username;
    std::string password;
    std::string email;
    std::string phone;
};

struct Ticket {
    std::string ticketNumber;
    std::string username;
    std::string destination;
    int cost;
    bool roundTrip;
    int luggageWeight;
};

class Management {
private:
    
    //Λίστα για τα εισιτήρια
    std::vector<Ticket> tickets;
    
    //Χρήστης που έχει συνδεθεί
    User loggedInUser;

    //Συναρτήσεις εισιτηρίων private
    void printReceipt(const Ticket& ticket);
    void purchaseTicket();
    void viewTicketInfo(const std::string& ticketNumber);
    bool usernameExists(const std::string& username);
    
public:
    
    //Συναρτήσεις public από το αρχείο logo.cpp
    
    //Συνάρτηση εμφάνισης λογότυπου
    void logo();
    
    //Συνάρτηση εγγραφής νέου χρήστη
    void signUp();
    
    //Συνάρτηση εισόδου χρήστη
    void login();
    
    //Συνάρτηση για αυτό που θα επιλέξει ο χρήστης
    int userChoice();
};

#endif /* Management_h */

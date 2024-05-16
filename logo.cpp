//Αυτή είναι η κύρια συνάρτηση που συνδέεται με την κλάση Management.h του προγράμματος Airport Terminal

#include "Management.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

    //Προτότυπο της συνάρτησης του λογότυπου
void Management::logo()
{
    cout << "  __        __   _                            _ " << endl
              << "  \\ \\      / /__| | ___ ___  _ __ ___   ___  | |" << endl
              << "   \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | |" << endl
              << "    \\ V  V /  __/ | (_| (_) | | | | | |  __/ |_|" << endl
              << "     \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___| (_)" << endl;

    cout << "\n\t" << setw(45) << setfill('~') << "\n"
              << "\n\t          TO AIRPORT TERMINAL          " << endl;
    cout << "\n\t" << setw(45) << setfill('~') << "\n";
}


    //Συνάρτηση για τον έλεγχο αν το όνομα χρήστη υπάρχει ήδη
bool Management::usernameExists(const std::string& username) {
    
    //Άνοιγμα του αρχείου χρηστών
    ifstream file("users.txt");
    string line;
    
    //Διάβασμα του αρχείου γραμμή προς γραμμή
    while (getline(file, line)) {
        
    //Έλεγχος αν η γραμμή περιέχει το όνομα χρήστη
        if (line.find("Username: " + username) != string::npos) {
            
    //Κλείσιμο αρχείου
            file.close();
            
    //Το όνομα αρχείου αν το βρεί επιστρέφει αληθής
            return true;
        }
    }
    //Κλείσιμο αρχείου
    file.close();
    //Αν δεν υπάρχει το όνομα χρήστη επιστρέφει το Ψευδής
    return false;
}

    //Συνάρτηση εγγραφής νέου χρήστη
void Management::signUp() {
    
    //Δημιουργία ενό νέου χρήστη
    User newUser;
    cout << "\nEnter username: ";
    
    //Εισαγωγή ονόματος χρήστη
    cin >> newUser.username;
    
    //Έλεγχος αν το όνομα χρήστη υπάρχει ήδη
    if (usernameExists(newUser.username)) {
        cout << "\nUsername already exists. Please choose a different one.\n" << endl;
        return;
    }
    
    //Εισαγωγή κωδικού πρόσβασης
    cout << "\nEnter password: ";
    cin >> newUser.password;
    
    //Εισαγωγή email
    cout << "\nEnter email: ";
    cin >> newUser.email;
    
    //Εισαγωγή αριθμού τηλεφώνου
    cout << "\nEnter phone nubmer:";
    cin >> newUser.phone;
    
    //Άνοιγμα το αρχείο για εγγραφή πληροφοριών
    ofstream file("users.txt", ios::app);
    
    //Αν το αρχείο δέν είναι ανοιχτό τότε εκτύπωνει σφάλμα
    if (!file.is_open()) {
        cout << "\nError: Unable to open file.\n";
        return;
    }
    
    //Εγγραφή πληροφοριών
    file << "Username: " << newUser.username << "\n";
    file << "Password: " << newUser.password << "\n";
    file << "Email: " << newUser.email << "\n\n";
    file << "Phone: " << newUser.phone << "\n\n";
    
    //Κλείσιμο αρχείου για αποθήκευση και αποφυγή σφάλματος
    file.close();
    
    //Εφόσον κλείσει το αρχείο εκτύπωση μηνύματος Εγγραφή επιτυχής
    cout << "Sign up successful.\n";
}

    //Συνάρτηση για την είσοδο χρήστη
void Management::login() {
    
    //Δημιουργία μεταβλητών string
    string username, password;
    
    //Εισαγωγή Ονόματος Χρήστη
    cout << "Enter username: ";
    cin >> username;
    
    //Εισαγωγή Κωδικού χρήστη
    cout << "Enter password: ";
    cin >> password;
    
    //Άνοιγμα αρχείου χρηστών
    ifstream file("users.txt");
    
    //Αν το αρχείο δέν είναι ανοιχτό τότε εκτύπωνει σφάλμα
    if (!file.is_open()) {
        cout << "Error: Unable to open file.\n";
        return;
    }

    string line;
    
    //Μεταβλητή για να βρεί αν ο χρήστης ταυτοποιήθηκε
    bool isAuthenticated = false;
    
    
    while (getline(file, line)) {
        
    //Εύρεση του ονόματος χρήστη στο αρχείο χρηστών
        if (line.find("Username: " + username) != string::npos) {
            getline(file, line);
            
    //Διαβάζει γραμμή προς γραμμή για να βρεί τον κωδικό πρόσβασης
            if (line.find("Password: " + password) != string::npos) {
    
    //Εφόσον τον βρεί ο χρήστης παίρνει τιμή αληθής
                isAuthenticated = true;
                break;
            }
        }
    }
    //Κλείσιμο αρχείου χρηστών
    file.close();
    
    // Άν αληθής εκτύπωση μηνύματος επιτυχή εισόδου
        if (isAuthenticated) {
            cout << "Login successful.\n";
            loggedInUser.username = username; // Ανανέωση του loggedInUser
            cout << "Logged in as: " << loggedInUser.username << endl; // Τυπώνουμε το username για έλεγχο
        }
    // Αλλιώς εκτύπωση μηνύματος σφάλματος
        else {
            cout << "Invalid username or password.\n";
        }
    }
    //Συνάρτηση Μενού
int Management::userChoice() {
    
    //Μεταβλητή για την κατάσταση σύνδεσης του χρήστη
    bool loggedIn = false;
    int choice;
    do {
        cout << "1. Sign Up\n2. Login\n3. Purchase Ticket\n4. View Ticket Info\n5. Exit\nEnter choice: ";
        cin >> choice;
        
        if (cin.fail()) {
    
    //Εκκαθάριση της κατάστασης σφάλματος
                    cin.clear();
                    
    //Αγνόηση του υπόλοιπου buffer εισόδου
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a number.\n";
                    continue;
                }
        
        switch (choice) {
            case 1:
                //Κλήση της συνάρτησης εγγραφής
                signUp();
                break;
            case 2:
                //Κλήση της συνάρτησης σύνδεσης
                login();
                if (loggedInUser.username != "") {
                //Εάν ο χρήστης συνδεθεί με επιτυχία, ενημερώστε το loggedInUser
                    loggedIn = true;
                }
                break;
            case 3:
                //Έλεγχος για την επιλογή 3 πρέπει πρώτα να συνδεθεί ο χρήστης
                if (!loggedIn) {
                    cout << "Please login first.\n";
                } else {
                    //Κλήση συνάρτησης αγοράς εισιτηρίου
                    purchaseTicket();
                }
                break;
            case 4:
                //Έλεγχος για πληροφορίες εισιτηρίου πρέπει πρώτα να συνδεθεί ο χρήστης
                if (!loggedIn) {
                    cout << "Please login first.\n";
                } else {
                    cout << "Enter ticket number: ";
                    string ticketNumber;
                    cin >> ticketNumber;
                    //Κλήση συνάρτησης προβολής πληροφοριών εισιτηρίου
                    viewTicketInfo(ticketNumber);
                }
                break;
            case 5:
                if (loggedIn) {
                    cout << "Logging out...\n";
                    //Αποσύνδεση χρήστη
                    loggedInUser.username = "";
                    //Ορισμός μεταβλητής σε ψευδή
                    loggedIn = false;
                }
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }while (choice != 5);
    return choice;
}

    //Συνάρτηση εισιτηρίων
void Management::purchaseTicket() {
    
    Ticket newTicket;
    //Εμφάνιση επιλογών προορισμού
    std::cout << "Select destination:\n";
    std::cout << "1. Athens (70 euros)\n";
    std::cout << "2. Thessaloniki (50 euros)\n";
    std::cout << "3. Patra (40 euros)\n";
    std::cout << "\nChoose here:";
    
    int destinationChoice;
    std::cin >> destinationChoice;
    
    switch (destinationChoice) {
        case 1:
            newTicket.destination = "Athens";
            newTicket.cost = 70;
            break;
        case 2:
            newTicket.destination = "Thessaloniki";
            newTicket.cost = 50;
            break;
        case 3:
            newTicket.destination = "Patra";
            newTicket.cost = 40;
            break;
        default:
            std::cout << "Invalid choice.\n";
            return;
    }
    
    //Ερώτηση για μετ επιστροφής;
    std::cout << "Round trip? (1 for yes, 0 for no): ";
    std::cin >> newTicket.roundTrip;
    
    //Εισαγωγή βάρους έξτρα αποσκευών
    std::cout << "Luggage weight (kg): ";
    std::cin >> newTicket.luggageWeight;

    //Υπολογισμό κόστους
    if (newTicket.roundTrip) {
    //Διπλασιασμός κόστους για μετ επιστροφής εισιτηρίου
        newTicket.cost *= 2;
    }

    //Δημιουργία αριθμού εισιτηρίου
    newTicket.ticketNumber = "T" + std::to_string(tickets.size() + 1);
    
    //Ανάθεση ονόματος χρήστη
    newTicket.username = loggedInUser.username;
    
    //Καταχώρηση εισιτηρίου στο vector
    tickets.push_back(newTicket);
    
    //Εκτύπωση απόδειξης
    printReceipt(newTicket);
}

void Management::printReceipt(const Ticket& ticket) {
    
    //Εκτύπωση απόδειξης
    cout << "\nReceipt\n";
    cout << "Ticket Number: " << ticket.ticketNumber << endl;
    cout << "Destination: " << ticket.destination << endl;
    cout << "Round Trip: " << (ticket.roundTrip ? "Yes" : "No") << endl;
    cout << "Luggage Weight: " << ticket.luggageWeight << " kg" << endl;

    // Μετατροπή του κόστους από int σε string
    std::ostringstream costStream;
    costStream << ticket.cost;
    std::string costString = costStream.str();
    
    // Εκτύπωση του κόστους ως συμβολοσειρά
    cout << "Cost: " << costString << " euros" << endl;
    
    cout << "Thank you for your purchase!\n";
}

void Management::viewTicketInfo(const std::string& ticketNumber) {
    
    //Επαλήθευση του αριθμού εισητηρίου στη λίστα των εισιτηρίων
    for (const auto& ticket : tickets) {
            if (ticket.ticketNumber == ticketNumber) {
    //Άν βρεί εισιτήριο εκτυπώνει τις πληροφορίες παρακάτω
                cout << "\nTicket Information\n";
                cout << "Ticket Number: " << ticket.ticketNumber << endl;
                cout << "Destination: " << ticket.destination << endl;
                cout << "Round Trip: " << (ticket.roundTrip ? "Yes" : "No") << endl;
                cout << "Luggage Weight: " << ticket.luggageWeight << " kg" << endl;
                return;
            }
        }
    //Άν ο αριθμός του εισιτηρίου δεν βρεθεί εκτύπωση δεν βρέθηκε εισιτήριο
        cout << "Ticket not found.\n";
}

//This is main logo Function linked into Managment class of Airport Terminal program
#include<iostream>
#include<iomanip>
#include"Management.h"

void Management::logo()
{
    std::cout << "  __        __   _                            _ " << std::endl
              << "  \\ \\      / /__| | ___ ___  _ __ ___   ___  | |" << std::endl
              << "   \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | |" << std::endl
              << "    \\ V  V /  __/ | (_| (_) | | | | | |  __/ |_|" << std::endl
              << "     \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___| (_)" << std::endl;

    std::cout << "\n\t" << std::setw(45) << std::setfill('~') << "\n"
              << "\n\t          TO GEORGE AIRWAYS          " << std::endl;
    std::cout << "\n\t" << std::setw(45) << std::setfill('~') << "\n";
}

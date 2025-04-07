/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: sjmcf
 *
 * Created on April 4, 2025, 12:03 PM
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::string fileName;
    std::ifstream inputFile;
    char ch;
    int charCount = 0;

    //Prompting the user to enter the file name
    std::cout << "Enter the file name: ";
    std::getline(std::cin, fileName);
    
    //Open the file 
    inputFile.open(fileName);
    
    //Check if the file is successfully opened
    if(!inputFile){
        std::cerr << "Error: Could not open the file." << std:: endl;
        return 1;
    }
    
    //Close the file
    inputFile.close();
    
    //Display the result
    std::cout << "The file contains " << charCount << "characters." << std:: endl;
    
    return 0;
}


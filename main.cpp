#include "accounts.h" 
#include <fstream>
#include <iostream>
#include<iomanip>
#include <algorithm> 

using namespace std;

void printArray(int[], int);
void sortArrAsc(int[], int);

    int main(){
      fstream myFile;
      myFile.open("Results.txt", ios::app);//write
      if(myFile.is_open()) {
        myFile << "\nStart time for program 3: " << cpuTime() << endl;
        myFile.close();
      } 

      std::cout << std::fixed;
      std::cout << std::setprecision(3);

      sort(accountBalances, accountBalances + maxAccounts);
      void printArray(int arrayVals[], int size); 
        cout << "\nPrinted Values in Array Sorted By Ascending: " << endl; 
        for(int i = 0; i < maxAccounts; i++) { 
        cout <<  " " << accountBalances[i] << ",";
        }

    myFile.open("Results.txt", ios::app);//append
      if(myFile.is_open()) {
        myFile << "\nEnd time for program 3: " << cpuTime() << endl;
        myFile.close();
      }

    return 0;
}
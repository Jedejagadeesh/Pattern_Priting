#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int n = 6; // size for letters

// Function to print J row
void rowJ(int i) {
    for (int j = 0; j < n; j++) {
        if (i == 0 || j == n / 2 || (i == n - 1 && j <= n / 2) || (i == n - 2 && j == 0)){
            cout << "* ";
            Sleep(50);
        }
        else
            cout << "  ";
    }
    cout << "  "; 
}

// Function to print A row
void rowA(int i) {
    for (int j = 0; j < n; j++) {
        if (j == 0 || j == n - 1 || i == 0 || i == n / 2){
            cout << "* ";
            Sleep(50);
        }
        else{
            cout << "  ";
    }
}
    cout << "  ";
}

// Function to print G row
void rowG(int i) {
    for (int j = 0; j < n; j++) {
        if (i == 0 || i == n - 1 || j == 0 ||
            (i == n / 2 && j >= n / 2) || (j == n - 1 && i >= n / 2)){
            cout << "* ";
             Sleep(50);
         }
        else{
            cout << "  ";
         }
    }
    cout << "  ";
}

// Function to print D row
void rowD(int i) {
    for (int j = 0; j < n; j++) {
        if (j == 0 || (j == n - 1 && i != 0 && i != n - 1) || i == 0 || i == n - 1){
            cout << "* ";
            Sleep(50);  
	    }
        else{
            cout << "  ";
        }
    }
    cout << "  ";
}

// Function to print E row
void rowE(int i) {
    for (int j = 0; j < n; j++) {
        if (j == 0 || i == 0 || i == n - 1 || i == n / 2){
            cout << "* ";
            Sleep(50);
		}
        else{
            cout << "  ";  
	    }
    }
    cout << "  ";
}

// Function to print S row
void rowS(int i) {
    for (int j = 0; j < n; j++) {
        if (i == 0 || i == n - 1 || i == n / 2 ||
            (j == 0 && i < n / 2) || (j == n - 1 && i > n / 2)){
            cout << "* ";
          Sleep(50);
		}
        else{
            cout << "  ";
		}
    }
    cout << "  ";
}

// Function to print H row
void rowH(int i) {
    for (int j = 0; j < n; j++) {
        if (j == 0 || j == n - 1 || i == n / 2){
            cout << "* ";
            Sleep(50);
        }
        else{
            cout << "  ";
		}
    }
    cout << "  ";
}

int main() {
    for (int i = 0; i < n; i++) {
        rowJ(i);
        cout << endl;
        Sleep(50);
    }

    // Step 2: Ask user
    cout << "\nDo you want to see the FULL NAME? (yes/no): ";
    string ans;
    getline(cin, ans);

    if (ans == "yes") {
        system("cls"); // clear screen

        // Step 3: Print full name row by row
        for (int i = 0; i < n; i++) {
            rowJ(i);
            rowA(i);
            rowG(i);
            rowA(i);
            rowD(i);
            rowE(i);
            rowE(i);
            rowS(i);
            rowH(i);
            cout << endl;
        }

        cout << "\nThank you for watching my name!!\n";
    } else {
        system("cls"); // clear screen
        cout << "Thank you for watching my Beautiful name\n";
    }

    return 0;
}

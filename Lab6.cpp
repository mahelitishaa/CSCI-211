#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> inputs; 
    while (true) {
        int month;
        cout << "Enter a number between 1 and 12 (-1 to stop): ";
        cin >> month;
        if (month == -1) {
            break;
        } else if (month >= 1 && month <= 12) {
            inputs.push_back(month); 
            switch (month) {
                case 1:
                    cout << "January" << endl;
                    break;
                case 2:
                    cout << "February" << endl;
                    break;
                case 3:
                    cout << "March" << endl;
                    break;
                case 4:
                    cout << "April" << endl;
                    break;
                case 5:
                    cout << "May" << endl;
                    break;
                case 6:
                    cout << "June" << endl;
                    break;
                case 7:
                    cout << "July" << endl;
                    break;
                case 8:
                    cout << "August" << endl;
                    break;
                case 9:
                    cout << "September" << endl;
                    break;
                case 10:
                    cout << "October" << endl;
                    break;
                case 11:
                    cout << "November" << endl;
                    break;
                case 12:
                    cout << "December" << endl;
                    break;
            }
        } else {
            cout << "Invalid input. Please enter a number between 1 and 12 or -1 to stop." << endl;
        }
    }

    cout << "These are your inputs: ";
    for (int i = 0; i < inputs.size(); i++) {
        cout << inputs[i] << " ";
    }
    cout << endl;

    return 0;
}

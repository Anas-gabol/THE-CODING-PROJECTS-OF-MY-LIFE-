#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;
    do {
        cout << "1. Add Task" << endl;
        cout << "2. Remove Task" << endl;
        cout << "3. Display Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the task: ";
                cin.ignore(); // To ignore the newline character left by cin
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added." << endl;
                break;
            case 2:
                int index;
                cout << "Enter the task number to remove: ";
                cin >> index;
                if(index > 0 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task removed." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            case 3:
                cout << "Your Tasks:" << endl;
                for(int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while(choice != 4);

    return 0;
}
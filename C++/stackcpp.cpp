#include <bits/stdc++.h>
using namespace std;
void menu()
{
    cout << "1- PUSH\n";
    cout << "2- POP\n";
    cout << "3- PEEK/TOP\n";
    cout << "4- IS_EMPTY\n";
    cout << "5- SIZE\n";
    cout << "6- EXIT\n";
}

int main()
{
    menu();
    stack<int> st;
    int choice;

    do {
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter a value to push: ";
                cin >> value;
                st.push(value);
                cout << "Value pushed to stack.\n";
                break;
            }
            case 2: {
                if (!st.empty()) {
                    st.pop();
                    cout << "Top element popped from stack.\n";
                } else {
                    cout << "Stack is empty. Cannot pop.\n";
                }
                break;
            }
            case 3: {
                if (!st.empty()) {
                    cout << "Top element of stack: " << st.top() << "\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            }
            case 4: {
                if (st.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack is not empty.\n";
                }
                break;
            }
            case 5: {
                cout << "Size of stack: " << st.size() << "\n";
                break;
            }
            case 6: {
                cout << "Exiting the program.\n";
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid choice.\n";
                break;
            }
        }

        cout << "\n";

    } while (choice != 6);

    return 0;
}

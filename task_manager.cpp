#include <bits/stdc++.h>  /*this is only working on GCC compiler*/
/*#include <iostream>
#include <vector>
#include <fstream>
#include <string>*/

using namespace std;

namespace TaskApp {

    class Task {
    public:
        string title;
        string description;

        Task(const string& title, const string& description)
            : title(title), description(description) {}
    };

    class TaskManager {
    private:
        vector<Task> tasks;

    public:
        void addTask(const string& title, const string& description) {
            tasks.emplace_back(title, description);
            cout << "Task added: " << title << "\n";
        }

        void viewTasks() const {
            if (tasks.empty()) {
                cout << "No tasks available.\n";
                return;
            }
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << "Task " << (i + 1) << ": " << tasks[i].title
                     << "\nDescription: " << tasks[i].description << "\n";
            }
        }

        void deleteTask(size_t index) {
            if (index < 1 || index > tasks.size()) {
                cout << "Invalid task number.\n";
                return;
            }
            tasks.erase(tasks.begin() + (index - 1));
            cout << "Task deleted.\n";
        }

        void saveTasks(const string& filename) const {
            ofstream file(filename);
            for (const auto& task : tasks) {
                file << task.title << "\n" << task.description << "\n";
            }
            file.close();
            cout << "Tasks saved to " << filename << "\n";
        }

        void loadTasks(const string& filename) {
            ifstream file(filename);
            string title, description;
            while (getline(file, title) && getline(file, description)) {
                addTask(title, description);
            }
            file.close();
            cout << "Tasks loaded from " << filename << "\n";
        }
    };
}

void showMenu() {
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Save Tasks\n";
    cout << "5. Load Tasks\n";
    cout << "6. Exit\n";
}

int main() {
    TaskApp::TaskManager manager;
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character

        switch (choice) {
            case 1: {
                string title, description;
                cout << "Enter task title: ";
                getline(cin, title);
                cout << "Enter task description: ";
                getline(cin, description);
                manager.addTask(title, description);
                break;
            }
            case 2:
                manager.viewTasks();
                break;
            case 3: {
                size_t taskNum;
                cout << "Enter task number to delete: ";
                cin >> taskNum;
                manager.deleteTask(taskNum);
                break;
            }
            case 4: {
                string filename;
                cout << "Enter filename to save tasks: ";
                cin >> filename;
                manager.saveTasks(filename);
                break;
            }
            case 5: {
                string filename;
                cout << "Enter filename to load tasks: ";
                cin >> filename;
                manager.loadTasks(filename);
                break;
            }
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

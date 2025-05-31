/*create a program with task ID and task name using switch case create class abdate and class delete*/
#include <iostream>
using namespace std;
class Task
{
public:
    int taskID;
    string taskName;

    Task(int  id, string name) 
    {
        taskID = id;
        taskName = name;
    }

    void displayTask() 
    {
        cout << "Task ID: " << taskID << ", Task Name: " << taskName << endl;
    }
};
class TaskManager 
{ 
public:
    void addTask(int id, string name) 
    {
        Task newTask(id, name);
        newTask.displayTask();
    }

    void deleteTask(int id) 
    {
        cout << "Task with ID " << id << " has been deleted." << endl;
    }
};
int main() 
{
    TaskManager taskManager;
    int choice, id;
    string name;

    do 
    {
        cout << "Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Enter Task ID: ";
                cin >> id;
                cout << "Enter Task Name: ";
                cin.ignore(); 
                getline(cin, name);
                taskManager.addTask(id, name);
                break;
            case 2:
                cout << "Enter Task ID to delete: ";
                cin >> id;
                taskManager.deleteTask(id);
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
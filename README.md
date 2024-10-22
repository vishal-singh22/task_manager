
# Task Management System in C++

This is a simple console-based **Task Management System** written in C++ that allows users to add, view, delete, and manage tasks. The system also supports saving tasks to a file and loading tasks from a file for persistent storage.

## Features

- **Add Task**: Create a new task by providing a title and description.
- **View Tasks**: Display a list of all tasks.
- **Delete Task**: Remove a task by specifying its number.
- **Save Tasks**: Save all current tasks to a file for future access.
- **Load Tasks**: Load previously saved tasks from a file.

## Project Structure

- **`TaskApp::Task`**: A class that represents a task with a title and description.
- **`TaskApp::TaskManager`**: A class that manages a collection of tasks and provides functions to add, view, delete, save, and load tasks.

## How to Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/task-management-system.git
   cd task-management-system
   ```

2. **Compile the code** using a C++ compiler, such as `g++`:
   ```bash
   g++ -o task_manager task_manager.cpp
   ```

3. **Run the program**:
   ```bash
   ./task_manager
   ```

4. **Follow the on-screen menu**:
   - You can add, view, delete tasks, and save/load tasks to/from a file.

## Sample Menu

```bash
1. Add Task
2. View Tasks
3. Delete Task
4. Save Tasks
5. Load Tasks
6. Exit
```

## Usage

### Adding a Task

- Select option `1` from the menu.
- You will be prompted to enter a task title and description.

### Viewing Tasks

- Select option `2` from the menu to display a list of all tasks with their titles and descriptions.

### Deleting a Task

- Select option `3` and input the task number you want to delete.

### Saving Tasks to a File

- Select option `4`, then specify the file name where you want to save the tasks (e.g., `tasks.txt`).

### Loading Tasks from a File

- Select option `5`, then specify the file name from which you want to load the tasks (e.g., `tasks.txt`).

## Dependencies

- **C++11 or later** (for modern C++ features such as `emplace_back` and `std::vector`).

## Future Improvements

- Task prioritization or due dates.
- Implement a search feature for tasks.
- Add a user interface (UI) for easier task management.
- Error handling and input validation improvements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

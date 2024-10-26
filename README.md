# Advanced Task Manager Application

This is a simple task manager application developed in Python using Object-Oriented Programming (OOP) principles. The application allows users to manage tasks effectively by adding, completing, deleting, and displaying tasks.

## Features

- **Add Tasks**: Create new tasks with titles and descriptions.
- **Mark Tasks as Completed**: Easily mark tasks as completed.
- **Delete Tasks**: Remove tasks that are no longer needed.
- **Display Tasks**: View all tasks along with their completion status.
- **Display Completed Tasks**: View only the tasks that have been completed.

## Requirements

- Python 3.x

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/vishal-singh22/task_manager.git
   cd task-manager
   ```

2. Run the application:
   ```bash
   python task_manager.py
   ```

## Usage

- You can add tasks by calling the `add_task` method.
- Mark a task as completed using the `complete_task` method.
- Delete a task with the `delete_task` method.
- Display all tasks with `display_tasks` and completed tasks with `display_completed_tasks`.

## Example

Here is an example of how to use the application:

```python
manager = TaskManager()

# Adding tasks
manager.add_task("Finish project", "Complete the final project for the course.")
manager.add_task("Grocery shopping", "Buy fruits and vegetables.")

# Display tasks
manager.display_tasks()

# Complete a task
manager.complete_task("Finish project")

# Display completed tasks
manager.display_completed_tasks()

# Delete a task
manager.delete_task("Grocery shopping")
```

## Contributing

If you would like to contribute to this project, feel free to fork the repository and submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

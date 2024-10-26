class Task:
    def __init__(self, title, description):
        self.title = title
        self.description = description
        self.completed = False

    def mark_completed(self):
        self.completed = True

    def __str__(self):
        status = "✔" if self.completed else "✖"
        return f"{self.title} - {self.description} [{status}]"


class TaskManager:
    def __init__(self):
        self.tasks = []

    def add_task(self, title, description):
        task = Task(title, description)
        self.tasks.append(task)
        print(f"Task '{title}' added successfully!")

    def complete_task(self, title):
        for task in self.tasks:
            if task.title == title:
                task.mark_completed()
                print(f"Task '{title}' marked as completed.")
                return
        print(f"Task '{title}' not found.")

    def delete_task(self, title):
        for task in self.tasks:
            if task.title == title:
                self.tasks.remove(task)
                print(f"Task '{title}' deleted successfully.")
                return
        print(f"Task '{title}' not found.")

    def display_tasks(self):
        if not self.tasks:
            print("No tasks available.")
            return
        print("\nTasks:")
        for task in self.tasks:
            print(task)

    def display_completed_tasks(self):
        completed_tasks = [task for task in self.tasks if task.completed]
        if not completed_tasks:
            print("No completed tasks available.")
            return
        print("\nCompleted Tasks:")
        for task in completed_tasks:
            print(task)


# Example Usage
if __name__ == "__main__":
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
    
    # Display all tasks
    manager.display_tasks()
    
    # Delete a task
    manager.delete_task("Grocery shopping")
    
    # Display tasks after deletion
    manager.display_tasks()

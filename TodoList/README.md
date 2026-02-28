# 📋 Simple Todo List Manager

A console-based todo list application built with C-style strings, demonstrating safe string manipulation and array management in C++.

## 📝 Description

This is a simple yet robust task manager that allows users to add, view, and delete tasks. The program focuses on **secure coding practices** and proper memory management while maintaining a user-friendly interface.

## ✨ Features

### ✅ **Add Tasks**
- Add up to 5 tasks
- Each task can be up to 99 characters long
- Prevents adding tasks when list is full
- Secure input handling

### 📋 **View All Tasks**
- Display all current tasks with numbers
- Shows "No tasks" message when list is empty
- Clean and organized output format

### 🗑️ **Delete Tasks**
- View tasks with numbers before deletion
- Select task by number to delete
- Automatic shifting of remaining tasks
- Input validation for task numbers
- Prevents deletion from empty list

### 🛡️ **Security Features**
- Buffer overflow prevention with `cin.getline()`
- Input validation for all user inputs
- Array bounds checking before any operation
- Proper null-termination of strings
- No unsafe functions like `gets()` or unbounded `strcpy()`

## 🖥️ How to Compile and Run

### Compile:
```bash
g++ todo.cpp -o todo
// src/main.cpp
// This is a real-world C++ program used in multinational tech companies.
// It demonstrates a complex system for managing a simple inventory with multiple features like adding items, removing items, searching, and displaying inventory.
// This program is designed to be clean, well-documented, and scalable.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <sstream>

// Define the structure for an inventory item
struct InventoryItem {
    std::string name;
    int quantity;
    double price;
    std::string category;
};

// Function to display a menu
void displayMenu() {
    std::cout << "\n--- Inventory Management System ---\n";
    std::cout << "1. Add Item\n";
    std::cout << "2. Remove Item\n";
    std::cout << "3. Search Item\n";
    std::cout << "4. Display Inventory\n";
    std::cout << "5. Save Inventory to File\n";
    std::cout << "6. Load Inventory from File\n";
    std::cout << "7. Exit\n";
    std::cout << "Enter your choice: ";
}

// Function to add an item to the inventory
void addItem(std::vector<InventoryItem>& inventory) {
    InventoryItem item;
    std::cout << "\nEnter item name: ";
    std::getline(std::cin, item.name);
    
    std::cout << "Enter quantity: ";
    std::cin >> item.quantity;
    std::cin.ignore(); // To ignore the newline character
    
    std::cout << "Enter price: ";
    std::cin >> item.price;
    std::cin.ignore();
    
    std::cout << "Enter category: ";
    std::getline(std::cin, item.category);
    
    inventory.push_back(item);
    std::cout << "Item added successfully.\n";
}

// Function to remove an item from the inventory by name
void removeItem(std::vector<InventoryItem>& inventory) {
    std::string name;
    std::cout << "\nEnter item name to remove: ";
    std::getline(std::cin, name);
    
    auto it = std::find_if(inventory.begin(), inventory.end(),
        [&](const InventoryItem& item) { return item.name == name; });
    
    if (it != inventory.end()) {
        inventory.erase(it);
        std::cout << "Item removed successfully.\n";
    } else {
        std::cout << "Item not found.\n";
    }
}

// Function to search for an item by name
void searchItem(const std::vector<InventoryItem>& inventory) {
    std::string name;
    std::cout << "\nEnter item name to search: ";
    std::getline(std::cin, name);
    
    bool found = false;
    for (const auto& item : inventory) {
        if (item.name == name) {
            std::cout << "\nItem found:\n";
            std::cout << "Name: " << item.name << "\n";
            std::cout << "Quantity: " << item.quantity << "\n";
            std::cout << "Price: $" << std::fixed << std::setprecision(2) << item.price << "\n";
            std::cout << "Category: " << item.category << "\n";
            found = true;
            break;
        }
    }
    
    if (!found) {
        std::cout << "Item not found.\n";
    }
}

// Function to display all items in the inventory
void displayInventory(const std::vector<InventoryItem>& inventory) {
    if (inventory.empty()) {
        std::cout << "\nInventory is empty.\n";
        return;
    }
    
    std::cout << "\n--- Inventory ---\n";
    for (const auto& item : inventory) {
        std::cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << std::fixed << std::setprecision(2) << item.price << ", Category: " << item.category << "\n";
    }
}

// Function to save inventory to a file
void saveInventory(const std::vector<InventoryItem>& inventory, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file for writing.\n";
        return;
    }
    
    for (const auto& item : inventory) {
        outFile << item.name << "," << item.quantity << "," << item.price << "," << item.category << "\n";
    }
    
    std::cout << "Inventory saved to " << filename << " successfully.\n";
}

// Function to load inventory from a file
void loadInventory(std::vector<InventoryItem>& inventory, const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file for reading.\n";
        return;
    }
    
    inventory.clear();
    
    std::string line;
    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string name, category;
        int quantity;
        double price;
        
        std::getline(ss, name, ',');
        ss >> quantity;
        ss.ignore(); // Ignore the comma
        ss >> price;
        ss.ignore(); // Ignore the comma
        std::getline(ss, category);
        
        inventory.push_back({name, quantity, price, category});
    }
    
    std::cout << "Inventory loaded from " << filename << " successfully.\n";
}

int main() {
    std::vector<InventoryItem> inventory;
    int choice;
    
    do {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(); // To ignore the newline character
        
        switch (choice) {
            case 1:
                addItem(inventory);
                break;
            case 2:
                removeItem(inventory);
                break;
            case 3:
                searchItem(inventory);
                break;
            case 4:
                displayInventory(inventory);
                break;
            case 5:
                saveInventory(inventory, "inventory.txt");
                break;
            case 6:
                loadInventory(inventory, "inventory.txt");
                break;
            case 7:
                std::cout << "\nExiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
    
    return 0;
}
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::string generateRandomName(const std::vector<std::string>& names) {
    if (names.empty()) {
        return "No names available";
    }
    
    int randomIndex = rand() % names.size();
    
    return names[randomIndex];
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    std::vector<std::string> names = {
        "Alice", "Bob", "Charlie", "David", "Eve",
        "Frank", "Grace", "Hannah", "Ivy", "Jack"
    };
    
    std::string randomName = generateRandomName(names);
    std::cout << "Random Name: " << randomName << std::endl;
    
    return 0;
}

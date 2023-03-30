#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
int main() {
    std::map<int, std::string> registryMap;
    std::vector<std::string> registryVec;
    std::string input;
    int position = 0;

    while (getline(std::cin, input)) {
        if (input == "Next" || input == "next") {
            if (registryMap.empty()) {
                std::cerr << "The registry is empty" << std::endl;
                return -1;
            } else {
                std::cout << *registryVec.begin() << std::endl;
                registryMap.erase(registryMap.begin());
                registryVec.erase(registryVec.begin());
            }
        } else {
            std::stringstream buffer(input);
            std::string surname;

            while (buffer >> surname) {
                registryMap[position] = surname;
                registryVec.push_back(surname);
                position++;
            }
            std::sort(registryVec.begin(), registryVec.end());
        }
    }
    return 0;
}


//#include <iostream>
//#include <map>
//#include <string>
//#include <sstream>
//int main() {
//    std::map<int, std::string> registry;
//    std::string input;
//    int i = 0;
//
//    while (getline(std::cin, input)) {
//        if (input == "Next" || input == "next") {
//            if (registry.empty()) {
//                std::cout << "The registry is empty" << std::endl;
//            } else {
//                std::cout << registry.begin()->second << std::endl;
//                registry.erase(registry.begin());
//            }
//        } else {
//            std::stringstream buffer(input);
//            std::string surname;
//
//            while (buffer >> surname) {
//                registry[i] = surname;
//                i++;
//            }
//        }
//    }
//
//    return 0;
//}
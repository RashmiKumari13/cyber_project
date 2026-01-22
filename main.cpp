#include "include/Scanner.hpp"

int main() {
    std::string target = "127.0.0.1"; // Scan yourself safely first!
    Scanner myScanner(target, 2);
    
    std::cout << "Starting scan on " << target << "...\n";
    myScanner.scan_range(1, 1024);
    
    return 0;
}

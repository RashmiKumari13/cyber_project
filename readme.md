Simple-Port-Scanner 🚀
A high-performance, asynchronous TCP port scanner built with C++20 and Boost.Asio.
📖 Overview
    This project is a network utility designed to identify open ports on a target host. Unlike traditional scanners that check ports one-by-one, this scanner uses Asynchronous I/O to send multiple connection requests simultaneously, making it significantly faster.
    Key Features
        Asynchronous Networking: Uses boost::asio for non-blocking connections.
        Multi-threaded: Capable of handling hundreds of concurrent probes.
        Service Mapping: Automatically identifies common services (HTTP, SSH, FTP, etc.) based on port numbers.
        Banner Grabbing: Attempts to read the service's welcome message upon connection.
        
🛠 Prerequisites
Before building this project, ensure you have the following installed:
C++ Compiler: GCC 11+, Clang 13+, or MSVC 2022+.
CMake: Version 3.31 or higher.
Boost Libraries: Specifically the system and program_options components.

Installation (Linux/Ubuntu)
Bashsudo apt-get update
sudo apt-get install build-essential cmake libboost-all-dev

🚀 How to Build and Run
Clone the repository:git clone https://github.com/RashmiKumari13/cyber_project
cd simple-port-scanner

Build the project:
mkdir build && cd build
cmake ..
make

Run a scan:
# Scan ports 1-1024 on your own machine
./simplePortScanner -i 127.0.0.1 -p 1-1024 -t 100

⚙️ Command Line Options
Flag,Description,Default
"-h, --help",Show help message,N/A
"-i, --dname",Target IP address or Domain,127.0.0.1
"-p, --ports","Port range (e.g., 1-1000)",1-1024
"-t, --threads",Max concurrent threads,100
"-e, --expiry",Timeout in seconds,2

⚠️ Disclaimer
Educational Purpose Only. This tool is created for learning network protocols and C++ concurrency. Do not use this tool against any systems you do not own or have explicit, written permission to test. Unauthorized scanning can be illegal and is easily detected by firewalls. 

👨‍💻 Author  RASHMI KUMARI - [https://github.com/RashmiKumari13]
#include "Scanner.hpp"
#include <iostream>

using boost::asio::ip::tcp;

Scanner::Scanner(std::string target_ip, int timeout_sec) 
    : ip(target_ip), timeout(timeout_sec) {}

void Scanner::scan_range(int start_port, int end_port) {
    for (int p = start_port; p <= end_port; ++p) {
        connect_to_port(p);
    }
    io_context.run(); 
}

void Scanner::connect_to_port(int port) {
   
    auto socket = std::make_shared<tcp::socket>(io_context);
    tcp::endpoint endpoint(boost::asio::ip::make_address(ip), port);

    socket->async_connect(endpoint, [port, socket](const boost::system::error_code& ec) {
        if (!ec) {
            std::cout << "[+] Port " << port << " is OPEN\n";
        }
  
    });
}
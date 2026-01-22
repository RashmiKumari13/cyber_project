#pragma once
#include <boost/asio.hpp>
#include <vector>
#include <string>

class Scanner {
public:
    Scanner(std::string target_ip, int timeout_sec);
    void scan_range(int start_port, int end_port);

private:
    void connect_to_port(int port);
    
    boost::asio::io_context io_context;
    std::string ip;
    int timeout;
};
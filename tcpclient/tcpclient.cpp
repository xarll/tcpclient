#include <iostream>

#include "Client.h"

int main()
{
    setlocale(LC_ALL, "rus");

    const char* addresses = "127.0.0.1";
    const char* port = "27015";

    std::string result = request(Client(addresses, port), "������");
    std::cout << "�� �������: " << result << std::endl;

    std::string result2 = request(Client(addresses, port), "������");
    std::cout << "�� �������: " << result2 << std::endl;

    

    return 0;
}
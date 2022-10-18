// ѕо книге "–азработка многопользовательских игр"

#include "Header.h"
#include <iostream>

int main()
{
    // 2-байтное слово, младший байт которого опедел€ет старший
    // номер желаемой версии Winsock, а старший байт - младший.
    WORD wVersionRequested = MAKEWORD(2, 2);
    // ”казатель на структуру данных, котора€ будет заполнена с
    // помощью WSAStartup() информацией об активированной
    // библиотеке.
    WSADATA wsaData;
    // јктивирует библиотеку сокетов Winsock2.h
    int result = WSAStartup(wVersionRequested, &wsaData);
    if (result != NO_ERROR)
    {
        std::cout << "WSAStartup Error" << std::endl;
        return -1;
    }
    
    
    // «авершает использование библиотеки Winsock2.h
    WSACleanup();
}
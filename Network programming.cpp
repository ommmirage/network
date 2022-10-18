// �� ����� "���������� ��������������������� ���"

#include "Header.h"
#include <iostream>

int main()
{
    // 2-������� �����, ������� ���� �������� ��������� �������
    // ����� �������� ������ Winsock, � ������� ���� - �������.
    WORD wVersionRequested = MAKEWORD(2, 2);
    // ��������� �� ��������� ������, ������� ����� ��������� �
    // ������� WSAStartup() ����������� �� ��������������
    // ����������.
    WSADATA wsaData;
    // ���������� ���������� ������� Winsock2.h
    int result = WSAStartup(wVersionRequested, &wsaData);
    if (result != NO_ERROR)
    {
        std::cout << "WSAStartup Error" << std::endl;
        return -1;
    }
    
    
    // ��������� ������������� ���������� Winsock2.h
    WSACleanup();
}
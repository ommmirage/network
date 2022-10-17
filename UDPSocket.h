#include "Header.h"

class UDPSocket
{
public:
	~UDPSocket();

private:

	SOCKET mSocket;
};

UDPSocket::~UDPSocket()
{
	closesocket(mSocket);
}
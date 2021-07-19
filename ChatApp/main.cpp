#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

using namespace std;

void main() {

	// Initalize winsock
	WSADATA wsData;
	WORD ver = MAKEWORD(2, 2);

	int wsOK = WSAStartup(ver, &wsData);
	if (wsOK != 0) {
		cerr << "Can't Initialize winsock! Quitting" << endl;
		return;
	}

	// Create a socket
	SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == INVALID_SOCKET) {
		cerr << "can't create a socket! Quitting" << endl;
		return;
	}

	// Bind the socket to an ip address and port

	// Tell winsock the socket is for listening

	// wait for a connection

	// close listening socket

	// while loop: accept and echo message back to client

	// close the sock

	// Shutdown winsock






}
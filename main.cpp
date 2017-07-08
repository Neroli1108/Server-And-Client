#include"ClientNetwork.h"
#include"ServerNetwork.h"
#include<process.h>
#include<thread>
void serverLoop(void *);
ServerNetwork* server;
ClientNetwork* client;
int main(int argc, char *argv[]) {

	server = new ServerNetwork();
	
	//std::thread first(serverLoop);
	_beginthread(serverLoop, 0, (void*)12);
	client = new ClientNetwork();

	system("Pause");
}
void serverLoop(void * arg)
{
	while (true)
	{
		server->update();
	}
}
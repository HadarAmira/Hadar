#include <iostream>
#include <vector>
#include "NameList.h"

using namespace std;
NameList::NameList(GamesManager* games, pthread_mutex_t* mutex) :
	games(games), mutex(mutex) {
}

void NameList::execute(int client) {

	pthread_mutex_lock(mutex);
	vector<string>* names = games->getNames();
	pthread_mutex_unlock(mutex);
	//send size to client
	int size = names->size();
	write(client, &size, sizeof(size));
	//write all names to client
	for (vector<string>::iterator it = names->begin(); it != names->end(); ++it) {
		const char * source = (*it).c_str();
		StringHandler::writeString(client, (*it).length(), source);
	}
	//close client
	close(client);
}

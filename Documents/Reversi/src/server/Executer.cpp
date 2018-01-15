
#include "Executer.h"

void* Executer::run(void* det) {
	connDet* details = (connDet*) det;
	details->cm->executeCommand(details->client);
	return NULL;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include  <sys/ipc.h>
#include <signal.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <sys/socket.h>
#include <netdb.h>
#include <time.h>

#define PORT_NUM 6743

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
		time_t rightnow;
		if (time(&rightnow) == -1) {
			printf("damn howd you get a computer before 1970?.\n");
			exit(1);
		} //want to add in a "Wanna know the time? Y/N"
		printf("time to get a watch lmaoooo\n");
		//need to figure out a way to include a time delay without having a billion extra headers
		//probably can do something with the time function and adding time?
		printf("jk the time is %s", ctime(&rightnow));
		return 0;
}
/*int main () {
    time_t curtime;
     
    time(&curtime);
     
    printf("Current time = %s", ctime(&curtime));
     
    return(0);
}*/

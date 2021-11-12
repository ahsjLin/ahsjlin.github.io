// test for raspberry pi4
#include <iostream>
#include <unistd.h> // fork()

using namespace std;
int main(){
	pid_t pid = fork();
	if(pid < 0 ){
		cout << "fork error" << endl;
	}
	else if (pid  > 0){
		cout << "father pid " << pid << endl;
	}
	else{
		cout << "child pid " << pid << endl;
	}
	// show test loop
	for(int i=0; i<10; i++){
		if(pid)
			cout << "parent" << endl;
		else
			cout << "child" << endl;
	}
	return 0;
}

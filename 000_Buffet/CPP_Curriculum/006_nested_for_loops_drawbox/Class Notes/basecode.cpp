// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	for(int y = 0; y < 4; y++){
		for(int x = 0; x < 6; x++){
			gotoxy(x+10,y+6);
			cout << "*";
		}
		cout << endl;
	}

}

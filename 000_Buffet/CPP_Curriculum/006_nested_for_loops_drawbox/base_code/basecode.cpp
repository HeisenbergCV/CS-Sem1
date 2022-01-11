// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
char sym;
cout << "Input a snowflake" << endl;
cin >> sym;

for(int i = 0; i <5; i++){
	
	gotoxy(10,7+i);
cout << sym << endl;
sleep(1);
gotoxy(10,7+i);
cout << ' '<< endl;

for(int i = 0; i <1; i++){
	
	gotoxy(10+i,7);
cout << sym << endl;
sleep(1);
gotoxy(10+i,7);
cout << ' ';
}
}












}





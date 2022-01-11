// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	



int i;
char sym;
int van;
char dog;
cout << "how long would you like your line?" << endl;
cin >> van;
cout << "what direction would you like your line to go in?" << endl;
cin >> dog;
cout << "what symbol would you like your line to be made of?" << endl;
cin >> sym;


if (dog == 'd'){
	for (int i = 0; i <= van; i++){
	gotoxy(i+van,i+van);
	cout << sym<<endl;
}

if (dog == 'h'){
for(i= 0 ;i <= van ; i++){
		cout << sym;
	}
}
}






}


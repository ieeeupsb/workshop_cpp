#include <iostream>
#include <string>

using namespace std;

void encrypt(string &str, int key){
	int i;
	for (int i=0; i < str.size(); i++){
        	if (str[i] >= 'A' && str[i] <= 'Z'){
            		str[i] = ((str[i] + key - 'A') % 26) + 'A';
            		
        	}
        	else if (str[i] >= 'a' && str[i] <= 'z'){
            		str[i] = ((str[i] + key - 'a') % 26) + 'a';
        	}
    	}
}

void decrypt(string &str, int key){
	 encrypt(str, 26 - (key % 26));
}


int main () {

   string str;
   char c;
   int key;
   cout << "Enter d(ecryption) e(ncryption): ";
   cin >> c;
   if( c != 'd' && c != 'e'){
   	cout << "Enter a valid character " << endl;
    	return -1;
   }	
   cout << "Enter the string: ";
   cin >> str;
   cout << "Enter the key: ";
   cin >> key;
   if( c == 'e')
   	encrypt(str, key);
   else if( c == 'd')
   	decrypt(str, key);
   
   cout << str << endl;
   return 0;
}

#include <bits/stdc++.h>
#include <conio.h>

using namespace std;
// Function by Peter Joseph & Mina Magdy -> 27 / 4 / 2022 ❤️
void set_Password(char *get_in, int sz){
    for (int i = 0; i < sz;) {
        char ch = getch();
        if (ch == 13) {
            get_in[i] = '\0';
            break;
        }
        else if(ch != 8){
            get_in[i++] = ch;
            putch('*');
        }
        else if(i > 0)
            cout << "\b \b",get_in[i--] = '\0';
    }
    cout << '\n';
}

int main() {
    int sz = 20;
	char Pass[sz];
    cout << "Please Enter the Password: ";
    set_Password(Pass, sz);
	cout <<"Your Password is: " << Pass;
	return 0;
}

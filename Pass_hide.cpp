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
cout << "\n";

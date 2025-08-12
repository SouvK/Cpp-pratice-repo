#include<iostream>
using namespace std;

// -------------------- Function Declarations--------------------------------------
int strlength(char *str);
int checkPalindromStringOrNot(char *str);
// --------------------------------------------------------------------------------

// --------------------Function Defination----------------------------------------

int strlength(char *str){
    int i=0;
    for (i = 0; str[i]; i++);
    return i;
}
int checkPalindromStringOrNot(char *str){
    int i=0,length=strlength(str),k=length-1;
    for(i=0;i<length/2;i++,k--)
    {
        if(str[i] != str[k]){
            return 0;
        }
    }
    return 1;
}
void trimSpaces(char *str){
    int i=0,k=0;
    char temp[strlength((str)) + 1];
    while (str[i]!='\0')
    {
        if(str[i]!=' '){
            temp[k] = str[i];
            k++;
        }
        i++;
    }
    temp[k] = '\0';
    for ( i = 0; temp[i]; i++)
        str[i] = temp[i];
    str[i] = '\0';
}
// --------------------------------------------------------------------------------

int main(){
    char str[] = "madam";
    trimSpaces(str);
    checkPalindromStringOrNot(str) == 1 ? cout<<"it is a palindrom string " : cout<<"it is not a palindrom string ";
    return 0;
}
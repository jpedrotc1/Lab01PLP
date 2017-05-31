#include <iostream>

using namespace std;

char searchCharByIndex(string word,int index);


int main(){

    int index1,index2,index3,index4;
    string word1,word2,word3,word4;
    string password = "";

    cin >> index1;
    cin >> index2;
    cin >> index3;
    cin >> index4;
    cin >> word1;
    cin >> word2;
    cin >> word3;
    cin >> word4;

    password += searchCharByIndex(word1,index1);
    password += searchCharByIndex(word2,index2);
    password += searchCharByIndex(word3,index3);
    password += searchCharByIndex(word4,index4);


    cout << password;


}

char searchCharByIndex(string word,int index){

    for(int i = 0; i <= index; i++){
        if(i == index ){
           return word[i];
        }
    }

}




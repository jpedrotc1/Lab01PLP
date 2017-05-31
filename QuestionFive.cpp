#include <iostream>

using namespace std;

bool canAdd(int* myArray,int sizeA,int number);

int main (){

    int arraySize,value,newSize,j = 0;
    cin >> arraySize;
    int myArray[arraySize - 1];

    for(int i = 0; i < arraySize; i++){
        cin >> value;
        if(canAdd(myArray,arraySize,value)){
           newSize++;
        }
        myArray[i] = value;
    }


    int newArray[newSize];
    for(int i = 0; i < arraySize; i++){
        if(canAdd(newArray,newSize,myArray[i])){
            newArray[j] = myArray[i];
            j++;
        }
    }

    for(int i = 0; i < newSize; i ++){
        cout << newArray[i] << " ";
    }

}

bool canAdd(int* myArray,int sizeA,int number){
    for(int i = 0; i < sizeA; i ++){
        if(myArray[i] == number){
            return false;
        }
    }
    return true;
}




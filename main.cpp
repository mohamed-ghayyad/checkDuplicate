#include<iostream>
using namespace std;

template <typename T>
T checkDuplicate(T arr[], int size){
    bool status = false;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout << arr[i] << " is a duplicated number." << endl;
                status = true;
            }
        }
    }
    if(status==false){
        cout << "There is no duplicated number." << endl;
    }
    return 0;
}

int main(int argc, char** argv){
    float num1[4] = {0,1,2.5,2.5};
    for(int i=0;i<4;i++){
        cin >> num1[i];
    }
    checkDuplicate(num1,4);
    return 0;
}

#include<iostream>
#include<vector>

template<typename T>
class InsertionSort{
    public:
    void sort(std::vector<T> &arr){
        for(int i=1; i<arr.size(); i++){
            T key = arr[i];
            int j = i-1;
            while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }
    }
    void print(std::vector<T> &arr){
        for(int i=0; i<arr.size(); i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};



int main(){
    std::vector<std::string> arr = {"banana", "apple", "orange", "grapes"};
    InsertionSort<std::string> is;
    is.print(arr);
    is.sort(arr);
    is.print(arr);
    return 0;
}

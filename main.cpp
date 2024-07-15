#include <iostream>
#include <unordered_set>
#include <vector>
#include <limits>
#include <string>
using namespace std;

template <typename T>
void checkDuplicates(const vector<T> &arr)
{
    unordered_set<T> seen;
    bool foundDuplicate = false;

    for (const auto &element : arr)
    {
        if (seen.find(element) != seen.end())
        {
            cout << element << " is duplicated." << endl;
            foundDuplicate = true;
        }
        else
        {
            seen.insert(element);
        }
    }

    if (!foundDuplicate)
    {
        cout << "There are no duplicates." << endl;
    }
}

template <typename T>
T Swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
template <typename T, typename S>
S add(T a, S b)
{
    return a + b;
}

template <typename S>
S reverse_string(S rstring)
{
    return std::string(rstring.rbegin(), rstring.rend());
}

template <typename T, typename S>
struct Pair
{
    T first;
    S second;
    Pair(T f, S s) : first(f), second(s){};
};

int main(int argc, char **argv)
{
    vector<int> num1 = {1, 2, 3, 4};
    vector<std::string> names = {"Mohamed", "Mohamed", "John", "Ahmed"};
    string mohamed = "Mohamed";
    vector<int> numbers;
    int input;
    char choice = 'a';
    cout << "Please enter numbers (type 'n' to stop):" << endl;
    while (true)
    {
        cout << "Enter a number: ";
        while (!(cin >> input))
        {
            cin.clear();                                         // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number: ";
        }
        numbers.push_back(input);

        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    }

    checkDuplicates(numbers);
    checkDuplicates(names);
    int maxi = 5, mini = 3.0;
    Swap(&maxi, &mini);
    std::cout << add(maxi, mini) << endl;
    std::cout << reverse_string(mohamed) << endl;
    std::cout << maxi << " " << mini << endl;
    Pair<int, string> p(1, "Mohamed");
    Pair<int, Pair<string, int>> p2(2, {"Mohamed", 3});
    Pair<int, Pair<string, int>> p3 = {3, {"Mohamed", 2}};
    std::cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    std::cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;
    return 0;
}

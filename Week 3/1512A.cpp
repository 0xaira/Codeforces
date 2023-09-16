#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findUniqueIndex() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& num : arr) {
        cin >> num;
    }
    unordered_map<int, int> countMap;

    // Count the occurrences of each element in the array
    for (int num : arr) {
        countMap[num]++;
    }

    // Find the element with a count of 1 (unique element)
    for (int i = 0; i < arr.size(); i++) {
        if (countMap[arr[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    int tc;
    cin>>tc;
    while(tc--){
    int uniqueIndex = findUniqueIndex();  
    if (uniqueIndex != -1) {
        cout << uniqueIndex+1 << endl;
    }
    }  

}

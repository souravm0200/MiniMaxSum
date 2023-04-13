#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<long long> arr(5); // using vector to store the integers
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end()); // sorting the vector
    
    long long min_sum = arr[0] + arr[1] + arr[2] + arr[3];
    long long max_sum = arr[1] + arr[2] + arr[3] + arr[4];
    
    cout << min_sum << " " << max_sum << endl; // outputting the minimum and maximum sums
    return 0;
}

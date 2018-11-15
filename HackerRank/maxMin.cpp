#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    //cout << n << endl;
    int ans = INT_MAX;
    for(int i = 0; i < n - k + 1; i++){
        //cout << arr[i] << " " << arr[i+k-1] << endl;
        if(arr[i+k-1] - arr[i] < ans){
            ans = arr[i+k-1] - arr[i];
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

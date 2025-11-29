#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int records[100];
    for(int i = 0; i < n; i++) {
        cin >> records[i];
    }

    int totalProfit = 0, totalLoss = 0;

    for(int i = 0; i < n; i++) {
        if(records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += (-records[i]);  // convert negative to positive
    }

    int netBalance = totalProfit - totalLoss;

    cout << "Input:\n";
    cout << n << endl;
    for(int i = 0; i < n; i++) {
        cout << records[i] << " ";
    }
    cout << "\n\nOutput:\n";

    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
} 

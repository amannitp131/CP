#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    vector<int> row(m, 1); // To track if a row can be entirely 1
    vector<int> col(n, 1); // To track if a column can be entirely 1

    bool allZero = true; // To track if the entire matrix is zero

    // Input the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                allZero = false; // If there is at least one 1, it's not all zero
            }
            if (matrix[i][j] == 0) {
                // Mark that row i and column j cannot be fully 1
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    // Step 1: If the entire matrix is zero, return YES with a zero matrix
    if (allZero) {
        cout << "YES" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << 0 << " ";
            }
            cout << endl;
        }
        return 0;
    }

    // Step 2: Ensure there is at least one entire row and one entire column with all 1s
    bool entireRowExists = false;
    bool entireColExists = false;

    for (int i = 0; i < m; i++) {
        if (row[i] == 1) {
            entireRowExists = true;
            break;
        }
    }

    for (int j = 0; j < n; j++) {
        if (col[j] == 1) {
            entireColExists = true;
            break;
        }
    }

    // If no entire row or column is all 1s, return NO
    if (!entireRowExists || !entireColExists) {
        cout << "NO" << endl;
        return 0;
    }

    // Step 3: Check the condition for the input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                if (row[i] == 0 && col[j] == 0) {
                    // Neither the row i nor the column j can be fully 1
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    // Step 4: Construct the output matrix based on row and col arrays
    cout << "YES" << endl;
    vector<vector<int>> result(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] == 1 && col[j] == 1) {
                result[i][j] = 1;
            }
        }
    }

    // Step 5: Print the resulting matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

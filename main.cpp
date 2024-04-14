#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;





int main() {
    int n = 8;
    int v[] {1,6,2,8,3,5,12,23};
    for (int i = 1; i < n; i++){
        for (int j = i; (j > 0) && (v[j] < v[j - 1]); j--) {
            int c;

            c = v[j];
            v[j] = v[j - 1];
            v[j - 1] = c;
        }
    }
    for (int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

Change Theme
C++
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
#include <bits/stdc++.h>
 using namespace std;
   int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
         for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
     return 0;
}
 
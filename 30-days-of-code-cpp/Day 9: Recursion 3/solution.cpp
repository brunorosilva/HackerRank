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
23
24
25
26
27
#include <bits/stdc++.h>
 using namespace std;
 // Complete the factorial function below.
int factorial(int n) {
  }
 int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
     int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
     int result = factorial(n);
     fout << result << "\n";
     fout.close();
     return 0;
}
 
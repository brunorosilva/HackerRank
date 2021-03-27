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
28
29
30
31
32
33
34
35
36
37
#include <bits/stdc++.h>
 using namespace std;
 vector<string> split_string(string);
   int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
     string arr_temp_temp;
    getline(cin, arr_temp_temp);
     vector<string> arr_temp = split_string(arr_temp_temp);
     vector<int> arr(n);
     for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
         arr[i] = arr_item;
    }
     return 0;
}
 vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] 
(const char &x, const char &y) {
        return x == y and x == ' ';
    });
     input_string.erase(new_end, input_string.end());
 
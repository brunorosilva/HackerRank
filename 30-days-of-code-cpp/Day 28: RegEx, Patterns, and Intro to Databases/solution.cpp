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
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
     for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);
         vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);
         string firstName = firstNameEmailID[0];
         string emailID = firstNameEmailID[1];
    }
     return 0;
}
 vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] 
(const char &x, const char &y) {
        return x == y and x == ' ';
    });
     input_string.erase(new_end, input_string.end());
     while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
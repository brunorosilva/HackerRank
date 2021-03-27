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
38
#include <bits/stdc++.h>
 using namespace std;
 string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 /*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */
 int bitwiseAnd(int N, int K) {
 }
 int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
     string t_temp;
    getline(cin, t_temp);
     int t = stoi(ltrim(rtrim(t_temp)));
     for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);
         vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
         int count = stoi(first_multiple_input[0]);
 
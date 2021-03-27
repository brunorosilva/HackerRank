Change Theme
C++
1
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
using namespace std;
 class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };
     Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
     }
     void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the 
console 
     }
     void Person::yearPasses(){
        // Increment the age of the person in here
     }
 int main(){
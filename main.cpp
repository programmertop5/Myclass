#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
    String s1;
    String s2("Hi");
    String s3("Programming");

    s1.print();
    s2.print();
    s3.print();

    s1.push_back('A'); 
    s1.push_back('B');
    s1.print();
    s1.pop_back(); 
    s1.print();

    s1.append("Karate!"); 
    s1.print();
    s1.assign("I like programming"); 
    s1.print();

    cout << "s1.find('w'): " << s1.find('K') << endl;
    cout << "s1.find('S'): " << s1.find('e') << endl;
    cout << "s1.find('Z'): " << s1.find('x') << endl;

    String s4("Hello");
    s4.print();
    s4.clear(); s4.print();

    return 0;
}

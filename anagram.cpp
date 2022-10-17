#include <iostream>
#include <vector>
#include <list>
using namespace std;

void printList(const list<double>);

int main(){
vector<int> vec;
list<double> li;

for (int i = 0; i < 5; i++) 
{
vec.push_back(i);
li.push_back(i + 0.5);
}

// Erase each element one by one, beginning with the
// last
vector<int>::iterator it = vec.end();

//decrement the iterator it by one because a vector is printed from vec.begin() to vec.end()-1
it--;

while (it >= vec.begin()) 
{
cout << *it << endl;
vec.erase(it);
it--;
}

printList(li);

return 0;
}

//the constant keyword is not allowed in the below function 
//void printList(const list<double> l)
void printList(list<double> l)
{
// Print out the list
for (list<double>::iterator it2 = l.begin(); it2 != l.end(); it2++)
{
cout << *it2 << endl;

//we are increment the iterator it2 in the for() loop itself
//as highlighted as bold in the above for() loop
//so no need to increment the iterator it2 again
//it2++;
}

return;
}
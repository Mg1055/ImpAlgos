#include <iostream>
using namespace std;

void subSets(string s, string cur ="", int i = 0)
{
    if(i == s.length())
    {
        cout << cur << " ";
        return;
    }
    subSets(s,cur,i+1);
    subSets(s,cur+s[i],i+1);
}

int main() {
	string s;
	cin >> s;
	subSets(s);
	return 0;
}
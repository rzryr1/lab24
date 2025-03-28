#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");

	line_up.push_back("Nami");
    line_up.push_front("Narutu");
    
    loc = find(line_up.begin(), line_up.end(), "Alice");
    line_up.insert(loc, "Sanji");
    
	line_up.remove("Alice");
    line_up.remove("Bob");
	line_up.remove("Oscar");
	
	printList(line_up);
		
	return 0;
}

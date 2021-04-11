//============================================================================
// Name        : StlAdvanced.cpp
// Author      : Pratik Mhatre
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

class Student{
	string name;
	int age;

public:
	Student(string name="Nothing",int age=0){
		this->name=name;
		this->age=age;
	}

	bool operator<(const Student& second)const{
		return age<second.age;
	}

	friend std::ostream& operator<<(std::ostream& os, const Student& obj)
	{
	    os<<obj.name<<" :: "<<obj.age;
	    return os;
	}

	void print() const{
		cout<<name<<" "<<age<<endl;
	}
};

void MySet(){
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);

	s1.insert(30);
	cout<<"s1: ";
	set<int>::iterator itr=s1.begin();
	while(itr!=s1.end())
	{
		cout<<*itr<<" ";
		itr++;
	}

	cout<<"\ns2: ";
	set<int,greater<int>> s2;
	s2.insert(10);
	s2.insert(30);
	s2.insert(40);
	s2.insert(20);

	s2.insert(20);

	itr=s2.begin();
	while(itr!=s2.end())
	{
		cout<<*itr<<" ";
		itr++;
	}

	set<int> s3({10,20,40,30,20,50}); //set<int> s3(s1.begin(),s1.end());
	cout<<"\ns3: ";
	itr=s3.begin();
	while(itr!=s3.end())
	{
		cout<<*itr<<" ";
		itr++;
	}

	cout<<"\nSize: "<<s1.size();
	cout<<"\nMaxSize: "<<s1.max_size();

	s3.erase(s3.begin(), s3.find(30));
	cout<<"\ns3: ";
	itr=s3.begin();
	while(itr!=s3.end())
	{
		cout<<*itr<<" ";
		itr++;
	}

    // lower bound and upper bound for set s1
    cout << "\ns1.lower_bound(35) : "
         << *s1.lower_bound(30);
    cout << "\ns1.upper_bound(35) : "
         << *s1.upper_bound(30);

}

void MySetObject(){
	set<Student> st1;

	st1.insert(Student("John",22));
	st1.insert(Student("Michael",28));
	st1.insert(Student("Steve",23));
	st1.insert(Student("Nick",24));

	set<Student>::iterator itr=st1.begin();
	while(itr!=st1.end())
	{
		(*itr).print();
		//cout<<*itr<<endl;
		itr++;
	}

}

int main() {
	MySetObject();
	return 0;
}

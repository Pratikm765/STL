//============================================================================
// Name        : stl.cpp
// Author      : Pratik Mhatre
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <list>
#include <deque>
#include <iterator>
#include <array> // for array, at()
#include <tuple> // for get()
#include <queue>
#include <bits/stdc++.h> // for stack
#define PRINT(A,B) cout<<A<<": "<<B<<endl;
using namespace std;

void show(int a[])
{
    for(int i = 0; i < 10; ++i)
        cout << a[i] << " ";
    cout<<endl;
}

void algorithm(){
	//Algorithm:Sorting//
	int a[10]={20,70,10,50,60,50,80,50,40,100};
	vector<int> vect(a,a+10);
	sort(a,a+10);
	show(a);

	//Algorithm:Searching//
	cout<<binary_search(a,a+10,50)<<endl;

	//Algorithm:other//
	for (int i=0; i<10; i++)
	       cout << vect[i] << " ";
	cout<<endl;
	sort(vect.begin(),vect.end());
	for (int i=0; i<10; i++)
	       cout << vect[i] << " ";
	cout<<endl;
	//reverse(vect.begin(),vect.end());
	for (int i=0; i<10; i++)
		       cout << vect[i] << " ";
	cout<<endl;
	PRINT("Max",*max_element(vect.begin(),vect.end()));
	PRINT("Min",*min_element(vect.begin(),vect.end()));
	PRINT("SUM",accumulate(vect.begin(),vect.end(),0));
	PRINT("COUNT",count(vect.begin(),vect.end(),10));
	PRINT("IS_PRESENT",(find(vect.begin(),vect.end(),30)!=vect.end()));

	auto lw=lower_bound(vect.begin(),vect.end(),50);
	cout<< "Lower: "<< lw-vect.begin()<<endl ;
	auto up=upper_bound(vect.begin(),vect.end(),50);
	cout<< "Upper: "<< up-vect.begin()<<endl ;

	for (int i=0; i<10; i++)
			       cout << vect[i] << " ";
	cout<<endl;
	vect.erase(vect.begin()+4);
	//vect.erase(unique(vect.begin(),vect.end()),vect.end());
	for (int i=0; i<8; i++)
			       cout << vect[i] << " ";
	cout<<endl;
	cout << distance(vect.begin(),vect.end());


	int myints[] = {1,2,3};

	  std::reverse (myints,myints+3);

	  std::cout << "The 3! possible previous permutations with 3 elements:\n";
	  do {
	    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\t';
	  } while ( std::prev_permutation(myints,myints+3) );
	  cout<<endl;

	  std::sort (myints,myints+3);

	  std::cout << "The 3! possible next permutations with 3 elements:\n";
	  do {
	    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\t';
	  } while ( std::next_permutation(myints,myints+3) );
}

void MyVector(){

    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    // resizes the vector size to 4
    g1.resize(4);

    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();

    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";

    cout << "\nReference operator [g] : g1[2] = " << g1[2];

    cout << "\nat : g1.at(3) = " << g1.at(3);

    cout << "\nfront() : g1.front() = " << g1.front();

    cout << "\nback() : g1.back() = " << g1.back();

    // pointer to the first element
    int* pos = g1.data();

    cout << "\nThe first element is " << *pos;

    // Assign vector
        vector<int> v;

        // fill the array with 10 five times
        v.assign(5, 10);

        cout << "\nThe vector elements are: ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        // inserts 15 to the last position
        v.push_back(15);
        int n = v.size();
        cout << "\nThe last element is: " << v[n - 1];

        // removes last element
        v.pop_back();

        // prints the vector
        cout << "\nThe vector elements are: ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        // inserts 5 at the beginning
        v.insert(v.begin(), 5);

        cout << "\nThe first element is: " << v[0];

        // removes the first element
        v.erase(v.begin());

        cout << "\nThe first element is: " << v[0];

        // inserts at the beginning
        v.emplace(v.begin(), 5);
        cout << "\nThe first element is: " << v[0];

        // Inserts 20 at the end
        v.emplace_back(20);
        n = v.size();
        cout << "\nThe last element is: " << v[n - 1];

        // erases the vector
        v.clear();
        cout << "\nVector size after erase(): " << v.size();

        // two vector to perform swap
        vector<int> v1, v2;
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
        v2.push_back(4);

        cout << "\n\nVector 1: ";
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";

        cout << "\nVector 2: ";
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";

        // Swaps v1 and v2
        v1.swap(v2);

        cout << "\nAfter Swap \nVector 1: ";
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";

        cout << "\nVector 2: ";
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";

}

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void MyList()
{

    list <int> gqlist1, gqlist2;


    for (int i = 0; i < 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

}

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

void MyDeque()
{
    deque <int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout << "The deque gquiz is : ";
    showdq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.max_size() : " << gquiz.max_size();

    cout << "\ngquiz.at(2) : " << gquiz.at(2);
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop_front() : ";
    gquiz.pop_front();
    showdq(gquiz);

    cout << "\ngquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);

}

void MyArray(){
	 array<int,6> ar = {1, 2, 3, 4, 5, 6};
	 cout<<"First: "<<ar.at(0)<<endl;
	 cout<<"Second: "<< get<1>(ar)<<endl;
	 cout<<"Third: "<<ar[2]<<endl;
	 cout<<"Front: "<<ar.front()<<endl;
	 cout<<"Back: "<<ar.back()<<endl;
	 cout<<"size: "<<ar.size()<<endl;
	 cout<<"MaxSize: "<<ar.max_size()<<endl;
	 cout<<"Empty: "<<ar.empty()<<endl;

	 array <int,6> ar2;
	 ar2.fill(0);
	 for ( int i=0; i<6; i++)
		        cout << ar2[i] << " ";
	 cout<<endl;
	 ar.swap(ar2);
	 for ( int i=0; i<6; i++)
		        cout << ar[i] << " ";
	 cout<<endl;
	 for ( int i=0; i<6; i++)
		        cout << ar2[i] << " ";
	 cout<<endl;
}

void MyQueue(){
	queue<int> q1;
	q1.push(10);
	q1.push(20);
	q1.push(30);

	cout<<"front: "<<q1.front();
	cout<<"\nback: "<<q1.back();
	q1.pop();

	cout<<endl;
	queue<int> q2=q1;
	while(!q2.empty()){
		cout<<q2.front()<<" ";
		q2.pop();
	}

}

void MyStack(){
	stack <int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);

	s1.emplace(40);
	cout<<"top: "<<s1.top()<<endl;
	s1.pop();

	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}



}

int main() {
	//algorithm();
	//MyVector();
	//MyList();
	//MyDeque();
	//MyArray();
	//MyQueue();
	MyStack();

	return 0;
}

#include <iostream>
#include <memory>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  cout<<"What is your name? ";
  string a;
  cin>>a; 
  cout<<endl<< "hello "<<a;
  cout<<endl<<"whats your id? ";
  int x ;
  cin>> x;
  cout<<"your id is "<<x;

cout<<endl<<"enter var1: ";
  int var1;
  cin>>var1;
  cout<<endl<<"enter var2: ";
  int var2;
  cin>>var2;

  int sum = var1 + var2;
  int diff = var1 - var2;
  int prod = var1*var2;
  cout<<sum<<endl<<diff<<endl<<prod;

  cout<<" "<<endl;

  cout<<endl<<"enter name: " << endl;
  string name;
  cin>>name;
  cout<<endl<<"enter labgrade: "<<endl;
  int lab;
  cin>>lab;
  cout<<endl<<"enter midterm grade: "<<endl;
  int midterm;
  cin>>midterm;
  cout<<"enter final grade: "<<endl;
  int final;
  cin>>final;
  int score = lab/4 + midterm*(35/100) + final*(4/10);
  cout<<endl<<" Name: " + name;
  cout<<endl<<" Lab " << lab;
  cout<<endl<<" midterm "<< midterm;
  cout<<endl<<" final "<< final;
  cout<<endl<<" score"<< score;

  cout<<endl;

  cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"**"<<endl<<"*";








}

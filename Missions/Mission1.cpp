#include <iostream>
#include <string>

int main()
{


 //declaring Variables
int age=0;
std::string name;
char favourite;

//rading user input
std::cout<<"whats your age?"<<std::endl; 
std::cin>>age;

std::cout<<"what about your name?"<<std::endl;
std::cin>>name;

std::cout<<"your favourite char?"<<std::endl;
std::cin>>favourite;

//writing into the terminal
std::cout<<"Hello "<<name<<"\nYou are "<<age<<"years old\n"<<"your favourite char is"<<favourite;

//cin that the window doesnt close instantly
std::cin>>age;
return 0;
}
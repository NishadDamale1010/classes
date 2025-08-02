//constructor-1.default, 2.parametried, 3.copy 
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int roll_no;
    string name;
    int marks;
    public:
    student(){
        cout<<"enter your roll ,name,marks:"<<endl;
        getline(cin,name);
        cin>>roll_no>>marks;
        cout<<"Your name is :"<<name<<endl;
        cout<<"Your roll is :"<<roll_no<<endl;
        cout<<"Your marks are :"<<marks<<endl;

    }
};
int main(){
    student obj;

}

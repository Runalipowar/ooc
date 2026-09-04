#include <iostream>
#include <string>
using namespace std;

class hello {
    private:
     string name;
     int rollno;
     float marks;

    public:
      void inputDetails(){
        cout<<"Enter Student name:";
        cin>>name;

        cout<<"Enter roll no:";
        cin>>rollno;

        cout<<"enter marks:";
        cin>>marks;
      } 

      void displaydetails(){
        cout<<"Student Name:"<<name <<endl;
        cout<<"roll no:"<<rollno <<endl;
      }
};

int main(){
    hello s;
    s.inputDetails();
    s.displaydetails();
    return 0;
}

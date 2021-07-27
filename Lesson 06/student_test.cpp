#include <iostream>
#include <string>
using namespace std;

class User {
  // attributes (variables inside the class)
private:
  string _username;
  string _fullname;
  string _city;
  string _email;
protected:
  string _password;
  // methods (function inside the class)
  // most class needs constructor!!
  // constructor is a special method with the name same as the class name
public:
  User() {  // default constructor: no parameter!

  }
  User(string username, string fullname, string city, string email, string password)
  : User(username, fullname, city, email)
  {
    // although _password is private, but constructor is ok to use it
    _password = password;
  }
  User(string username, string fullname, string city, string email)
  : User(username, fullname){
    _city = city;
    _email = email;    
  }
  // we can have multiple constructors
private:
  User(string username, string fullname){
      _username = username;
      _fullname = fullname;  
  }
  void back_door() {
    cout << "this is a back door" << endl;
  }
public:
  string getUsername() { return _username; }
  void setUsername(string newname) {
    _username = newname;
  }
  int sum(int a, int b){
    return a + b;
  }
  void intro() {
    cout << "my username is " << _username << endl;
  }
};

// derived class (child class)
class Student : public User {
  // attributes (variables inside the class)
private:
  int _age;
  int _grade;
  string course;
  Course *course;
public:
  Student() : User() {}
  Student(string username, string fullname, string city, string email, string password)
  : User(username, fullname, city, email, password)
  {
    // although _password is private, but constructor is ok to use it
    _password = password;
  }
  Student(string username, string fullname, string city, string email)
  : User(username, fullname, city, email)
  {  
    // _city = city;
    // _email = email;    
  }
  // we can have multiple constructors
private:
  // User(string username, string fullname){
  //     _username = username;
  //     _fullname = fullname;  
  // }

};

class CollegeStudent: public Student {
public:
  CollegeStudent(string college) :
  Student() {
    _college = college;
  }
private:
  string _college;
};

class Course {

}

int main(){
  // User user1 = User();  //  looks very similar to function
  // user1.username = "frank";
  // user1.fullname = "Frank Bao";
  // user1.city = "Calgary";
  // user1.email = "nobody@email.com";
  User user1 = User("frank", "frank bao", "calgary", "email@email.com", "ababa");
  // user1.User()
  cout << user1.getUsername() << endl;
  // user1.password = "bbbb";
  // int c = user1.sum(1, 2);
  user1.intro();  // there is a public method in User class
  User user2 = User("alpha", "alpha bao", "edmonton", "email@email.com");
  cout << "------------" << endl;
  Student student1 = Student("frank", "frank bao", "calgary", "email@email.com", "ababa");
  cout << student1.getUsername() << endl;
  // cout << user1.back_door();
}


// #include <iostream>
// #include <string>
// using namespace std;

// class student{
// public: 
//     string name;
//     double* cgpaptr;
//     student(string name, double cgpa){
//         this->name = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
//     // student(student &orgObj){
//     //     this->name = orgObj.name;
//     //     this->cgpaptr = orgObj.cgpaptr;
//     // }
//     student(student &Obj){
//         cout<<"coustom copy counstructor"<<endl;
//         this->name = Obj.name;
//         cgpaptr = new double;
//         *cgpaptr = *Obj.cgpaptr ;
//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"cgpa : "<<*cgpaptr<<endl;
//     }
// private:

// };
// int main(){
//     student s1{"Rahulkumar", 8.9};
//     s1.getInfo();
//     student s2(s1);
//     *(s2.cgpaptr) = 9.2;
//     s2.name = "neha";
//     s2.getInfo();
// return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// class student{
// public: 
//     string name;
//     double* cgpaptr;
//     student(string name, double cgpa){
//         this->name = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
//     ~student(){
//         cout<<"Hii I delete everything"<<endl;
//         delete cgpaptr;//memory leak ho sakta hai agar ham destructor use nahi karenge toh
//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"cgpa : "<<*cgpaptr<<endl;
//     }
// private:

// };
// int main(){
//     student s1{"Rahulkumar", 8.9};
//     s1.getInfo();
// return 0;
// }


//INHERITANCE
// #include <iostream>
// #include <string>
// using namespace std;

// class person{
//     public:
//         string name;
//         int age;
//     // person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }    
//         person(){
//             cout<<"Parent counstructor.."<<endl;
//     } 
//         ~person(){
//             cout<<"Parent destructor.."<<endl;
//     } 
// };
// class student: public person {
//     //name,age, rollno
//     public:
//         int rollno;
//         student(){
//             cout<<"child counstructor.."<<endl;
//         }
//         ~student(){
//             cout<<"student destructor.."<<endl;
//     } 
//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"age: "<<age<<endl;
//         cout<<"rollNo: "<<rollno<<endl;
//     }
// };
// int main(){
//     student s1;
//     s1.name = "ANANDKUMAR";
//     s1.age = 20;
//     s1.rollno = 34;
//     s1.getInfo();
// return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// class person{
//     public:
//         string name;
//         int age;
//     person(string name, int age){
//         this->name = name;
//         this->age = age;
//     }    
//     //     person(){
//     //         cout<<"Parent counstructor.."<<endl;
//     // } 
//     //     ~person(){
//     //         cout<<"Parent destructor.."<<endl;
//     // } 
// };
// class student: public person {
//     //name,age, rollno
//     public:
//         int rollno;
//         student(string name, int age, int rollno ) : person( name, age){
//             this->rollno = rollno;
//         }
//     //     ~student(){
//     //         cout<<"student destructor.."<<endl;
//     // } 
//     void getInfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"age: "<<age<<endl;
//         cout<<"rollNo: "<<rollno<<endl;
//     }
// };
// int main(){
//     student s1{"Anandkumar",20,34};

//     s1.getInfo();
// return 0;
// }


//multilevel inhertance
// #include<iostream>
// #include <string>
// using namespace std;
// class person{
//     public:
//         string name;
//         int age;
// };
// class student: public person {
//     public: 
//         int rollno; 
// };
// class gradStudent: public student {
//     public:
//         string researchArea;
// };
// int main(){
//     gradStudent s1;
//     s1.name = "ANANDKUMAR";
//     s1.age = 20;
//     s1.rollno = 34;
//     s1.researchArea = "Quantum physics";
//     cout<<"Name "<<s1.name<<endl;
//     cout<<"Age "<<s1.age<<endl;
//     cout<<"rollNo "<<s1.rollno<<endl;
//     cout<<"ResearchArea "<<s1.researchArea<<endl;
//     return 0;
// }

//multiple inhertance
// #include<iostream>
// #include <string>
// using namespace std;
// class student{
//     public:
//         string name;
//         int rollno;
// };
// class teacher{
//     public: 
//         string subject;
//         double salary; 
// };
// class TA: public student, public teacher{
// };
// int main(){
//     TA t1;
//     t1.name = "ANANDKUMAR";
//     t1.rollno = 34;
//     t1.subject = "Engineering";
//     t1.salary = 250000000;
//     cout<<"Name "<<t1.name<<endl;
//     cout<<"Rollno "<<t1.rollno<<endl;
//     cout<<"subject "<<t1.subject<<endl;
//     cout<<"salary "<<t1.salary<<endl;
//     return 0;
// }

//hierarchial inhertance
// #include <iostream>
// #include <string>
// using namespace std;
// class person{
//     public:
//     string name;
//     int age;
// };
// class student: public person{
//     public:
//     int rollno;
// };
// class techer: public person{
//     public:
//     string subject;
// };
// int main(){
//     student s1;
//     s1.name = "ANAND";
//     s1.age = 20;
//     s1.rollno = 34;
// return 0;
// }


//polymorphism(compile time)
//counstructor overloading


// #include <iostream>
// #include <string>
// using namespace std;
// class student{
//     public:
//     string name;
//     student(){
//         cout<<"NON parameterized counstructor"<<endl;
//     }
//     student(string name){
//         this->name = name;
//         cout<<"parameterized counstructor"<<endl;
//     }
// };
// int main(){
//     student s1("ANNAD");
// return 0;
// }

//Function overloading
// #include <iostream>
// #include <string>
// using namespace std;
// class print{
//     public:
//         void show(int x){
//             cout<<"int : "<< x<<endl;
//         }
//         void show(char ch){
//             cout<<"char : "<< ch<<endl;
//         }
//         void show(float f){
//             cout<<"value : "<< f<<endl;
//         }
// };
// int main(){
//     print p1;
//     //int ka use tha iseliye same function se int ko laga call
//     int x = 5;
//     p1.show(x);
//     print p2;
//     //char ka use tha iseliye same function se char ko laga call
//     char ch = 'A';
//     p2.show(ch);
//     print p3;
//     //float ka use tha iseliye same function se float ko laga call
//     float f = 100.00;
//     p3.show(f);
// return 0;
// }

//polymorphism(run time)
//function over-riding
// #include <iostream>
// #include <string>
// using namespace std;
// class parent{
//     public:
//         void getInfo(){
//             cout<<"parent class"<<endl;
//         }
// };
// class child: public parent{
//         public:
//             void getInfo(){
//                 cout<<"Child class";
//             }
// };
// int main(){
//     parent p1;
//     p1.getInfo();
//     child c1;
//     c1.getInfo();
// return 0;
// }
//virtual function
// #include <iostream>
// #include <string>
// using namespace std;
// class parent{
//     public:
//         void getInfo(){
//             cout<<"parent class"<<endl;
//         }
//         virtual void hello(){
//             cout<<"Hello from parent"<<endl;
//         }
// };
// class child: public parent{
//         public:
//             void getInfo(){
//                 cout<<"Child class"<<endl;
//             }
//             void hello(){
//             cout<<"Hello from child"<<endl;
//         }
// };
// int main(){
//     parent p1;
//     p1.getInfo();
//     parent p2;
//     p2.hello();
//     child c1;
//     c1.getInfo();
//     child c2;
//     c2.hello();
// return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// class shape{//abstract class
//     virtual void draw() = 0;//pure virtual function 
// };
// class circle : public shape{
//     public:
//     void draw(){
//         cout<<"drawing a circle"<<endl;
//     }
// };
// class square : public shape{
//         public:
//         void draw(){
//             cout<<"drawinig a square"<<endl;
//         }
// };
// int main(){
//     circle c1;
//     c1.draw();
//     square s1;
//     s1.draw();
// return 0;
// }

//static example
#include <iostream>
// #include <string>
// using namespace std;
// void fun(){
//     int x = 0;
//     cout<<"x: "<<x<<endl;
//     x++;
// }
// int main(){
//     fun();
//     fun();
// return 0;
// }
// #include <string>
// using namespace std;
// void fun(){
//     static int x = 0;
//     cout<<"x: "<<x<<endl;
//     x++;
// }
// int main(){
//     fun();
//     fun();
//     fun();
//     fun();
//     fun();
// return 0;
// }
// #include <string>
// using namespace std;
// class A{
//     public:
//         int x;
//         void incx(){
//             x++;
// }
// };
// int main(){
//     A obj1;
//     A obj2;
//     obj1.x = 100;
//     obj2.x = 200;
//     cout<<obj1.x<<endl;
// return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// class ABC{
//     public:
//     ABC(){
//         cout<<"countructor"<<endl;
//     }
//     ~ABC(){
//         cout<<"destructor"<<endl;
//     }
// };
// int main(){
//     ABC a1;
//     cout<<"end of main function"<<endl;
// return 0;
// }
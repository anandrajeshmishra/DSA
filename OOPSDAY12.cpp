// #include <iostream>
// #include<string>
// using namespace std;
// class teacher{
//     //properties,attributes
//     private:
//     double salary;
//     public:
//     //Non- parameterized counstructer
//     // teacher(){
//     //     dept = "Computer Science";
//     // }
//     //paramerterizes counstructer
//     // teacher(string n, string d, string s,double sal){
//     //     name = n;
//     //     dept = d;
//     //     subject = s;
//     //     salary = sal;
//     // }
//     teacher(string name, string dept, string subject,double salary){
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }
//     teacher(teacher &orgObj ){
//         cout<<"I am a custom copy constructor\n";
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//         this->salary = orgObj.salary;
//     }
//     string name;
//     string dept;
//     string subject;    

//     //methods,member functions
//     void changeDept(string newDept){
//         dept = newDept;
//         }
//     //SETTER
//     void setSalary(double s){
//         salary = s;
//     }
//     //GETTER 
//     double getSalary(){
//         return salary;
//     }
//     void getInfo(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"dept : "<<dept<<endl;
//         cout<<"subject : "<<subject<<endl;
//         cout<<"salary : "<<salary<<endl;
//     }
// };

// int main(){
//     teacher t1("Anandkumar", "EXTC", "C++", 25000000);
//     t1.getInfo();
    //copy countructor
    // teacher t2(t1);//Default countructer 
    // t2.getInfo();
    // t1.name = "Anandkumar";
    // t1.dept = "EXTC";
    // t1.subject = "C++";
    // t1.setSalary(250000000);
    // teacher t2;
    // teacher t3;
    // teacher t4;
    // cout<<"The name is : "<<t1.name<<endl;
    // cout<<"The department is : "<<t1.dept<<endl;
    // cout<<"The subject name is : "<<t1.subject<<endl;
    // cout<<"The salary is : "<<t1.getSalary()<<endl;
// return 0;
// }
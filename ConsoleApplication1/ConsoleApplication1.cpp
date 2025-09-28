#include <iostream>
#include <string>
using namespace std;

// 부모 클래스 (기반 클래스)
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void introduce() {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
};

// 자식 클래스 (파생 클래스)
class Student : public Person {
private:
    string major;

public:
    Student(string n, int a, string m) : Person(n, a), major(m) {}

    void study() {
        cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
    }
};

int main() {
    Student s("홍길동", 21, "컴퓨터공학");
    s.introduce();   // 부모 클래스 함수 사용
    s.study();       // 자식 클래스 함수 사용
    return 0;
}

//#include <iostream>
//using namespace std;
//
//class Teacher {
//public:
//    void teach() {
//        cout << "강의를 하고 있습니다." << endl;
//    }
//};
//
//class Researcher {
//public:
//    void research() {
//        cout << "연구를 하고 있습니다." << endl;
//    }
//};
//
//// 다중 상속
//class Professor : public Teacher, public Researcher {
//public:
//    void introduce() {
//        cout << "저는 교수입니다." << endl;
//    }
//};
//
//int main() {
//    Professor p;
//    p.introduce();
//    p.teach();
//    p.research();
//    return 0;
//}

//class Animal {
//public:
//    virtual void speak() {
//        cout << "동물이 소리를 냅니다." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void speak() override {
//        cout << "멍멍!" << endl;
//    }
//};
//
//class Cat : public Animal {
//public:
//    void speak() override {
//        cout << "야옹!" << endl;
//    }
//};
//
//int main() {
//
//    Animal a1;
//    Dog a2;
//    Cat a3;
//
//    a1.speak();
//    a2.speak();
//    a3.speak();
//
//    Animal* a4 = &a2;
//    a4->speak();
//
//    return 0;
//}

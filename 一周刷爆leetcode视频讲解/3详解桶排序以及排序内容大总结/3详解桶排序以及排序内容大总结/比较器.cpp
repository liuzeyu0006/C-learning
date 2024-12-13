//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
////比较器：实际就是重载比较运算符
////比较器的使用
////1）比较器的实质就是重载比较运算符
////2）比较器可以很好的应用在特殊标准的排序上
////3）比较器可以很好的应用在根据特殊标准排序的结构上
//
//
//struct Student {
//    string name;
//    int id;
//    int age;
//
//    Student(string n, int i, int a) : name(n), id(i), age(a) {}
//};
//
//
////返回负数的时候，第一个参数排在前面
////返回正数的时候，第二个参数排在前面
////返回0的时候，谁在前面无所谓
//struct IdAscendingComparator {
//    bool operator() (const Student& a, const Student& b) {
//        return a.id < b.id;
//    }
//};
//
//struct IdDescendingComparator {
//    bool operator() (const Student& a, const Student& b) {
//        return a.id > b.id;
//    }
//};
//
//struct AgeAscendingComparator {
//    bool operator() (const Student& a, const Student& b) {
//        return a.age < b.age;
//    }
//};
//
//struct AgeDescendingComparator {
//    bool operator() (const Student& a, const Student& b) {
//        return a.age > b.age;
//    }
//};
//
//void printStudents(const vector<Student>& students) {
//    for (const Student& student : students) {
//        cout << "Name: " << student.name << ", Id: " << student.id << ", Age: " << student.age << endl;
//    }
//}
//
//int main() {
//    vector<Student> students;
//
//    //// 使用 push_back 添加学生
//    //students.push_back(Student("Alice", 20));
//    // 
//    //// 使用 emplace_back 添加学生
//    //students.emplace_back("Bob", 22); // 直接在容器中构造对象，不需要创建临时对象
//    // 
//    //使用 emplace_back 添加 "Bob" 时，会直接在 students 的内存空间中调用 Student 的构造函数，
//    //而使用 push_back 添加 "Alice" 时，会首先创建一个 Student 对象，然后将其移动到向量中。
//
//    students.emplace_back("A", 2, 23);
//    students.emplace_back("B", 3, 21);
//    students.emplace_back("C", 1, 22);
//
//    sort(students.begin(), students.end(), IdAscendingComparator());
//    printStudents(students);
//    cout << "===========================" << endl;
//
//    sort(students.begin(), students.end(), IdDescendingComparator());
//    printStudents(students);
//    cout << "===========================" << endl;
//
//    sort(students.begin(), students.end(), AgeAscendingComparator());
//    printStudents(students);
//    cout << "===========================" << endl;
//
//    sort(students.begin(), students.end(), AgeDescendingComparator());
//    printStudents(students);
//    cout << "===========================" << endl;
//
//
//    //自己写比较器实现复杂的排序
//    //返回负数的时候，第一个参数排在上面
//    //返回正数的时候，第二个参数排在上面
//    //返回0的时候，谁在前面无所谓
//   priority_queue<Student, vector<Student>, AgeDescendingComparator> maxHeapBasedAge;
//    for (const Student& s : students) {
//        maxHeapBasedAge.push(s);
//    }
//    while (!maxHeapBasedAge.empty()) {
//        Student student = maxHeapBasedAge.top();
//        maxHeapBasedAge.pop();
//        cout << "Name: " << student.name << ", Id: " << student.id << ", Age: " << student.age << endl;
//    }
//    cout << "===========================" << endl;
//
//    /* priority_queue<Student, vector<Student>, IdAscendingComparator> minHeapBasedId;
//    for (const Student& s : students) {
//        minHeapBasedId.push(s);
//    }
//    while (!minHeapBasedId.empty()) {
//        Student student = minHeapBasedId.top();
//        minHeapBasedId.pop();
//        cout << "Name: " << student.name << ", Id: " << student.id << ", Age: " << student.age << endl;
//    }
//    cout << "===========================" << endl;
//
//    set<Student, AgeDescendingComparator> treeAgeDescending;
//    for (const Student& s : students) {
//        treeAgeDescending.insert(s);
//    }
//    cout << "Name: " << treeAgeDescending.begin()->name << ", Id: " << treeAgeDescending.begin()->id << ", Age: " << treeAgeDescending.begin()->age << endl;
//    auto last = treeAgeDescending.rbegin();
//    cout << "Name: " << last->name << ", Id: " << last->id << ", Age: " << last->age << endl;
//    cout << "===========================" << endl;*/
//
//    return 0;
//}

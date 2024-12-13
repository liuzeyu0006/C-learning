//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
////�Ƚ�����ʵ�ʾ������رȽ������
////�Ƚ�����ʹ��
////1���Ƚ�����ʵ�ʾ������رȽ������
////2���Ƚ������Ժܺõ�Ӧ���������׼��������
////3���Ƚ������Ժܺõ�Ӧ���ڸ��������׼����Ľṹ��
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
////���ظ�����ʱ�򣬵�һ����������ǰ��
////����������ʱ�򣬵ڶ�����������ǰ��
////����0��ʱ��˭��ǰ������ν
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
//    //// ʹ�� push_back ���ѧ��
//    //students.push_back(Student("Alice", 20));
//    // 
//    //// ʹ�� emplace_back ���ѧ��
//    //students.emplace_back("Bob", 22); // ֱ���������й�����󣬲���Ҫ������ʱ����
//    // 
//    //ʹ�� emplace_back ��� "Bob" ʱ����ֱ���� students ���ڴ�ռ��е��� Student �Ĺ��캯����
//    //��ʹ�� push_back ��� "Alice" ʱ�������ȴ���һ�� Student ����Ȼ�����ƶ��������С�
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
//    //�Լ�д�Ƚ���ʵ�ָ��ӵ�����
//    //���ظ�����ʱ�򣬵�һ��������������
//    //����������ʱ�򣬵ڶ���������������
//    //����0��ʱ��˭��ǰ������ν
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

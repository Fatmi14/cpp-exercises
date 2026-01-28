#include <iostream>
#include <vector>
#include <cctype>
#include <string>

struct Student {
    std::string name{};
    int grade{};
};

int main() {
    const int MAX_STUDENTS = 5;
    std::vector<Student> students{};
    Student s;

    // 1️⃣ إدخال بيانات الطلاب
    for(int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin >> s.name;

        // تحويل الاسم إلى Capital letters
        for(char &c : s.name) c = toupper(c);

        // إدخال الدرجة مع تحقق من صحتها
        do {
            std::cout << "Enter the grade of student " << i + 1 << " (0-100): ";
            std::cin >> s.grade;
        } while(s.grade < 0 || s.grade > 100);

        students.push_back(s);
    }

    std::cout << "\n--- Students List ---\n";
    for(const Student &st : students) {
        std::cout << st.name << " : " << st.grade << std::endl;
    }

    // 2️⃣ حساب المتوسط
    double average = 0.0;
    for(const Student &st : students) average += st.grade;
    average /= students.size();
    std::cout << "\nAverage grade: " << average << std::endl;

    // 3️⃣ البحث عن طالب بالاسم
    std::string sr;
    std::cout << "\nEnter the name of student you want to search for: ";
    std::cin >> sr;

    // تحويل اسم البحث إلى Capital letters
    for(char &c : sr) c = toupper(c);

    bool found = false;
    for(const Student &st : students) {
        if(st.name == sr) {
            found = true;
            std::cout << "Student exists, grade: " << st.grade << std::endl;
            break;
        }
    }

    if(!found) {
        std::cout << "Student not found" << std::endl;
    }

    return 0;
}


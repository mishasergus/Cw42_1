// Cw42_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

struct  Student
{
private:
    std::string name;
    int age;
    int grade;
public:
    explicit Student(std::string name, int age, int grade) {
        this->age = age;
        this->grade = grade;
        this->name = name;

    }
    std::string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
    int get_grade() {
        return grade;
    }
    std::string show() {
        return "Name: " + name + " age: " + std::to_string(age) + " grade: " + std::to_string(grade) + "\n";
    }
};

int main()
{
    //int global_num = 15;
    //auto elem = [&global_num](int x, int y) {
    //    global_num += x - y;
    //};
    //elem(3, 2);
    //std::cout << global_num << '\n';

    //auto show1 = [global_num]() mutable{
    //    
    //};

    //std::vector<int> nums = { 4,2,1,7,5 };
    //auto iterator = std::find_if(nums.begin(), nums.end(), [](int num) {return num % 2 == 0; });
    //std::cout << *iterator << std::endl;

    //auto it1 = std::for_each(nums.begin(), nums.end(), [](int num) {std::cout << num << std::endl; });

    //auto it2 = std::count_if(nums.begin(), nums.end(), [](int num) {return num % 2 == 0; });

    //auto it3 = std::remove_if(nums.begin(), nums.end(), [](int num) {return num % 2 == 0; });

    //nums.erase(it3, nums.end());

    //auto it4 = std::all_of(nums.begin(), nums.end(), [](int num) {return num % 2 == 0; });
    //auto it5 = std::any_of(nums.begin(), nums.end(), [](int num) {return num % 2 == 0; });
    //auto it6 = std::none_of(nums.begin(), nums.end(), [](int num) {return num % 2 == 0; });

    Student* s1 = new Student("Max-Dindin", 15, 30);
    Student* s2 = new Student("Max-Perepichka", 13, 87);
    Student* s3 = new Student("Sviatoslav", 21, 100);
    Student* s4 = new Student("Jesika", 17, 10);
    Student* s5 = new Student("John-Zadira", 31, 1);
    Student* s6 = new Student("Snake", 16, 30);
    Student* s7 = new Student("Bler", 8, 100);
    std::vector<Student*> items;
    items.push_back(s1);
    items.push_back(s2);
    items.push_back(s3);
    items.push_back(s4);
    items.push_back(s5);
    items.push_back(s6);
    items.push_back(s7);

    for (Student* s : items)
    {
        std::cout << s->show();
    }
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWW\n";
    auto iterator1 = std::find_if(items.begin(), items.end(), [](Student* s) {return s->get_grade() >= 90; });
    std::cout << static_cast<Student*>(*iterator1)->show();

    auto iterator2 = std::find_if(items.begin(), items.end(), [](Student* s) {return s->get_name() == "Max-Dindin"; });
    std::cout << static_cast<Student*>(*iterator2)->show();

    auto iterator3 = std::count_if(items.begin(), items.end(), [](Student* s) {return s->get_age() >= 16; });
    std::cout << iterator3 << std::endl;
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::sort(items.begin(), items.end(), [](Student* s1, Student* s2) {return s1->get_grade() < s2->get_grade(); });
    for (Student* s : items)
    {
        std::cout << s->show();
    }
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWW\n";
    auto iterator4 = std::all_of(items.begin(), items.end(), [](Student* s) {return s->get_age() >= 2; });
    std::cout << iterator4 << std::endl;

    auto iterator5 = std::any_of(items.begin(), items.end(), [](Student* s) {return s->get_grade() <= 60; });
    std::cout << iterator5 << std::endl;

    auto iterator6 = std::none_of(items.begin(), items.end(), [](Student* s) {return s->get_age() <= 16; });
    std::cout << iterator6 << std::endl;
}

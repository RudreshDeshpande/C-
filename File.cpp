#include<iostream>
#include<fstream>
using namespace std;

class student
{
    string name;
    int roll_no;
    char division;

public:
    void getdata()
    {
        ofstream out("stud.txt", ios::app);
        for(int i = 0; i < 3; i++)
        {
            cout << "Enter Name, Rollno, and Division::\n";
            cin >> name >> roll_no >> division;
            out << name << "\t" << roll_no << "\t" << division << "\n";
        }
        out.close();
    }

    void display()
    {
        string line;
        ifstream in("stud.txt");
        while(getline(in, line))
        {
            cout << line << endl;
        }
        in.close();
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.display();

    return 0;
}

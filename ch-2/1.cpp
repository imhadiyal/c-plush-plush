#include <iostream>
#include <string.h>
using namespace std;
class student
{

public:
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_rol[20];
    int emp_salary;
    char emp_city[20];
    int emp_experience;
    char emp_company_name[20];
};
int main()
{
    student s1, s2;
    cout << "entet a id:";
    cin >> s1.emp_id;
    cout << "entet a name:";
    gets(s1.emp_name);
    cout << "entet a age:";
    cin >> s1.emp_age;
    cout << "entet a rol:";
    gets(s1.emp_rol);
    cout << "entet a salary:";
    cin >> s1.emp_salary;
    cout << "entet a city:";
    gets(s1.emp_city);
    cout << "entet a experience:";
    cin >> s1.emp_experience;
    cout << "entet a company name:";
    gets(s1.emp_company_name);

    cout << "entet a id:";
    cin >> s2.emp_id;
    cout << "entet a name:";
    gets(s2.emp_name);
    cout << "entet a age:";
    cin >> s2.emp_age;
    cout << "entet a rol:";
    gets(s2.emp_rol);
    cout << "entet a salary:";
    cin >> s2.emp_salary;
    cout << "entet a city:";
    gets(s2.emp_city);
    cout << "entet a experience:";
    cin >> s2.emp_experience;
    cout << "entet a company name:";
    gets(s2.emp_company_name);
    cout << "name:" << s1.emp_name << "id" << s1.emp_id << "age:" << s1.emp_age << "rol:" << s1.emp_rol << "salary:" << s1.emp_salary << "city" << s1.emp_city << "experience;" << s1.emp_experience << "companyname:" << s1.emp_company_name;
    cout << "name:" << s2.emp_name << "id" << s2.emp_id << "age:" << s2.emp_age << "rol:" << s2.emp_rol << "salary:" << s2.emp_salary << "city" << s2.emp_city << "experience;" << s2.emp_experience << "companyname:" << s2.emp_company_name;
}

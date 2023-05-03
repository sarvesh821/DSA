#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string firstname;
    string lastname;
    string rollno;
    student(string f,string l,string no){
        firstname=f;
        lastname=l;
        rollno=no;
    }
    bool operator==(const student &s){
        return rollno==s.rollno;
    }
};
class hashfn{
public:
size_t operator()(const student &s){

}
};
int main()
{
    student s1{"parteek","narang","123"};
    student s2{"sarvesh","goyal","345"};
    student s3{"parteek","gupta","675"};
    student s4{"sarvesh","goyal","909"};

return 0;
}
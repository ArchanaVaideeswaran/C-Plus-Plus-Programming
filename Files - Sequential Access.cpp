#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
    protected:
    char name[10];
    int rno;
    int mark;
    public:
    void getdetails()
    {
        cout<<"\nEnter the RollNo:";
        cin>>rno;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter Mark:";
        cin>>mark;
    }
    void putdetails()
    {
        cout<<"\nRollno:"<<rno;
        cout<<"\nName:"<<name;
        cout<<"\nMark:<<mark;
    }
};
int main()
{
    char ch;
    student s;
    ofstream out;
    cout<<"\n\tSequential Access Of File";
    out.open("stu.txt",ios::out);
    do
    {
        cout<<"\nEnter Student Data":
        s.getdetails();
        out.write((char*)&s,sizeof(s));
        cout<<"\nEnter another student data(y/n)";
        cin>>ch;
    }
    while(ch=='y'||ch=='Y');
    out.close();
    ifstream in;
    in.open("stu.txt",ios::in);
    in.seekg(0);
    in.read((char*)&s,sizeof(s));
    while(!in.eof())
    {
        cout<<"\nStudent";
        s.putdetails();
        in.read((char*)&s,sizeof(s));
    }
    getch();
    return 0;
}

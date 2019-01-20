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
          cout<<"\n\tStudent Details\n";
          cout<<"\nRollno:"<<rno;
          cout<<"\nName:"<<name;
          cout<<"\nMark:"<<mark;
      }
};
int main()
{
      char ch;
      int rno,n;
      student s;
      ofstream out;
      clrscr();
      cout<<"\n\tRandom Access Of File";
      out.open("stu1.txt",ios::out);
      do
      {
          cout<<"\nEnter Student Data";
          s.getdetails();
          out.write((char*)&s,sizeof(s));
          cout<<"\nEnter another student data(y/n)";
          cin>>ch;
      }
      while(ch=='y'||ch=='Y');
      out.close();
      ifstream in;
      in.open("stu1.txt",ios::in);
      in.seekg(0);
      cout<<"\nEnter the RollNo of student:";
      cin>>rno;
      int pos=(rno-1)*sizeof(student);
      in.seekg(pos);
      in.read((char*)&s,sizeof(s));
      s.putdetails();
      getch();
      return 0;
}

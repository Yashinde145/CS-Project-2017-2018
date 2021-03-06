Source Code


#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<dos.h>	
#include<process.h>
#include<string.h>
#include<iomanip.h>
#include<graphics.h>

class student
{
private: 
int rollno;
char name[50];
int p_marks,c_marks,m_marks,e_marks,cs_marks;
float per;
char grade;
void calculate();
public:      void getdata();
void showdata();
void show_tabular(int y);
int retrollno();
int y;
};

void Loading();
void Loading()
{
cleardevice();
setbkcolor(MAGENTA);
int midx=getmaxx()/2;
int midy=getmaxy()/2;
setbkcolor(BLUE);
setcolor(GREEN);
//outtextxy(midx,midy+50,"LOADING...");
for(int i=0;i<73;i++)
{
//cleardevice();
settextstyle(1,0,6);
setcolor(RED);
outtextxy(midx-120,midy-35,"LOADING...");
setcolor(GREEN);
arc(midx,midy,180-(i*20),180-(i*5),178);
arc(midx,midy,180-(i*20),180-(i*5),177);
arc(midx,midy,180-(i*20),180-(i*5),176);
arc(midx,midy,180-(i*20),180-(i*5),175);
arc(midx,midy,180-(i*20),180-(i*5),174);
setcolor(CYAN);
arc(midx,midy,180-(i*20),180-(i*5),173);
arc(midx,midy,180-(i*20),180-(i*5),172);
arc(midx,midy,180-(i*20),180-(i*5),171);
arc(midx,midy,180-(i*20),180-(i*5),170);
arc(midx,midy,180-(i*20),180-(i*5),169);
setcolor(MAGENTA);
arc(midx,midy,180-(i*20),180-(i*5),168);
arc(midx,midy,180-(i*20),180-(i*5),167);
arc(midx,midy,180-(i*20),180-(i*5),166);
arc(midx,midy,180-(i*20),180-(i*5),165);
arc(midx,midy,180-(i*20),180-(i*5),164);
setcolor(WHITE);
arc(midx,midy,180-(i*20),180-(i*5),163);
arc(midx,midy,180-(i*20),180-(i*5),162);
arc(midx,midy,180-(i*20),180-(i*5),161);
arc(midx,midy,180-(i*20),180-(i*5),160);
arc(midx,midy,180-(i*20),180-(i*5),159);
arc(midx,midy,180-(i*20),180-(i*5),158);
//pieslice(midx,midy,180-(i*10),175-(i*10),157);
//cleardevice();
delay(200);

cleardevice();
}
sleep(1);
}



void student::calculate()
{
per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
if(per>=60)
grade='A';
else
if(per>=50)
grade='B';
else
if(per>=33)
grade='C';
else
grade='F';
}

void student::getdata()
{
settextstyle(3,0,1);
outtextxy(30,25," 1} Enter The roll number of student ");
gotoxy(65,3);
cin>>rollno;
outtextxy(30,72," 2} Enter The Name of student ");
gotoxy(65,6);
gets(name);
outtextxy(30,125," 3} Enter The marks in Physics out of 100  ");
gotoxy(65,9);
cin>>p_marks;
while(p_marks>100)
{
cleardevice();
outtextxy(30,105," Marks cannot be Greater than 100 ");
outtextxy(30,125," 3} Enter The marks in Physics out of 100 ");
gotoxy(65,9);
cin>>p_marks;
}
outtextxy(30,173," 4} Enter The marks in Chemistry out of 100  ");
gotoxy(65,12);
cin>>c_marks;
while(c_marks>100)
{
cleardevice();
outtextxy(30,153," Marks cannot be Greater than 100 ");
outtextxy(30,173," 4} Enter The marks in Chemistry out of 100 ");
gotoxy(65,12);
cin>>c_marks;
}
outtextxy(30,223," 5} Enter The marks in Maths out of 100 ");
gotoxy(65,15);
cin>>m_marks;
while(m_marks>100)
{
cleardevice();
outtextxy(30,203," Marks cannot be Greater than 100 ");
outtextxy(30,223," 5} Enter The marks in Maths out of 100 ");
gotoxy(65,15);
cin>>m_marks;
}
outtextxy(30,267," 6} Enter The marks in English out of 100 ");
gotoxy(65,18);
cin>>e_marks;
while(e_marks>100)
{
cleardevice();
outtextxy(30,247," Marks cannot be Greater than 100 ");
outtextxy(30,267," 6} Enter The marks in English out of 100 ");
gotoxy(65,18);
cin>>e_marks;
}
outtextxy(30,317," 7} Enter marks in Computer Science out of 100  ");
gotoxy(65,21);
cin>>cs_marks;
while(cs_marks>100)
{
cleardevice();
outtextxy(30,297," Marks cannot be Greater than 100 ");
outtextxy(30,317," 7} Enter marks in Computer Science out of 100 ");
gotoxy(65,21);
cin>>cs_marks;
}
calculate();
}

void student::showdata()
{
cleardevice();
outtextxy(20,20," 1} Roll number of student ");
gotoxy(65,3);
cout<<rollno;
outtextxy(20,55," 2} Name of student ");
gotoxy(65,5);
cout<<name;
outtextxy(20,100," 3} Marks in Physics ");
gotoxy(65,8);
cout<<p_marks;
outtextxy(20,133," 4} Marks in Chemistry ");
gotoxy(65,10);
cout<<c_marks;
outtextxy(20,167," 5} Marks in Maths ");
gotoxy(65,12);
cout<<m_marks;
outtextxy(20,195," 6} Marks in English ");
gotoxy(65,14);
cout<<e_marks;
outtextxy(20,225," 7} Marks in Computer Science ");
gotoxy(65,16);
cout<<cs_marks;
outtextxy(20,255," 8} Percentage of student is (in %) ");
gotoxy(65,18);
cout<<per;
outtextxy(20,285," 9} Grade of student is ");
gotoxy(65,20);
cout<<grade;
}

void student::show_tabular(int y)
{

gotoxy(4,6+y);
cout<<rollno;
gotoxy(10,6+y);
cout<<name;
gotoxy(29,6+y);
cout<<p_marks;
gotoxy(36,6+y);
cout<<c_marks;
gotoxy(42,6+y);
cout<<m_marks;
gotoxy(48,6+y);
cout<<e_marks;
gotoxy(55,6+y);
cout<<cs_marks;
gotoxy(60,6+y);
cout<<per;
gotoxy(70,6+y);
cout<<grade;
}

int student::retrollno()
{
return rollno;
}



void write_student();
void display_all();
void display_sp();
void modify_student();
void delete_student();
void class_result();
void result();
void intro();
void entry_menu();

void class_result()
{
int y=0;
settextstyle(3,0,3);
int midx=getmaxx()/2;
int midy=getmaxy()/2;
cleardevice();
student st;
ifstream inFile;
inFile.open("student.dat",ios::binary);
if(!inFile)
{
cleardevice();
outtextxy(25,midy-11," File could not be open !! Press any Key...");
return;
}
//rectangle(3,523,3,523);
line(4,37,590,37);
line(4,450,590,450);

line(4,67,590,67);

line(4,37,4,450);
line(590,37,590,450);

line(60,37,60,450);
line(210,37,210,450);
line(260,37,260,450);
line(310,37,310,450);
line(360,37,360,450);
line(410,37,410,450);
line(460,37,460,450);
line(520,37,520,450);

outtextxy(midx-130,5," ALL STUDENTS RESULT ");
settextstyle(3,0,1);
outtextxy(5,40," R.No ");
outtextxy(100,40," Name ");
outtextxy(220,40," P ");
outtextxy(270,40," C ");
outtextxy(320,40," M ");
outtextxy(370,40," E ");
outtextxy(420,40," CS ");
outtextxy(470,40," % ");
outtextxy(520,40," Grade ");
while(inFile.read((char *) &st, sizeof(student)))
{
st.show_tabular(y);
y+=2;
}
inFile.close();
getch();
}



void main()
{
int midx=getmaxx()/2;
int midy=getmaxy()/2;
char ch;
int g=0,h;
initgraph(&g,&h,"C:\\TurboC3\\BGI");
setbkcolor(3);
cout.setf(ios::fixed|ios::showpoint);
cout<<setprecision(2);
intro();
Loading();
do
{
cleardevice();
setcolor(10);
setbkcolor(9);
settextstyle(7,0,3);
outtextxy(200,30," ***MAIN MENU*** ");
outtextxy(160,110," 1} ENTRY/EDIT MENU ");
outtextxy(190,150," 2} RESULT MENU ");
outtextxy(230,190," 3} EXIT ");
outtextxy(95,260," Please Select Your Option (1-3)- ");
gotoxy(65,18);
cin>>ch;
switch(ch)
{
case '1':{entry_menu();
break;}
case '2':{result();
break;}
case '3':{cleardevice();
settextstyle(3,0,8);
sleep(1);
outtextxy(20,120," THANK YOU!!! ");
settextstyle(3,0,3);
outtextxy(midx+150,280," Made By-  Ishan Patil & Yash Shinde ");
sleep(2);
break;}
default :outtextxy(30,45," Wrong Option!!! ");
}
}while(ch!='3');
settextstyle(7,0,3);
}


void write_student()
{
settextstyle(3,0,3);
cleardevice();
student st;
ofstream outFile;
outFile.open("student.dat",ios::binary|ios::app);
st.getdata();
outFile.write((char *) &st, sizeof(student));
outFile.close();
delay(200);
outtextxy(100,370," Student record Has Been Created ");
cin.ignore();
getch();
}



void display_all()
{
settextstyle(3,0,3);
cleardevice();
int midx=getmaxx()/2;
int midy=getmaxy()/2;
student st;
ifstream inFile;
inFile.open("student.dat",ios::binary);
if(!inFile)
{
cleardevice();
outtextxy(midx-150,midy," File could not be open!!! Press any Key... ");
return;
}
outtextxy(midx-100,5," DISPLAY ALL RECORD !!! ");
while(inFile.read((char *) &st, sizeof(student)))
{
st.showdata();
getch();
cleardevice();
}
inFile.close();
getch();
}


void display_sp(int n)
{
settextstyle(3,0,3);
int midx=getmaxx()/2;
int midy=getmaxy()/2;
cleardevice();
student st;
ifstream inFile;
inFile.open("student.dat",ios::binary);
if(!inFile)
{
cleardevice();
outtextxy(midx-150,midy," File could not be open!!! Press any Key... ");
return;
}
int flag=0;
while(inFile.read((char *) &st, sizeof(student)))
{
if(st.retrollno()==n)
{
st.showdata();
flag=1;
}
}
inFile.close();
if(flag==0)
{cleardevice();
outtextxy(midx-150,midy," Record do not exist "); }
getch();
}



void modify_student(int n)
{
settextstyle(3,0,3);
int midx=getmaxx()/2;
int midy=getmaxy()/2;
cleardevice();
int found=0;
student st;
fstream File;
File.open("student.dat",ios::binary|ios::in|ios::out);
if(!File)
{
cleardevice();
outtextxy(midx-150,midy," File could not be open!!! Press any Key... ");
return;
}
while(File.read((char *) &st, sizeof(student)) && found==0)
{
if(st.retrollno()==n)
{
st.showdata();
getch();
cleardevice();
outtextxy(midx-150,5," Please Enter the new details of student ");
st.getdata();
int pos=(-1)*sizeof(st);
File.seekp(pos,ios::cur);
File.write((char *) &st, sizeof(student));
sleep(3);
outtextxy(midx-90,370," Record Updated ");
found=1;
}
}
File.close();
if(found==0)
{
cleardevice();
outtextxy(midx-150,midy," Record not found!!! ");
}
getch();
}




void delete_student(int n)
{
settextstyle(3,0,3);
int midx=getmaxx()/2;
int midy=getmaxy()/2;
cleardevice();
student st;
ifstream inFile;
inFile.open("student.dat",ios::binary);
if(!inFile)
{
cleardevice();
outtextxy(25,midy-11," File could not be open !! Press any Key...");
return;
}
ofstream outFile;
outFile.open("Temp.dat",ios::out);
inFile.seekg(0,ios::beg);
while(inFile.read((char *) &st, sizeof(student)))
{
if(st.retrollno()!=n)
{
outFile.write((char *) &st, sizeof(student));
}
}
outFile.close();
inFile.close();
remove("student.dat");
rename("Temp.dat","student.dat");
outtextxy(midx-40,30," Record Deleted ..");
getch();
}


void result()
{
cleardevice();
char ch;
int rno;
settextstyle(8,0,5);
outtextxy(150,40," RESULT MENU ");
settextstyle(3,0,3);
outtextxy(40,100," 1} Class Result ");
outtextxy(40,160," 2} Student Report Card ");
outtextxy(40,220," 3} Back to Main Menu ");
outtextxy(40,280," Enter Choice (1-3)?  ");
gotoxy(37,19);
cin>>ch;
cleardevice();
switch(ch)
{
case '1' :{class_result(); break;}
case '2' :{cleardevice();
outtextxy(40,30," Enter Roll Number Of Student : ");
gotoxy(53,3);
cin>>rno;
display_sp(rno); break;}
case '3' :{break;}
default:outtextxy(40,50," Wrong  Choice ");
}
}



void intro()
{
cleardevice();
int midx=getmaxx()/2;
//int midy=getmaxy()/2;
settextstyle(7,0,5);
outtextxy(midx-280,10," STUDENT REPORT CARD ");
settextstyle(2,0,6);
outtextxy(midx+90,390,"Made by-");
outtextxy(midx+89,390,"Made by-");
outtextxy(midx+110,415," Ishan Patil { 7 }");
outtextxy(midx+109,415," Ishan Patil { 7 }");
outtextxy(midx+110,440," Yash Shinde { 14 }");
outtextxy(midx+109,440," Yash Shinde { 14 }");
settextstyle(6,0,4);
outtextxy(230,350," A.E.J.C-3 TARAPUR ");
outtextxy(230,349," A.E.J.C-3 TARAPUR ");

settextstyle(6,0,3);
outtextxy(165,135," N ");
outtextxy(180,130," i ");
outtextxy(190,125," s ");
outtextxy(205,120," h ");
outtextxy(220,115," a ");
outtextxy(235,110," n ");
outtextxy(250,105," k ");

outtextxy(165,165," A ");
outtextxy(180,160," j ");
outtextxy(190,155," a ");
outtextxy(205,150," y ");

outtextxy(165,195," A ");
outtextxy(180,190," d ");
outtextxy(195,185," i ");
outtextxy(205,180," t ");
outtextxy(220,175," y ");
outtextxy(235,170," a ");

outtextxy(165,225," D ");
outtextxy(180,220," h ");
outtextxy(190,215," a ");
outtextxy(205,210," r ");
outtextxy(215,205," m ");
outtextxy(235,200," e ");
outtextxy(250,195," n ");

outtextxy(315,115," R ");
outtextxy(330,120," u ");
outtextxy(345,125," c ");
outtextxy(360,130," h ");
outtextxy(375,135," i ");
outtextxy(385,140," t ");
outtextxy(395,145," a ");

outtextxy(315,150," N ");
outtextxy(330,155," e ");
outtextxy(345,160," e ");
outtextxy(363,165," l ");
outtextxy(375,170," u ");

outtextxy(315,185," P ");
outtextxy(330,190," r ");
outtextxy(345,195," e ");
outtextxy(360,200," e ");
outtextxy(375,205," t ");
outtextxy(385,210," i ");

line(140+20,130,140+20,300);
line(280+20,130,280+20,300);
line(420+20,130,420+20,300);

arc(250+20,129,0,120,30);
arc(310+20,129,60,180,30);
line(140+20,130,235+20,102);
line(420+20,130,321+20,102);

arc(250+20,300,0,120,30);
arc(310+20,300,60,180,30);
line(140+20,300,235+20,273);
line(420+20,300,321+20,272);

arc(255+20,300,0,100,25);
arc(305+20,300,80,180,25);
line(140+20,300,249+20,276);
line(420+20,300,310+20,275);

arc(260+20,300,0,100,20);
arc(300+20,300,80,180,20);
line(140+20,300,256+20,280);
line(420+20,300,303+20,280);

arc(265+20,300,0,100,15);
arc(295+20,300,80,180,15);
line(140+20,300,261+20,285);
line(420+20,300,299+20,285);

arc(270+20,300,0,100,10);
arc(290+20,300,80,180,10);
line(140+20,300,266+20,290);
line(420+20,300,293+20,290);

arc(274+20,300,0,80,5);
arc(286+20,300,91,180,5);
line(140+20,300,274+20,295);
line(420+20,300,285+20,295);

getch();
}



void entry_menu()
{
//int midx=getmaxx()/2;
int midy=getmaxy()/2;
cleardevice();
char ch;
int num;
settextstyle(3,0,4);
outtextxy(220,30, " ENTRY MENU ");
settextstyle(1,0,3);
outtextxy(50,60," 1} CREATE STUDENT RECORD ");
outtextxy(50,95," 2} DISPLAY ALL STUDENTS RECORDS ");
outtextxy(50,125," 3} SEARCH STUDENT RECORD ");
outtextxy(50,160," 4} MODIFY STUDENT RECORD ");
outtextxy(50,195," 5} DELETE STUDENT RECORD ");
outtextxy(50,230," 6} BACK TO MAIN MENU ");
outtextxy(50,265," Please Enter Your Choice (1-6)- ");
gotoxy(57,18);
cin>>ch;
cleardevice();
switch(ch)
{
case '1':{write_student(); break;}
case '2':{display_all(); break;}
case '3':{cleardevice();
settextstyle(3,0,3);
outtextxy(25,midy-11," Please Enter The roll number=> ");
gotoxy(55,16);
cin>>num;
settextstyle(3,0,3);
display_sp(num); break;}
case '4':{cleardevice();
settextstyle(3,0,3);
outtextxy(25,midy-11," Please Enter The roll number=> ");
gotoxy(55,16);
cin>>num;
settextstyle(3,0,3);
modify_student(num);break;}
case '5':{cleardevice();
settextstyle(3,0,3);
outtextxy(25,midy-11," Please Enter The roll number=> ");
gotoxy(55,16);
cin>>num;
settextstyle(3,0,3);
delete_student(num);break;}
case '6':{break;}
default: entry_menu();
}
}

 

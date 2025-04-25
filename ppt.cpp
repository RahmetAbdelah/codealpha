#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;


/*QUESTIONS FROM PPT 1
Write a C++ program that asks the user for three
numbers and displays the largest or smallest number
based on the user’s choice. You should have two
functions find_max (should return the largest value)
and find_min (should return the smallest value).




void find_max(int a,int b,int c){
    int maxi;
    if (a >= b && a >= c)
    maxi = a;
else if (b >= a && b >= c)
    maxi = b;
else
    maxi = c;
    cout << "Maximum value is: " << maxi;}


void find_min(int a,int b,int c){
    int mini;
    if (a <= b && a <= c)
    mini = a;
else if (b <= a && b <= c)
    mini = b;
else
    mini = c;
    cout << "Minimum value is: " << mini;}

    
       
int main() {
    int n1,n2,n3;
    cout<<"enter three numbers"<<endl;
    cin>>n1>>n2>>n3;
    cout<<"type mini for finding minimum and maxi for finding maximum"<<endl;
    string choice;
    cin>>choice;
    if (choice=="mini"){
       find_min(n1,n2,n3);
    }
    else if(choice=="maxi"){
        find_max(n1,n2,n3);
    }
    
 return 0;
}
Write a function that finds the factorial of a given
number (using loop) and show how the function is
called.
int fact=1;
 int factorial(int x){
   
    for(int i=x;i>=1;i--){
        
        fact*=i;

    }
    cout<<"factorial of"<<x<<"is"<<fact<<endl;

 }
 int main(){
    int num;
    cout<<"enter yournumber"<<endl;
    cin>>num;
    factorial(num);
 }

 For a function named getProduct and that has parameters namely num1 and
 num2 which their data type is integer and double respectively and that should
 multiply the integer value by the double number and then return the result as a
 double number. • Write a function declaration (prototype) for the getProduct function. 
 • Write the function call statement to the getProduct function, and assigning
 its return value to a product variable. • Name the actual arguments firstNum and secondNum.

 double getproduct(int num1,double num2){
    double sum=num1*num2;
    cout<<sum;
    return sum;
 }
 int main(){
    int first_num=3;
    double second_num=6.4;
    getproduct(first_num,second_num);
 }
 Write a function-based C++ statement that adds the cube of the number
stored in the num1 variable to the square root of the number stored in the
num2 variable. The program should prompt the user to enter the two number
inside main() function. The statement should assign the result to the answer
variable and return to the main() function. All of the variables have the double
data type. (Tip: use built in library to find the cube and square of the numbers)
#include <cmath>
int num1,num2;
double getsum(double num1,double num2){
    cout<<"enter two nums"<<endl;
    cin>>num1>>num2;
    double answer=sqrt(num2)+pow(num1,3);
    cout<<"answer is"<<answer<<endl;
    return answer;
}
int main(){
    getsum(num1,num2);
    retun 0;
}
    
Write a function based C++ program that find the Fibonacci series of a given
number. Define a function named fibonacci that has one argument with default
argument and returns integer. The function is called both with parameter and
without parameter.
int num1,c;
double fibonacci(int num1){
    int a=0;
    int b=1;
    for(int i=0;i<num1;i++){
        cout<<a<<endl; 
     c=a+b;
     a=b;
     b=c;

    }
    
 }
int main(){
    cout<<"enter a number"<<endl;
    cin>>num1;
    fibonacci(num1);
    return 0;
}
Write a program that print the right angle triangle pattern of minimum length 5
using ‘*’ as a default symbols. The program should prompt the user to choose
either to print default pattern or enter his/her own by entering different symbol
and size
char symbol;
void pattern(){
    cout<<"enter a symbol you want or it will use the default"<<endl;
    cin>>symbol;
    if(symbol=='*'){
     for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";

        }cout<<endl;
    }}
    else{
        for(int i=0;i<5;i++){
            for(int j=0;j<=i;j++){
                cout<<symbol;
    
            }cout<<endl;
        }
        
    }
}
int main(){
    pattern();
    return 0;
}
Write a function based program to find the square of integer and rational
number. Use two function of the same name that accept integer and double
parameters by reference.
#include <cmath>
double square(int num1,double num2){
    int ans=pow(numm1)
}
double square(int &num1,double &num2){}
------------------------------------
Write an application that read low & high temperature and find daily, weekly,
and monthly average temperature. Define two functions named tempFinder
with no parameter and 1 integer parameter-length respectively. The program
should prompt the user to read number of days in a week and month inside
main function. Call the functions with and with out parameter.
int low,high;

double temp[7];
double weekly_sum=0;
double tempfinder(){
    cout<<"enter the days low and high temprature respectively"<<endl;
    cin>>low>>high;
    double daily=(low+high)/2;
    cout<<"your dailly ave temp is"<<daily<<endl;
    cout<<"enter the temprature of the week"<<endl;
    for(int i=0;i<7;i++){
        cin>>temp[i];

        weekly_sum=weekly_sum+temp[i];
        
    }
    cout<<"your weekly average is"<<(weekly_sum)/7<<endl;
}
int main(){
    tempfinder();
    return 0;
}

examples in structure
-------------

struct student{
    char name[15];
    float mark[5];
};
float avemark(float smark[]){
    float total=0;
    for(int i=0;i<5;i++){
        total+=smark[i];
        

    }
    return(total/5);
}
int main(){
    student s1;
    cout<<"enter student mark"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter for"<<i+1<<" mark"<<endl;
        cin>>s1.mark[i];
    }
    cout<<"average score is"<<avemark(s1.mark)<<endl;
    return 0;
}
---------------------
struct person{
    char name[15];
    int age;
    float salary;

};
person getdata(person);
void displaydata(person);

int main(){
    person p1,p2;
    p2=getdata(p1);
    displaydata(p2);
    return 0;
}
person getdata(person p){
    cout<<"enter full name"<<endl;
    cin.get(p.name,15);
    cout<<"enter age"<<endl;
    cin>>p.age;
    cout<<"enter salary:"<<endl;
    cin>>p.salary;
    return p;

}
void displaydata(person p){
    cout<<"name"<<p.name<<endl;
    cout<<"age"<<p.age<<endl;
    cout<<"salary"<<p.salary<<endl;
   
}

--------------------------------
struct employee{
    int id;
    char name[15];
    int age;
    long salary;

};
void display(employee);
void getdata(employee&);
int main(){
    employee emp={114,"kunal",15,4500};
    display(emp);
    getdata(emp);
    display(emp);

}
void getdata(employee &p){
    cout<<"enter id"<<endl;; cin>>p.id;
    cin.clear();
    cin.ignore();
    cout<<"enter name"<<endl; cin.get(p.name,15);
   
    cout<<"enter age"<<endl; cin>>p.age;
   
    cout<<"enter salary"<<endl;cin>>p.salary;

    
}
void display(employee e){
    cout<<"id "<<e.id<<endl;
    cout<<"name "<<e.name<<endl;
    cout<<"age "<<e.age<<endl;
    cout<<"salary "<<e.salary<<endl;
}
---------------------------????????????
struct pixels{
    string color;
    int style;
};
void showpoint(pixels p,int n){
    cout<<"the"<<n<<"point color and point style"<<endl;
    cout<<p.color<<p.style<<endl;

}
pixels readpoint(){
    pixels mypoint;
    cout<<"your pixel color"<<endl;
    cin>>mypoint.color;
    cout<<"pixel style"<<endl;
    cin>>mypoint.style;
    return mypoint;

}
int main(){
    pixels point1=readpoint();
    showpoint(point1,1);
    pixels point2=point1;
    point1.color+=2;
    showpoint(point2,2);
    showpoint(point1,1);
    return 0;
}
--------------------------
struct student{
    int roll_no;
    char name[11];

};
int main(){
    student s1;
    cout<<"roll no"<<endl;
    cin>>s1.roll_no;
    cin.ignore();
    cout<<"enter name"<<endl;
    gets(s1.name);
    student *stu;
    stu=&s1;
    cout<<"roll no "<<(*stu).roll_no;
    cout<<"name"<<stu->name;
    return 0;

}
-----------------------------
struct phone{
    int area_code,exchange,number;

}  p1={212,767,8900},p2;
int main(){
    cout<<"enter area code"<<endl;
    cin>>p2.area_code;
    cout<<"enter exchange"<<endl;
    cin>>p2.exchange;
    cout<<"enter number"<<endl;
    cin>>p2.number;
    
    cout<<"("<<p1.area_code<<")"<<p1.exchange<<"-"<<p1.number<<endl;
    cout<<"("<<p2.area_code<<")"<<p2.exchange<<"-"<<p2.number<<endl;
    return 0;
}
-----------------------------


struct phone{
    int area_code,exchange,number;
}  p1={212,767,8900},p2;
struct stunum{
  string name;
  phone pos;
  void info(int n){
    

    for(int i=0;i<n;i++){
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter area code"<<endl;
    cin>>pos.area_code;
    cout<<"enter exchange"<<endl;
    cin>>pos.exchange;
    cout<<"enter number"<<endl;
    cin>>pos.number;

    cout << "Saved: " << name << " - (" 
    << pos.area_code << ") " 
    << pos.exchange << "-" 
    << pos.number << "\n";
}
  }
}s1;
int main(){

    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    s1.info(n);
    return 0;
}
OR ------     OR   ------      OR   ----   OR
struct phone{
    int area_code,exchange,number;
}  p1={212,767,8900};
struct stunum{
  string name;
  phone pos;
}p2[2];


int main(){
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    string name;
    for(int i=0;i<n;i++){
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter area code"<<endl;
    cin>>p2[i].pos.area_code;
    cout<<"enter exchange"<<endl;
    cin>>p2[i].pos.exchange;
    cout<<"enter number"<<endl;
    cin>>p2[i].pos.number;
}
cout << "\n\n" <<left
<< setw(15) << "Name"
<< setw(15) << "Area Code"
<< setw(15) << "Exchange"
<< setw(15) << "Number" << endl;

cout << string(60, '-') << endl; 


for (int i = 0; i < n; i++) {
cout << left
    << setw(15) << p2[i].name
    << setw(15) << p2[i].pos.area_code
    << setw(15) << p2[i].pos.exchange
    << setw(15) << p2[i].pos.number << endl;
}
    return 0;

}
--------------------------------------------------
int n;
struct stock{
    string name;
    float earnings;
    float price_ratio;
    float anticipated;
    void accept(){
        cout<<"enter name of stock"<<endl;
        cin>>name;
        cout<<"enter estimated dearning"<<endl;
        cin>>earnings;
        cout<<"enter price per earning"<<endl;
        cin>>price_ratio;
        anticipated=earnings*price_ratio;
        
    }
    

}p2[20];
void display(){
    cout<<"\n\n"<<left
    <<setw(15)<<"stock name"
    <<setw(15)<<"earnings"
    <<setw(15)<<"price_ratio"
    <<setw(15)<<"anticipated"<<endl;

    cout<<string((60),'-')<<endl;
    for (int i = 0; i < n; i++) {
    cout << left
    << setw(15) <<p2[i].name
    << setw(15) <<p2[i].earnings 
    << setw(15) << p2[i].price_ratio
    << setw(15) <<p2[i].anticipated<< endl;

}}
int main(){
    cout<<"enter the number of stocks"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
    p2[i].accept();
    
}
  display();

  return 0;
}
---------------------------------------------------



int n;


struct student{
    string name;
    int id;
    float mark;
    string grade;}info[20];
    student getdata(){
        for(int i=0;i<n;i++){
        cout<<"enter name"<<endl;
        cin>>info[i].name;
        cout<<"enter id"<<endl;
        cin>>info[i].id;
        cout<<"enter mark"<<endl;
        cin>>info[i].mark;}
    }
    void calc(){
        for(int i=0;i<n;i++){
        if(info[i].mark>=90){
            info[i].grade={'A'};
        }
        else if((info[i].mark>=70) & (info[i].mark<=89)){
            info[i].grade={'B'};
        }
        else if((info[i].mark>=50) & (info[i].mark<=69)){
            info[i].grade={'c'};
       }
       else{
        info[i].grade={'F'};
       }}

       cout<<"name\t\tID\t\tmark\t\tgrade"<<endl;

       cout<<string((60),'-')<<endl;
       for(int i=0;i<n;i++){
       cout<<info[i].name<<"\t\t"<<info[i].id<<"\t\t"
      <<info[i].mark<<"\t\t"<<info[i].grade<<endl;}
}
int main(){
    cout<<"for how many students"<<endl;
    cin>>n;
    getdata();
    calc();

    return 0;
}
   ------ ----------------------
   
#include <iostream>
#include <string>
using namespace std;

int n;

struct date {
    int day, month, year;
};

struct student {
    int roll;
    string name;
    int mark[5];
    date dob;
} a1[100];

void info() {
    for (int i = 0; i < n; i++) {
        cout << "Enter your name: ";
        cin.ignore();  // to clear previous newline
        getline(cin, a1[i].name);

        cout << "Enter your roll number: ";
        cin >> a1[i].roll;

        cout << "Enter your date of birth (day month year): ";
        cin >> a1[i].dob.day >> a1[i].dob.month >> a1[i].dob.year;

        for (int j = 0; j < 5; j++) {
            cout << "Enter your result for subject " << j + 1 << ": ";
            cin >> a1[i].mark[j];
        }
    }

    cout << "\nName\t\tRoll No\t\tDOB\t\tMarks\n";
    cout << string(60, '-') << endl;

    for (int i = 0; i < n; i++) {
        cout << a1[i].name << "\t\t" << a1[i].roll << "\t\t"
             << a1[i].dob.day << "/" << a1[i].dob.month << "/" << a1[i].dob.year << "\t";

        for (int j = 0; j < 5; j++) {
            cout << a1[i].mark[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter number of students: ";
    cin >> n;
    info();
    return 0;
}
    ------------------------------------
    • Declare a structure called student with member
variables: (id, name, mark[5], grade[5]) members. Write a program to input data for id, name and mark,
compute the grade and print the records of the student.
int n;
struct student{
    int id;
    string name;
    int mark[5];
    string grade[5];
    float total=0;
    int rank;
}s1[100];
void sortarray(){
    for(int i=0;i<n-1;i++){
        int maxindex=i;
        for(int j=i+1;j<n;j++){
            if(s1[maxindex].total<s1[j].total){
                maxindex=j;
            };
            student temp=s1[i];
            s1[i]=s1[maxindex];
            s1[maxindex]=temp;


        }
    }
}
void info(){
    for (int i = 0; i < n; i++)
    {
       cout<<"enter your name";
       cin>>s1[i].name;
       cout<<"enter id";
       cin>>s1[i].id;
       for (int j = 0; j< 5; j++)
       {
        cout<<"enter mark";
        cin>>s1[i].mark[j];
        if(s1[i].mark[j]>85){
            s1[i].grade[j]={'A'};
        }
        else if((s1[i].mark[j]>65)&(s1[i].mark[j]<84)){
            s1[i].grade[j]={'B'};
        }
        else if((s1[i].mark[j]>55)&(s1[i].mark[j]<64)){
            s1[i].grade[j]={'C'};}
       
       else{
        s1[i].grade[j]={'F'};
       }

       s1[i].total+=s1[i].mark[j];
    }
       sortarray();
       for(int i=0;i<n;i++){
          s1[i].rank=i+1;
       }
    }
    cout<<"\nName\t\tid\t\tmark\t\t\tgrade\t\t\ttotal\t\trank\n";
    cout << string((150), '-') << endl;
    for (int i = 0; i < n; i++)
    {
    cout<<s1[i].name<< "\t\t"<<s1[i].id<< "\t\t";
    for (int j = 0; j < 5; j++) {
        cout << s1[i].mark[j] << " ";}cout<<"\t\t";
    for (int j = 0; j < 5; j++) {
        cout<<s1[i].grade[j]<<" ";
        
    }cout<<"\t\t";
    
        cout<<s1[i].total<<"\t\t"<<s1[i].rank;
        
   
    cout<<endl;
      
}
}
int main(){
    cout<<"number of students";
    cin>>n;
    info();
    return 0;
}  

----------------------------------
void calc_ibm(float w,float &h,float *ibm){
    *ibm=w/(h*h);
    w=w*10;
    h=h*10;

}
int main(){
    float weight,height,my_ibm;
    cout<<"enter weight nad height ";
    cin>>weight>>height;
    calc_ibm(weight,height,&my_ibm);
        cout<<"your ibm is"<<my_ibm<<endl;
        cout<<weight<<" "<<height;
    
}
float *findmax(float a[],int n){
    float *themax=&(a[0]);

    for(int i=1;i<n;i++){
        if (a[i]>*themax){
            themax=&(a[i]);
        }
        return themax;
    }
}
int main(){
    float a[5]={0.0,3.0,1.5,2.0,4.1};
    float *maxa;
    maxa=findmax(a,5);
    cout<<"the max is:"<<*maxa<<endl;
    return 0;
}

---------------------------------------------(union)
union employee{
    int id,age;
    char name[25];
    long salary;
};
int main(){
    employee e;
    cout<<"enter employee id";
    cin>>e.id;
    cout<<"employee id"<<e.id<<endl;
    cout<<"enter employee name";
    cin>>e.name;
    cout<<"employee name"<<e.name<<endl;
    cout<<"enter employee age";
    cin>>e.age;
    cout<<"employee age"<<e.age<<endl;
    cout<<"enter employee salary";
    cin>>e.salary;
    cout<<"employee salary"<<e.salary<<endl;
return 0;


}
-----------------------------------
#include <iostream>
using namespace std;
enum week {
Monday, Tuesday, Wednesday,
Thursday, Friday, Saturday, Sunday
};
int main() {
week today;
today = Wednesday;
cout << "Day " << today+1;
cout<<"\nSize: "<<sizeof(week);
return 0;
}
enum colors { green=1, red, blue, black=0, white,
    brown=11, pink, yellow, aqua, gray
    }flag_color; 
    int main() {
    colors painting;
    painting = brown;
    flag_color = green;
    cout<<"\nPainting Colors: "<<endl;
    int j=0;
    for(int i=painting; i<= 15; ++i ) {
    cout<<painting+j<<" "; j++; }



    return 0;

    }
------------------------
#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[30];
    char grade[5];
    int chr[5]; // credit hours
    float gpa;
} mark;

void result() {
    cout << "Enter your ID: ";
    cin >> mark.id;
    cout << "Enter your Name: ";
    cin.ignore(); // to flush the newline character
    cin.getline(mark.name, 30);

    float totalPoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter your grade (A/B/C) and credit hour for subject " << i + 1 << ": ";
        cin >> mark.grade[i] >> mark.chr[i];

        float gvalue = 0;
        if (mark.grade[i] == 'A') {
            gvalue = 4.00;
        } else if (mark.grade[i] == 'B') {
            gvalue = 3.5;
        } else if (mark.grade[i] == 'C') {
            gvalue = 3.0;
        } else {
            cout << "Invalid grade entered. Assuming 0 points." << endl;
        }

        totalPoints += gvalue * mark.chr[i];
        totalCredits += mark.chr[i];
    }

    if (totalCredits != 0)
        mark.gpa = totalPoints / totalCredits;
    else
        mark.gpa = 0;

    cout << "\n--- Result ---" << endl;
    cout << "ID: " << mark.id << endl;
    cout << "Name: " << mark.name << endl;
    
    cout << "GPA: " << mark.gpa << endl;
}

int main() {
    result();
    return 0;
}
-------------------------------------*/
struct student{
    int id;
    char name[30];
    int mark[3];
    int total=0;
    int rank;
}marks;
float ave;
void result(){
    cout << "Enter your ID: ";
    cin >> marks.id;
    cout << "Enter your Name: ";
    cin.ignore(); 
    cin.getline(marks.name, 30);
    for (int i = 0; i < 5; i++) {
        cout << "Enter your mark for subject " << i + 1 << ": ";
        cin >> marks.mark[i] ;

       marks.total+=marks.mark[i];
       
    }
    ave=marks.total/3;
 void sortarray(){
        for(int i=0;i<n-1;i++){
            int maxindex=i;
            for(int j=i+1;j<n;j++){
                if(s1[maxindex].total<s1[j].total){
                    maxindex=j;
                };
                student temp=s1[i];
                s1[i]=s1[maxindex];
                s1[maxindex]=temp;
    
    
            }
        }
    }





}
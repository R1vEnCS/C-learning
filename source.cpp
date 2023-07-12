

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {

    
    return 0;
}

// Half a number
//int halfNum;
//cout << "Enter a number" << endl;
//cin >> halfNum;
//cout << "You entered number " << halfNum << " The half number is: " << halfNum / 2 << endl;

//-------------------------------------------------------------------------------------------------

//Sum total
//int a, b, c;
//cout << "Enter a number" << endl;
//cin >> a;
//cout << "Enter a second number" << endl;
//cin >> b;
//cout << "Enter a third number" << endl;
//cin >> c;
//cout << "The sum of the numbers you enetered is : " << a + b + c << endl;

//-------------------------------------------------------------------------------------------------

// average mark
//int mark1, mark2, mark3;
//cout << "Enter your first mark" << endl;
//cin >> mark1;
//cout << "Enter your second mark" << endl;
//cin >> mark2;
//cout << "Enter your third mark" << endl;
//cin >> mark3;
//
//cout << "Your average marks is: " << (mark1 + mark2 + mark3) / 3 << endl;

//-------------------------------------------------------------------------------------------------
// 
// swap numbers
//int a, b;
//cout << "Enter first number" << endl;
//cin >> a;
//cout << "Enter a second number" << endl;
//cin >> b;
//
//cout << b << " " << a << endl;
//-------------------------------------------------------------------------------------------------
// 
//rectangle area
//int a, b;
//cout << "Enter first rectangle area A" << endl;
//cin >> a;
//cout << "Enter second rectange area B" << endl;
//cin >> b;
//cout << "The answer is : " << a * b << endl;
//-------------------------------------------------------------------------------------------------
// 
// area
//int a, h;
//cout << "Enter A triangele area" << endl;
//cin >> a;
//cout << "Enter H trangele area" << endl;
//cin >> h;
//
//cout << "The answer is : " << a / 2 * h << endl;
//-------------------------------------------------------------------------------------------------

//int d;
//cout << "Enter The D area" << endl;
//cin >> d;
//cout << "The answer is : " << 3.14 * (d * d) / 4;

//-------------------------------------------------------------------------------------------------
//int a;
//cout << "Enter the A area" << endl;
//cin >> a;
//cout << "The answer is : " << 3.14 * ((a * a) / (2 * 2)) << endl;
//-------------------------------------------------------------------------------------------------

//int l;
//cout << "Enter the L area" << endl;
//cin >> l;
//cout << "The answer is : " << (l * l) / (4 * 3.14) << endl;
//-------------------------------------------------------------------------------------------------

//int a, b;
//cout << "Enter the A area" << endl;
//cin >> a;
//cout << "Enther the B area" << endl;
//cin >> b;
//cout << "The asnwer is : " << 3.14 * (b * b / 4) * (2 * a - b) / (2 * a + b);
//-------------------------------------------------------------------------------------------------

//int a;
//cout << "Please enter a number" << endl;
//cin >> a;
//cout << "The answer is" << endl;
//cout << a * a << endl;
//cout << a * a * a << endl;
//cout << a * a * a * a << endl;
//-------------------------------------------------------------------------------------------------
//int penny, nickel, dime, quarter, dollar;
//cout << "Enter how many pennies you have" << endl;
//cin >> penny;
//cout << "Enter how many nickels you have" << endl;
//cin >> nickel;
//cout << "Enter how many dimes you have" << endl;
//cin >> dime;
//cout << "Enter how many quarters you have" << endl;
//cin >> quarter;
//cout << "Enter how many dollars you have" << endl;
//cin >> dollar;
//int totalPennies = penny + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100);
//cout << "You have total pennies : " << totalPennies << endl;
//cout << "You have total dollars : " << totalPennies / 100 << endl;

//-------------------------------------------------------------------------------------------------
//int total, cash;
//cout << "Enter your bill" << endl;
//cin >> total;
//cout << "Enter your cash paid" << endl;
//cin >> cash;
//cout << "You need to pay back : " << cash - total << endl;
//-------------------------------------------------------------------------------------------------
//short int bill;
//float serviceFee = 0.1;
//float salesTax = 0.16;
//cout << "Enter your bill" << endl;
//cin >> bill;
//cout << "Your total bill is : " << (bill * serviceFee) + (bill * salesTax) + bill << endl;
//-------------------------------------------------------------------------------------------------
//int sec, min, hour, day;
//cout << "Enter how many sec" << endl;
//cin >> sec;
//cout << "Enter how many min" << endl;
//cin >> min;
//cout << "Enter how many hours" << endl;
//cin >> hour;
//cout << "Enter how many days" << endl;
//cin >> day;
//cout << "Total seconds is : " << sec + (min * 60) + (hour * 60 * 60) + (day * 24 * 60 * 60) << endl;
//-------------------------------------------------------------------------------------------------

//int totalsec, reminder1, reminder2, reminder3;
//
//cout << "Enter your total seconds" << endl;
//cin >> totalsec;
//int SPD = 24 * 60 * 60, SPH = 60 * 60, SPM = 60;
//reminder1 = totalsec % SPD;
//reminder2 = reminder1 % SPD;
//reminder3 = reminder2 % SPD;
//cout << "Your total seconds to days and hour,etc is : " << totalsec / SPD << ":" << reminder1 / SPH << ":" << reminder2 / SPM << ":" << reminder3 << endl;
//-------------------------------------------------------------------------------------------------

//int loanamount, monthlypayment;
//cout << "Enter your loan amount" << endl;
//cin >> loanamount;
//cout << "Enter your monthly payment" << endl;
//cin >> monthlypayment;
//
//cout << "Your Loan amount is : " << loanamount << " You can pay monthly : " << loanamount / monthlypayment << " Months" << endl;

//-------------------------------------------------------------------------------------------------
//int loanamount, monthsleft;
//cout << "Enter your loan amount" << endl;
//cin >> loanamount;
//cout << "Enter how many months" << endl;
//cin >> monthsleft;
//cout << "Months you need to settle the loan is : " << loanamount / monthsleft << endl;
//-------------------------------------------------------------------------------------------------
//int a, b;
//cout << "Please enter a number A" << endl;
//cin >> a;
//cout << "Please enter a number B" << endl;
//cin >> b;
//cout << (a == b) << endl;
//cout << (a != b) << endl;
//cout << (a > b) << endl;
//cout << (a < b) << endl;
//cout << (a >= b) << endl;
//cout << (a <= b) << endl;


//-------------------------------------------------------------------------------------------------
//cout << ((7 == 7) && (7 > 5)) << " True" << endl;
//cout << ((7 == 7) && (7 < 5)) << " false" << endl;
//cout << ((7 == 7) || (7 < 5)) << " true" << endl;
//cout << ((7 < 7) || (7 > 5)) << " true" << endl;
//cout << (!(7 == 7) && (7 > 5)) << " false" << endl;
//cout << ((7 == 7) && !(7 < 5)) << " true" << endl;
//
//cout << "Second round" << endl;
//cout << " " << endl;
//
//cout << ((5 > 6 && 7 == 7) || (1 || 0)) << " true" << endl;
//cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << " true" << endl;
//cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << " true" << endl;
//cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << " false" << endl;
//cout << ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3) && true) << " false" << endl;
//cout << ((5 > 6 && !(7 <= 8) && (8 > 1 || 4 <= 3)) || true) << " true" << endl;
//-------------------------------------------------------------------------------------------------
//int a, b;
//cout << "Enter A" << endl;
//cin >> a;
//cout << "Enter B" << endl;
//cin >> b;
//
//cout << "The answer is : " << a * sqrt(pow(b, 2) - pow(a, 2)) << endl;
//-------------------------------------------------------------------------------------------------
//const float pi = 3.14;
//int r;
//cout << "Enter r" << endl;
//cin >> r;
//cout << "The answer is : " << pi * pow(r, 2) << endl;
//-------------------------------------------------------------------------------------------------
//const float pi = 3.14;
//int d;
//cout << "Enter d" << endl;
//cin >> d;
//cout << "The answer is : " << (pi * pow(d, 2)) / 4 << endl;
//-------------------------------------------------------------------------------------------------
//const float pi = 3.14;
//int a;
//cout << "Enter A" << endl;
//cin >> a;
//cout << "The answer is : " << pi * pow(a, 2) / pow(2, 2) << endl;
//-------------------------------------------------------------------------------------------------
//const float pi = 3.14;
//int l;
//cout << "Enter L number" << endl;
//cin >> l;
//cout << "The answer is : " << pow(l, 2) / (4 * pi) << endl;
//-------------------------------------------------------------------------------------------------
//int a, b;
//const float pi = 3.14;
//cout << "Enter a" << endl;
//cin >> a;
//cout << "Enter b" << endl;
//cin >> b;
//cout << "The answer is : " << pi * (pow(b, 2) / 4) * (2 * a - b) / (2 * a + b) << endl;
//-------------------------------------------------------------------------------------------------
//int a, b, c;
//const float pi = 3.14;
//cout << "Enter A" << endl;
//cin >> a;
//cout << "Enter B" << endl;
//cin >> b;
//cout << "Enter C" << endl;
//cin >> c;
//float p = (a + b + c) / 2;
//float h = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
//cout << "The answer is : " << pi * pow(h, 2) << endl;
//-------------------------------------------------------------------------------------------------

//int a;
//cout << "Enter a number" << endl;
//cin >> a;
//cout << "The answer is : " << pow(a, 2) << " " << pow(a, 3) << " " << pow(a, 4) << endl;
//-------------------------------------------------------------------------------------------------
//int a, m;
//cout << "Enter a number" << endl;
//cin >> a;
//cout << "Enter now a power number to pow (a,m)" << endl;
//cin >> m;
//cout << "The answer is : " << pow(a, m) << endl;

//-------------------------------------------------------------------------------------------------
//struct CarWork {
//    string brand;
//    int year;
//    string model;
//
//};
//
//
//struct workplace {
//    int monthlySalary;
//    int yearlySalalary;
//    CarWork Car;
//
//};
//struct info {
//    string fullName;
//    int age;
//    string city;
//    string country;
//    workplace workInfo;
//};
//
//int main() {
//
//    info user1;
//    cout << "What's your full name ?" << endl;
//    cin >> user1.fullName;
//    cout << "Your age ?" << endl;
//    cin >> user1.age;
//    cout << "What city are you living in ?" << endl;
//    cin >> user1.city;
//    cout << "Where are you from" << endl;
//    cin >> user1.country;
//    cout << "How much is your monthly salary ? " << endl;
//    cin >> user1.workInfo.monthlySalary;
//    cout << "How much is your yearly salary ? " << endl;
//    cin >> user1.workInfo.yearlySalalary;
//    cout << "What car are you driving to work ?" << endl;
//    cin >> user1.workInfo.Car.brand;
//    cout << "***********************" << endl;
//    cout << "Your full name : " << user1.fullName << endl;
//    cout << "Age : " << user1.age << endl;
//    cout << "City : " << user1.city << endl;
//    cout << "Country : " << user1.country << endl;
//    cout << "MonthlySalary : " << user1.workInfo.monthlySalary << endl;
//    cout << "YearlySalary : " << user1.workInfo.yearlySalalary << endl;
//-------------------------------------------------------------------------------------------------
//
//using namespace std;
//
//enum enMarriedstatus { Single, Married };
//enum enGender { M, F };
//
//struct stAddress {
//    string Street;
//    string POBOX;
//    string zipcode;
//};
//
//struct stcontactInfo {
//    string phoneNumber;
//    string email;
//    stAddress address;
//};
//
//
//
//struct stUserDetails {
//    string fullname;
//    string age;
//    stcontactInfo contactinfo;
//    stAddress address;
//    enMarriedstatus marriedStatus;
//    enGender Gender;
//};
//
//int main() {
//
//    stUserDetails person1;
//    person1.fullname = "Yousuf";
//    person1.age = "21";
//    person1.contactinfo.phoneNumber = "123456";
//    person1.address.Street = "Queen1";
//    person1.Gender = enGender::M;
//    person1.marriedStatus = enMarriedstatus::Single;
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------
//string string1, string2, string3;
//
//cout << "Please Enter string1" << endl;
//getline(cin, string1);
//cout << "Please Enter string2" << endl;
//getline(cin, string2);
//cout << "Please Enter string3" << endl;
//getline(cin, string3);
//
//cout << "******************" << endl;
//cout << "The length of string1 is : " << string1.length() << endl;
//cout << "Charcers at 0,2,4,7 are: " << string1[0] << string1[2] << string1[4] << string1[7] << endl;
//cout << "Concatenating string2 and string3 : " << string2 + string3 << endl;
//cout << stoi(string2) * stoi(string3) << endl;
//-------------------------------------------------------------------------------------------------

//void swapNumber(int num1, int num2) {
//    cout << "Please enter num1" << endl;
//    cin >> num1;
//    int temp1 = num1;
//    cout << " Please Enter numb2" << endl;
//    cin >> num2;
//    num1 = num2;
//    cout << "The numbers before the swap : " << temp1 << " " << num2 << endl;
//    cout << "The numbers after the swap is : " << num1 << " " << temp1 << endl;
//
//
//
//}
//
//int main() {
//
//
//
//    swapNumber(10, 20);
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------
//
//void calcRectangle(int a, int b) {
//    cout << "Enter A" << endl;
//    cin >> a;
//    cout << "Enter B" << endl;
//    cin >> b;
//    float area = a * b;
//    cout << area << endl;
//
//}
//
//int main() {
//
//    calcRectangle(10, 20);
//
//    return 0;
//}



//-------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;

//enum gender { M, F };
//struct stinfo {
//    string fullname;
//    int age;
//    string city;
//    string country;
//    int monthlySalary;
//    int yearlySalary;
//    gender mygender;
//    bool married;
//    string phone;
//
//};
//
//void readInfo(stinfo& info) {
//    cout << "Enter your Full Name" << endl;
//    getline(cin, info.fullname);
//    cout << "Enter your age" << endl;
//    cin >> info.age;
//    cout << "What city are you living in" << endl;
//    cin >> info.city;
//    cout << "What country are you from" << endl;
//    cin >> info.country;
//    cout << "What's your monthly salary" << endl;
//    cin >> info.monthlySalary;
//    cout << "Enter your phone number" << endl;
//    cin >> info.phone;
//    cout << "Are you Married 0/1" << endl;
//    cin >> info.married;
//    cout << "What's your gender M/F" << endl;
//
//}
//
//void printInfo(stinfo info) {
//    info.yearlySalary = info.monthlySalary * 12;
//    cout << "***********************" << endl;
//
//    cout << "First Name : " << info.fullname << endl;
//    cout << "Age : " << info.age << " Years old" << endl;
//    cout << "City : " << info.city << endl;
//    cout << "Country : " << info.country << endl;
//    cout << "Monthly salary : " << info.monthlySalary << endl;
//    cout << "Yearly salary : " << info.yearlySalary << endl;
//
//    cout << "Phone number : " << info.phone << endl;
//    cout << "Is married : " << info.married << endl;
//
//    cout << "***********************" << endl;
//
//}
//int main() {
//    stinfo person1;
//    readInfo(person1);
//    printInfo(person1);
//
//    return 0;
//}

//-------------------------------------------------------------------------------------------------
//
//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;
//
//enum gender { M, F };
//struct stinfo {
//    string fullname;
//    int age;
//    string city;
//    string country;
//    int monthlySalary;
//    int yearlySalary;
//    gender mygender;
//    bool married;
//    string phone;
//
//};
//
//void readInfo(stinfo& info) {
//    cout << "Enter your Full Name" << endl;
//    getline(cin, info.fullname);
//    cout << "Enter your age" << endl;
//    cin >> info.age;
//    cout << "What city are you living in" << endl;
//    cin >> info.city;
//    cout << "What country are you from" << endl;
//    cin >> info.country;
//    cout << "What's your monthly salary" << endl;
//    cin >> info.monthlySalary;
//    cout << "Enter your phone number" << endl;
//    cin >> info.phone;
//    cout << "Are you Married 0/1" << endl;
//    cin >> info.married;
//    cout << "What's your gender M/F" << endl;
//
//}
//
//void printInfo(stinfo info) {
//    info.yearlySalary = info.monthlySalary * 12;
//    cout << "***********************" << endl;
//
//    cout << "First Name : " << info.fullname << endl;
//    cout << "Age : " << info.age << " Years old" << endl;
//    cout << "City : " << info.city << endl;
//    cout << "Country : " << info.country << endl;
//    cout << "Monthly salary : " << info.monthlySalary << endl;
//    cout << "Yearly salary : " << info.yearlySalary << endl;
//
//    cout << "Phone number : " << info.phone << endl;
//    cout << "Is married : " << info.married << endl;
//
//    cout << "***********************" << endl;
//
//}
//
//int main() {
//    stinfo person1;
//    readInfo(person1);
//    printInfo(person1);
//
//    return 0;
//}


//-------------------------------------------------------------------------------------------------
//struct strInfo {
//    string firstName;
//    string lastName;
//    int age;
//    string phone;
//
//};
//
//void readInfo(strInfo& persons) {
//    cout << "Enter your first name" << endl;
//    cin >> persons.firstName;
//    cout << "Enter your last name" << endl;
//    cin >> persons.lastName;
//    cout << "How old are you" << endl;
//    cin >> persons.age;
//    cout << "What's your phone number" << endl;
//    cin >> persons.phone;
//    cout << "***********************" << endl;
//
//
//}
//
//void printInfo(strInfo persons) {
//    cout << "***********************" << endl;
//
//    cout << "Your first name : " << persons.firstName << endl;
//    cout << "Your last name : " << persons.lastName << endl;
//    cout << "Your age : " << persons.age << endl;
//    cout << "Your phone number : " << persons.phone << endl;
//
//    cout << "***********************" << endl;
//
//
//
//}
//
//void readInfoPersons(strInfo persons[2]) {
//
//    readInfo(persons[0]);
//    readInfo(persons[1]);
//
//}
//
//void printInfoPersons(strInfo persons[2]) {
//
//    printInfo(persons[0]);
//    printInfo(persons[1]);
//}
//
//int main() {
//
//    strInfo persons[2];
//
//    readInfoPersons(persons);
//    printInfoPersons(persons);
//
//    return 0;
//}


//-------------------------------------------------------------------------------------------------

//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;
//
//
//enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };
//
//int main() {
//
//    cout << "*******************" << endl;
//    cout << "Please Choose A number" << endl;
//    cout << "(1) Red" << endl;
//    cout << "(2) Blue\n";
//    cout << "(3) Green\n";
//    cout << "(4) Yellow\n";
//    cout << "*******************" << endl;
//    cout << "Your choice ? " << endl;
//
//    int c;
//    cin >> c;
//    enScreenColor color;
//
//    color = (enScreenColor)c;
//    switch (color) {
//    case enScreenColor::Red:
//        system("color 4f");
//        break;
//    case enScreenColor::Blue:
//        system("color 1f");
//        break;
//    case enScreenColor::Green:
//        system("color 2f");
//        break;
//    case enScreenColor::Yellow:
//        system("color 6f");
//        break;
//    default:
//        system("color 4f");
//    }
//
//    return 0;
//}

//-------------------------------------------------------------------------------------------------

//using namespace std;
//
//
//enum enScreenColor { Add = 1, minus = 2, Multi = 3, Devide = 4 };
//
//int main() {
//
//    int num1;
//    int num2;
//
//
//
//
//    cout << "Enter num1\n";
//    cin >> num1;
//    cout << "Enter num2\n";
//    cin >> num2;
//    cout << "Enter Type of operation" << endl;
//    cout << "1: +" << endl;
//    cout << "2: -\n";
//    cout << "3: *\n";
//    cout << "4: /\n";
//    int c;
//    cin >> c;
//
//    enScreenColor otp;
//    otp = (enScreenColor)c;
//
//
//
//    switch (otp) {
//    case enScreenColor::Add:
//        cout << num1 + num2 << endl;
//        break;
//    case enScreenColor::minus:
//        cout << num1 - num2 << endl;
//        break;
//    case enScreenColor::Multi:
//        cout << num1 * num2 << endl;
//        break;
//    case enScreenColor::Devide:
//        cout << num1 / num2 << endl;
//        break;
//    default:
//        cout << "Enter Correct number" << endl;
//
//    }
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;
//
//void readInfo(int arr1[100], int& length) {
//    cout << "Enter how many numbers you want to do\n";
//    cin >> length;
//
//    for (int i = 0; i <= length - 1; i++) {
//        cout << "Enter Number " << i + 1 << endl;
//        cin >> arr1[i];
//
//    }
//}
//
//void printInfo(int arr1[100], int length) {
//    for (int i = 0; i <= length - 1; i++) {
//        cout << "\nNumber [" << i + 1 << "] " << arr1[i] << endl;
//
//    }
//}
//
//int sumCalc(int arr1[100], int length) {
//    int sum = 0;
//
//    for (int i = 0; i <= length - 1; i++) {
//        sum += arr1[i];
//    }
//
//    return sum;
//}
//
//float sumAvg(int arr1[100], int length) {
//    float sumAvg = 0;
//    for (int i = 0; i <= length - 1; i++) {
//        sumAvg += arr1[i];
//    }
//    return sumAvg / length;
//}
//
//int main() {
//
//    int arr1[100], length = 0;
//
//    readInfo(arr1, length);
//    printInfo(arr1, length);
//
//    cout << "\n*************************\n";
//    cout << "The sums total is : " << sumCalc(arr1, length) << endl;
//    cout << "The average numbers is : " << sumAvg(arr1, length) << endl;
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------

//struct strInfo {
//    string firstName;
//    string lastName;
//    int age;
//    string phone;
//
//};
//
//void readInfo(strInfo& persons) {
//    cout << "Enter your first name" << endl;
//    cin >> persons.firstName;
//    cout << "Enter your last name" << endl;
//    cin >> persons.lastName;
//    cout << "How old are you" << endl;
//    cin >> persons.age;
//    cout << "What's your phone number" << endl;
//    cin >> persons.phone;
//    cout << "***********************" << endl;
//
//
//}
//
//void printInfo(strInfo persons) {
//    cout << "***********************" << endl;
//
//    cout << "Your first name : " << persons.firstName << endl;
//    cout << "Your last name : " << persons.lastName << endl;
//    cout << "Your age : " << persons.age << endl;
//    cout << "Your phone number : " << persons.phone << endl;
//
//    cout << "***********************" << endl;
//
//
//
//}
//
//void readInfoPersons(strInfo persons[100], int& users) {
//    cout << "Enter how many users you want to enter ? " << endl;
//    cin >> users;
//
//    for (int i = 0; i <= users - 1; i++) {
//        readInfo(persons[i]);
//
//    }
//
//}
//
//void printInfoPersons(strInfo persons[100], int users) {
//
//    for (int i = 0; i <= users - 1; i++) {
//        printInfo(persons[i]);
//
//    }
//}
//
//int main() {
//
//    int users = 0;
//
//
//    strInfo persons[100];
//
//    readInfoPersons(persons, users);
//    printInfoPersons(persons, users);
//
//    return 0;
//}

//-------------------------------------------------------------------------------------------------
//
//
//int readingDataWhile(int from, int to) {
//
//    int num1;
//    cout << "Enter a number between 18-45" << endl;
//    cin >> num1;
//
//    while (num1 < from || num1 > to) {
//        cout << "Enter a number between 18-45" << endl;
//        cin >> num1;
//    }
//    return num1;
//}
//
//int readingDataDoWhile(int from, int to) {
//    int num1;
//
//    do {
//        cout << "Enter a number between 18-45" << endl;
//        cin >> num1;
//    } while (num1 < from || num1 > to);
//
//    return num1;
//}
//int main() {
//
//    cout << "\n The number you entered : " << readingDataDoWhile(18, 45) << endl;
//
//    return 0;
//}

//-------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
class Time {
private:
int hour, mint,scnd;
public:
Time(){
hour = 0;
mint = 0;
scnd = 0;}
Time(int h, int m, int s){
hour = h;
mint = m;
scnd = s;}
void input(){
cout << "Enter hours, minutes, seconds: ";
cin >> hour >> mint >> scnd;}
void display() const{
if (hour < 10){
cout << "0" << hour << ":";}
else{
cout << hour<< ":";}
if (mint < 10){
cout << "0" << mint << ":";}
else{
cout << mint << ":";}
if (scnd < 10){
cout << "0" << scnd << endl;}
else{
cout << scnd << endl;} }
void addTime(const Time &t1, const Time &t2)  {
scnd = t1.scnd + t2.scnd;
mint = t1.mint + t2.mint;
hour = t1.hour + t2.hour;
if (scnd >= 60){
scnd -= 60;
mint++;}
if (mint >= 60){
mint-= 60;
hour++;}}
};
int main(){
int h1, m1, s1, h2, m2, s2;
cout << "Enter time 1 hours minutes seconds: "<<endl;
cin >> h1 >> m1 >> s1;
cout << "Enter time 2 hours minutes seconds: "<<endl;
cin >> h2 >> m2 >> s2;
const Time t1(h1, m1, s1);
const Time t2(h2, m2, s2);
Time t3;
cout << "Time 1: "<<endl;
t1.display();
cout << "Time 2: "<<endl;
t2.display();
t3.addTime(t1, t2);
cout << "Sum (time 1 + time 2): ";
t3.display();
return 0;
}

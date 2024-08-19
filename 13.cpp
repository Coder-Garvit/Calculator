#include<iostream>
using namespace std;

double e = 2.718281828459045;
double pie = 3.14159265359;

double factorial (double n) {
    if (n<=1){
        return 1;
    }
    n = n*factorial(n-1);
    return n;

}
void power () {

    cout<<"Type the value of base "<<endl;
    double result = 1;
    int power ;
    double base;
    cin>>base;
    cout<<"Type the power "<<endl;
    cin>>power; 
    for(int i=1; i<=power;i++){
        result = result*base;

    }
    cout<< result<< endl;
        
}

double sin (double angle){
    double x = 0;
    if (angle == 0 || ((int)angle%180) == 0) {
        cout<<"The value of Sin is 0"<<endl;
    }
    else if ((angle == 90) || ((((int) angle%90) == 0)&& ((int ) angle %180 != 0))){
        cout<<"The value of Sin is 1"<<endl;

    }
    else {
        double y = 1;
        
        angle = angle*pie/180;
        for(int i = 1; i<50; i++){
            y = y*angle/factorial(i);
            if (i%4 == 3){
                y= y*(-1);
            }
            
            i++;
            x = x+y;        
    }
    
    } 
    return x;
}
double cos (double angle){
    double x = 0;
    if (angle == 0 || ((int)angle%180) == 0) {
        cout<<"The value of Cos is 1"<<endl;
    }
    else if ((angle == 90) || ((((int) angle%90) == 0)&& ((int ) angle %180 != 0))){
        cout<<"The value of Cos is 0"<<endl;

    }
    else {
        double y = 1;
        
        angle = angle*pie/180;
        for(int i = 0; i<20; i++){
            if(i == 0){
                y = 1;
            }
            else{
            y = y*angle/factorial(i);
            if (i%2 == 0){
                y= y*(-1);
            }
        }
            
            i++;
            x = x+y;        
    }
    
    } 
    return x;
}
void tan(){
    cout<<"Type the angle in degree "<<endl;
    double angle;
    cin>>angle;
    if (angle == 0 || ((int)angle%180) == 0) {
        cout<<"The value of Tan is 0"<<endl;
    
    }
    else if ((angle == 90) || ((((int) angle%90) == 0)&& ((int ) angle %180 != 0))){
        cout<<"The value of Tan is not defined "<<endl;
    }
    else {
        double x = sin(angle)/cos(angle);
        cout<<"The value of tan is "<<x<<endl;
    }


}
void cosec() {
    cout<<"Type the angle in degree "<<endl;
    double angle;
    cin>>angle;
    if (angle == 0 || ((int)angle%180) == 0) {
        cout<<"The value of Cosec is Not defined"<<endl;
    
    }
    else if ((angle == 90) || ((((int) angle%90) == 0)&& ((int ) angle %180 != 0))){
        cout<<"The value of Cosec is 1 "<<endl;
    }
    else {
        double x = 1/sin(angle);
        cout<<"The value of Cosec is "<<x<<endl;
    }
}
void sec() {
    cout<<"Type the angle in degree "<<endl;
    double angle;
    cin>>angle;
    if (angle == 0 || ((int)angle%180) == 0) {
        cout<<"The value of Sec is 1 "<<endl;
    
    }
    else if ((angle == 90) || ((((int) angle%90) == 0)&& ((int ) angle %180 != 0))){
        cout<<"The value of Sec is Not defined "<<endl;
    }
    else {
        double x = 1/cos(angle);
        cout<<"The value of Sec is "<<x<<endl;
    }
}
void cot() {
    cout<<"Type the angle in degree "<<endl;
    double angle;
    cin>>angle;
    if (angle == 0 || ((int)angle%180) == 0) {
        cout<<"The value of Cot is not defined "<<endl;
    
    }
    else if ((angle == 90) || ((((int) angle%90) == 0)&& ((int ) angle %180 != 0))){
        cout<<"The value of Cot is 0 "<<endl;
    }
    else {
        double x = cos(angle)/sin(angle);
        cout<<"The value of Cot is "<<x<<endl;
    }
}


void logarithm () {
    double x;
    cout<<"Enter your number "<<endl;
    cin>>x;
    if (x<=0){
        cout<<"Logarithm is not defined "<<endl;
    }
    else { 
    x=x-1;
    double y=1;
    double result = 0;
    for (int i = 1; i<10; i++) {
    y = x*y/i;
    if (i%2 == 0) {
        y = (-1)*y;
    }
    result = result + y;
    
    }
    cout<<result<<endl;
} }
double sqrt (double x ){
    double y = x;
    double z = (y + (x / y)) / 2;
    
    if (x > 0 && x < 2) {
        return x;
    }
    else { 
        while (abs(y - z) >= 0.00001) {

            y = z;
            z = (y + (x / y)) / 2;
        }
    }
    return z;
}
void quadratic (){
    cout<<"The quadratic is in ax^2 + bx + c format "<<endl;
    cout<<"Type a"<<endl;
    int a;
    cin>>a;
    cout<<"Type b"<<endl;
    int b;
    cin>>b;
    cout<<"Type c"<<endl;
    int c;
    cin>>c;
    double z = (b*b - 4*a*c);
    if (z < 0) {
        cout<<"The roots are imaginary"<<endl;
    }
    else if (z == 0) {
        cout<<"The roots are identical"<<endl;
        double y = z;
        y = (-b+y);
        y = y/2;
        y = y/a;
        cout<<"The identical root is "<<y<<endl;
    }
    else {
        double y = sqrt (z);
        double r1 = (-b+y);
        r1 = r1/2;
        r1 = r1/a;
        double r2 = (-b-y);
        r2 = r2/2;
        r2 = r2/a; 
        cout<<"The roots are real "<<endl;
        cout<< "First root is "<<r1<<endl;
        cout<<"Second root is "<<r2<<endl;

    }

}
int main () {
    int option;
    cout<<"Press 1 to use arithmetic operators"<<endl;
    cout<<"Press 2 to use trigonometric function"<<endl;
    cout<<"Press 3 to use logarithmic function"<<endl;
    cout<<"Press 4 to use exponential function"<<endl;
    cout<<"Press 5 to get square root of a number"<<endl;
    cout<<"Press 6 to get the roots of a quadratic equation"<<endl;
    cin>>option;
    switch (option) {
        case 1: 
        int operations;
        cout<<"Press 1 for Addition"<<endl;
        cout<<"Press 2 for Subtraction"<<endl;
        cout<<"Press 3 for Division"<<endl;
        cout<<"Press 4 for Multiplication"<<endl;
        cin>>operations;
        switch (operations)
        {
            case 1 :
            cout<<"Enter the first number"<<endl;
            double z;
            cin>>z;
            cout<<"Enter the second number"<<endl;
            double i;
            cin>>i;
            cout<<"The Sum of two number is "<<z+i<<endl;
            break;
            case 2 :
            cout<<"Enter the first number"<<endl;
            double p;
            cin>>p;
            cout<<"Enter the second number"<<endl;
            double q;
            cin>>q;
            cout<<"The subtraction of two number is "<<p-q<<endl;
            break;
            case 3 :
            cout<<"Enter the first number"<<endl;
            double f1;
            cin>>f1;
            cout<<"Enter the second number"<<endl;
            double f2;
            cin>>f2;
            cout<<"The answer is  "<<f1/f2<<endl;
            break;
            case 4 :
            cout<<"Enter the first number"<<endl;
            double t;
            cin>>t;
            cout<<"Enter the second number"<<endl;
            double u;
            cin>>u;
            cout<<"The product of two number is "<<t*u<<endl;
            break;
        default:
            cout<<"Invalid option";
            break;
        }
        break;
        case 2 :
        int trigonFunc;
        cout<<"Press 1 for Sin"<<endl;
        cout<<"Press 2 for Cos"<<endl;
        cout<<"Press 3 for Tan"<<endl;
        cout<<"Press 4 for Cosec"<<endl;
        cout<<"Press 5 for Sec"<<endl;
        cout<<"Press 6 for Cot"<<endl;
        cin>>trigonFunc;
        switch (trigonFunc)
        {
        case 1:
            cout<<"Type the angle in degree "<<endl;
            double sinAngle;
            cin>>sinAngle;
            cout<<sin(sinAngle);
            break;
        case 2:
            cout<<"Type the angle in degree "<<endl;
            double angle;
            cin>>angle;
            cout<<cos(angle);
            break;
        case 3:
            tan();
            break;
        case 4:
            cosec();
            break;
        case 5:
            sec();
            break;
        case 6:
            cot();
            break;
        default:
            cout<<"Invalid option";
            break;
        }
        break;
    case 3 :
       logarithm();
       break;
    case 4 :
       power();
       break;
    case 5 :
       double y;
       cout<<"Type the number ";
       cin>>y;
       cout<<sqrt (y);
       break;
    case 6 :
       quadratic();
       break;
    default:
       cout<<"Invalid option";
       break;
    }
    return 0;
}
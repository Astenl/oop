//Vilskiy Alexey
//Qt Creator 4.12.4

#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

void print();

class Power
{
public:
    float x1;
    float x2;
    Power() : x1(3), x2(2){
    }

    ~Power(){
    }

    void set(float a, float b){
        x1 = a;
        x2 = b;
    }
    float calculate(){
        return (pow(x1,x2));
    }
};

class RGBA
{
public:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;
    RGBA() : m_red(0), m_green(0), m_blue(0), m_alpha(255) {
    }
    RGBA(std::uint8_t red,
         std::uint8_t green,
         std::uint8_t blue,
         std::uint8_t alpha) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {
    }
    ~RGBA() {
    }
};

void print(std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a){
    cout << r << endl;
    cout << g << endl;
    cout << b << endl;
    cout << a << endl;
}

class Stack
{
private:
    int arr[10];
    int flag;
public:
    void reset(){
        flag = 0;
        memset( arr, 0, 10);
    }
    bool push(int num){
        if(flag > 9) return false;
        else{
            arr[flag] = num;
            flag++;
            return true;
        }
    }
    void pop(){
        if(flag == 0) cout << "stack is empty" << endl;
        else{
            arr[flag] = 0;
            flag--;
        }
    }
    void print(){
        int i = 0;
        if(flag == 0) cout << "." << endl;
        else {
            do {
                cout << arr[i] << " ";
                i++;
            } while (i < flag);
            cout << endl;
        }
    }
};

int main()
{
    // task1
    cout << "task1" << endl;
    Power task1;
    task1.set(5,2);
    cout << task1.calculate() << endl;
    cout << endl;

    // task2
    cout << "task2" << endl;
    RGBA task2(75,90,154,201);
    print(task2.m_red, task2.m_green, task2.m_blue, task2.m_alpha);
    cout << endl;

    // task3
    cout << "task3" << endl;
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    cout << endl;

    return 0;
}


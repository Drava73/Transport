#include <iostream> 
#include <string>
using namespace std;

class Transport  
{
protected: //наследуются
    int rst;
    int year;
    int speed;
     


    public:
    Transport() :
        rst(0),
        speed(0),
        year(0) {
    
    }  
    Transport(int c, int s, int y) :
        rst(c),
        speed(s),
        year(y) {
    
    }
    virtual void getdata() = 0;   
    virtual void putdata() = 0;  
};

class Plane : public Transport  
{
private:  
        int passenger;
public:
    Plane() :  passenger(0) {} 
    Plane(int h, int p) :  passenger(p) {}
    void getdata()   
    {
        cout << "Введите информацию о самолёте: " << endl;
        cout << "Введите цену: "; cin >> rst;
        cout << "Введите расход топлива на 100км: "; cin >> speed;
        cout << "Год выпуска: "; cin >> year;
        cout << "Введите пассижироёмкость: "; cin >> passenger;
    }
    void putdata()  
    {
        cout << "Информация о самолёте: " << endl;
        cout << "Цена : " << rst << endl;
        cout << "Расход топлива на 100км: " << speed << endl;
        cout << "Год изготовления: " << year << endl;
        cout << "Пассажироёмкость: " << passenger << endl;
    }
};

class Ship : public Transport  
{
private:
    int ship_pas;
    string str;
public:
    Ship() : ship_pas(0) {}
    Ship(int s) : ship_pas(s) {}
    void getdata()  
    {
        cout << "Введите информацию о корабле: " << endl;
        cout << "Введите цену: "; cin >> rst;
        cout << "Введите расход топлива на 100км: "; cin >> speed;
        cout << "Год выпуска: "; cin >> year;
        cout << "Введите пассажироёмкость: "; cin >> ship_pas;
        
    }
    void putdata()  
    {
        cout << "Информация о корабле: " << endl;
        cout << "Цена:  " << rst << endl;
        cout << "Расход топлива на 100км: " << speed << endl;
        cout << "Год изготовления: " << year << endl;
        cout << "Пассажироёмкость судна: " << ship_pas << endl;
        
    }
};

class Jеер : public Transport
{
private:
     
    string mark;
public:
    
    void getdata()
    {
        cout << "Введите информацию о джипе: " << endl;
        cout << "Введите марку авто: "; cin >> mark;
        cout << "Введите цену "; cin >> rst;
        cout << "Введите расход топлива на 100км: "; cin >> speed;
        cout << "Год выпуска: "; cin >> year;
        
        
    }
    void putdata()
    {
        cout << "Информация о джипе:" << endl;
        cout << "Марка: " << mark << endl;
        cout << "Цена:  " << rst << endl;
        cout << "Расход топлива на 100км: " << speed << endl;
        cout << "Год изготовления: " << year << endl;
         
    }
};

class Bike : public Transport
{
private:
    int vss;
    string mark;
public:
    Bike() : vss(0) {}
    Bike(int c) : vss(c) {}
    void getdata()
    {
        cout << "Введите информацию о велосипеде: " << endl;
        cout << "Введите название велосипеда: "; cin >> mark;
        cout << "Введите цену: "; cin >> rst;
        cout << "Год выпуска: "; cin >> year;
        cout << "Введите вес велосипеда: "; cin >> vss;
         
    }
    void putdata()
    {
        cout << "Информация о велосипеде:" << endl;
        cout << "Название велосипеда:" << mark << endl;
        cout << "Цена:  " << rst << endl;
        cout << "Год изготовления: " << year << endl;
        cout << "Вес: " << vss << endl;
       
    }
};

class Truck : public Transport
{
private:
   
    string mark;
public:
        void getdata()
    {
        cout << "Введите информацию о грузовике: " << endl;
        cout << "Введите марку авто "; cin >> mark;
        cout << "Введите цену: "; cin >> rst;
        cout << "Введите скорость: "; cin >> speed;
        cout << "Год выпуска: "; cin >> year;
               
    }
    void putdata()
    {
        cout << "Информация о грузовике:" << endl;
        cout << "Марка: " << mark << endl;
        cout << "Цена : " << rst << endl;
        cout << "Скорость: " << speed << endl;
        cout << "Год изготовления: " << year << endl;
         
    }
};


int main()
{
    Plane p1;
    Jеер j1;
    Ship s1;
    Truck t1;
    Bike b1;
    setlocale(0, "ru");
    cout << "1.Самолёт" << endl;
    cout << "2.Велосипед" << endl;
    cout << "3.Джип" << endl;
    cout << "4.Сyдно" << endl;
    cout << "5.Грузовик" << endl;
    cout<< "\tВведите пyнкт:";
    int nkt;
    cin >> nkt;
    switch (nkt)
    {
    case 1://самолёт
        
        p1.getdata();
        p1.putdata();
        break;
    case 2://Велосипед
        b1.getdata();
        b1.putdata();
        break;
    case 3://Джип
        
        j1.getdata();
        j1.putdata();
        break;
    case 4://Сyдно
        
        s1.getdata();
        s1.putdata();
        break;
    case 5://Грузовик
        t1.getdata();
        t1.putdata();
        break;
    default:
        cout << "Ошибка" << endl;
        break;
    }

           
    
}
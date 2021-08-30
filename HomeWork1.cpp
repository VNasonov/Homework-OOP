#include <iostream>
#include <cmath>

using namespace std;

class Power
{
private:

    float num1 = 1;
    float num2 = 1;

public :

    void Set(float num1, float num2)
    {               
        this->num1 = num1;        
        this->num2 = num2;
    }

    float Calculate()
    {
        float powerResult;
        powerResult = pow(num1, num2);

        cout << "Результат возведения первого числа в степень, равную второму: " << powerResult << endl;
        return powerResult;
    }

    void Print()
    {
        cout << num1 << " " << num2 << endl;
    }
};

class RGBA
{
private:

    uint8_t m_alpha = 255;
    uint8_t m_red = 0;
    uint8_t m_green = 0;
    uint8_t m_blue = 0;

public:

    RGBA()
    {
    }

    RGBA(uint8_t m_alpha, uint8_t m_red, uint8_t m_green, uint8_t m_blue)
    {
        this->m_alpha = m_alpha;
        this->m_red = m_red;
        this->m_green = m_green;
        this->m_blue = m_blue;
    }    

    void print()
    {
        cout << static_cast <unsigned> (m_alpha) << " ";
        cout << static_cast <unsigned> (m_red) << " ";
        cout << static_cast <unsigned> (m_green) << " ";
        cout << static_cast <unsigned> (m_blue) << " " << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
}

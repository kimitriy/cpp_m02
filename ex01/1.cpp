#include <iostream>
#include <inttypes.h>
#include <bitset>
#include <cstdlib> // for atof(3)

void floatToBinary(float f, std::string& str)
{
	union { float f; uint32_t i; } u;
	u.f = f;
	str.clear();

	for (int i = 0; i < 32; i++)
	{
		if (u.i % 2)  str.push_back('1');
		else str.push_back('0');
		u.i >>= 1;
	}

	// Reverse the string since now it's backwards
	std::string temp(str.rbegin(), str.rend());
	str = temp;
}


int	add(int summand, int addend)
{
	/*Перенос.*/
	int carry	= 0x00;

	/*Итерировать до тех пор, пока не закончится перенос на старший разряд.*/
	while(addend != 0x00)
	{
		/*Выставить флаг под разрядами с установленными битами.*/
		carry	= (summand & addend);
		/*Снять с первого слагаемого биты, разряд по которым уже учтен.*/
		summand	= summand ^ addend;
		/*Перенос переводится в старший разряд.*/
		addend	= (carry << 1);
	}
	return summand;
}

int	sub(int minuend, int subtrahend)
{
	/*Отрицательный перенос.*/
	int borrow	= 0x00;

	/*Итерировать до тех пор, пока не закончится перенос на младший разряд.*/
	while(subtrahend != 0x00)
	{
		/*Выставить флаг под разрядами с установленными битами.*/
		borrow = ((~minuend) & subtrahend);
		/*Снять с уменьшаемого биты, разряд по которым уже учтен.*/
		minuend = minuend ^ subtrahend;
		/*Перенос переводится в старший разряд.*/
		subtrahend = (borrow << 1);
	}
	return minuend;
}

int	mul(int mul1, int mul2)
{
	int result = 0;
	/*Пока второй множитель не равен нулю.*/
	while(mul2 != 0)
	{
		/*Если установлен бит в очередном разряде...*/
		if ((mul2 & 1) == 1)
		{
			/*сложить первый множитель с самим собою.*/
			result = add(result, mul1);
		}
		/*Очередной сдвиг первого множителя влево ("лесенка")*/
		mul1 <<=  1;
		/*Подводим очередной разряд в начало для сверки с условием оператора if()*/
		mul2 >>= 1;
	}
	return result;
}

int	dvd(int dividend, int divisor)
{
	/*Знак, частное и маска для выставления битов на частном.*/
	int quotient = 0x00, mask = 0x01;
	/*Для возвращения делителя в исходное состояние.*/
	int temp = divisor;
	/*Знак отрицательный если только одна переменная отрицательная.*/
	int sign = ((dividend < 0)^(divisor < 0)) ? sign = -1 : 1;
	
	/*Получить абсолютные значения.*/
	dividend	= dividend	< 0 ? add((~dividend), 1) : dividend;
	divisor		= divisor	< 0 ? add((~divisor), 1) : divisor;
	
	/*Вернуть 0 если делимое меньше делителя.*/
	if (dividend < divisor) return quotient;

	while(dividend > 0 || divisor != 0)
	{
		/*Сдвигать влево пока условие истинно.*/
		if ((dividend >= (divisor << 0x01)) && ((divisor << 0x01) > 0))
		{
			divisor	<<= 0x01;
			mask	<<= 0x01;
		}
		/*Граница обнаружена.*/
		else
		{
			/*В переменной "частное" выставить бит.*/
			quotient = quotient | mask;
			/*Вычесть текущее значение делителя от делимого.*/
			dividend = sub(dividend, divisor);
			/*Возвращаем делитель и маску в исходное положение.*/
			divisor	= temp;
			mask	= 0x01;
		}
	}
	return mul(quotient, sign);
}


int main() 
{
	/*
	int	a = 15;
	std::cout << a << "    : " << std::bitset<32>(a) << std::endl;
	int	b = 5;
	std::cout << b << "     : " << std::bitset<32>(b) << std::endl;

	std::cout << std::endl;

	int	c = a + b;
	std::cout << "[+]" << "   : " << std::bitset<32>(c) << std::endl;
	c = add( a, b );
	std::cout << "add" << "   : " << std::bitset<32>(c) << std::endl;
	std::cout << std::endl;

	c = a - b;
	std::cout << "[-]" << "   : " << std::bitset<32>(c) << std::endl;
	c = sub( a, b );
	std::cout << "sub" << "   : " << std::bitset<32>(c) << std::endl;
	std::cout << std::endl;
	
	c = a * b;
	std::cout << "[*]" << "   : " << std::bitset<32>(c) << std::endl;
	c = mul( a, b );
	std::cout << "mul" << "   : " << std::bitset<32>(c) << std::endl;
	std::cout << std::endl;
	
	c = a / b;
	std::cout << "[/]" << "   : " << std::bitset<32>(c) << std::endl;
	c = dvd( a, b );
	std::cout << "div" << "   : " << std::bitset<32>(c) << std::endl;
	std::cout << std::endl;
	*/

	float f = 42.42;
	
	std::string str;
	floatToBinary(f, str);
	std::cout << f << " : " << str << std::endl;

	std::cout << "1" << " :     " << std::bitset<32>(1) << std::endl;
	
	int	sh_1;
	sh_1 = 1 << 8;
	std::cout << sh_1 << " :   " << std::bitset<32>(sh_1) << std::endl;

	int		i;
	i = f * (1 << 8);
	std::cout << i << " : " << std::bitset<32>(i) << std::endl;

	float f2;
	f2 = i >> 8;
	floatToBinary(f2, str);
	std::cout << f2 << " : " << str << std::endl;

	// std::cout << " " << a << " : " << std::bitset<32>(a) << std::endl;
	// std::cout << b << " : " << std::bitset<32>(b) << std::endl;
	// std::cout << std::endl;
	
	// std::cout << "c = " << std::bitset<32>(c) << std::endl;
	return (0);
}
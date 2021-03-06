#include <iostream>

int main()
{
	/*101010 & 110010 -> 100010 (побитово "И")
		където битовете и на двете числа са 1 в резултата също е единица
		останалите битове стават нула
		101010
		   &
		110010
		  =
		100010*/

		/*101010 | 110010 -> 111010 (побитово "ИЛИ")
		където бит на поне едно от двете числа е 1 в резултата бита е единица
		останалите битове стават нула (където битовете и на двете числа са 0 в резултата бита е 0
		101010
		   |
		110010
		   =
		111010*/

		/*101010 ^ 110010 -> 011000 (XOR)
		където битовете на двете числа са различни ((1 и 0)или(0 1)) в резултата бита е 1
		останалите битове стават нула (тоест където битовете на двете числа са еднакви)
		101010
		  ^
		110010
		=
		 011000*/

	/*
	~ (тилда)

	~ 001011 -> 110100
	завърта (обръща) битовете (на едно число)

	*/

	////Когато използваме побитови оператори винаги слагаме скоби,
	////зада не се съобразяваме с приоритета на операторите!!!

	///*n&1 -> дали в n участва двойката на първа степен
	//	тоест дали n e нечетно число
	//	взимаме последния бит на n*/


	//{
	//	//разлика между префиксен и постфиксен оператор
	//	unsigned n = 10;
	//	std::cout << ++n << std::endl;
	//	n = 10;
	//	std::cout << n++ << std::endl;
	//}
	//{
	//	unsigned n,count=0;
	//	std::cin >> n;

	//	//прочитаме n числа и броим колко от тях са нечетни

	//	while (n--) //-> докато n != 0 (различно от 0), се изпълнява тялото на цикъла
	//	{
	//		unsigned x;
	//		std::cin >> x;

	//		if (x & 1) ++count;
	//	}
	//	std::cout << count << std::endl;
	//}
	//{
	//	unsigned n;
	//	std::cin >> n;

	//	//умножаваме n с 2
	//	n = (n << 1);
	//	n <<= 1;
	//	n = 2 * n;
	//	n *= 2;

	//	//делим n с 2
	//	n = (n >> 1);
	//	n >>= 1;
	//	n = n/2;
	//	n /= 2;

	//	n = 10;
	//	n <<= 3;//умножаваме n с 8(2^3)
	//	std::cout << n << std::endl;
	//	n >>= 3;//делим n с 8(2^3)
	//	std::cout << n << std::endl;
	//}

	{
		unsigned n;
		std::cin >> n;

		//ще отпечатаме n в двойчна бройна система

		if (n == 0) std::cout << 0 << std::endl;
		else
		{
			unsigned pos = 32;//n има 32 бита, от 0 до 31
			
			bool flag = false;//не искаме да отпечатваме водещите нули
			//ще направим флага истина когато срещнем първата единица
			
			while (pos--)//докато pos != 0
				//първата стойност на pos, с която ще влезем в цикъла, е 31
				//последната стойност на pos, с която ще влезем в цикъла, е 0
			{
				if (flag || (n >> pos) & 1)
				{
					flag = true;
					std::cout << ((n >> pos) & 1);
				}
			}
			std::cout << std::endl;
		}
	}

	{
		int n;
		std::cin >> n;
		unsigned res = 0;

		while (n--)
		{
			int x;
			std::cin >> x;

			res <<= 1;//умножаваме по 2
			// ако res е нула, резултата от побитовата операция е 0
			// 0 * 2 == 0
			//последния бит на res e 0
			res |= x;// правим последния бит на res 1
			//ако х е нула res се запазва
		}
		std::cout << res << std::endl;
	}


	return 0;
}

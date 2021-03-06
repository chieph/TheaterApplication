#include "price_manager.h"

PriceManager::PriceManager()
{
	enum PriceManagerFunction
	{
		CHECK_N_DELETE_PRICE = 1,
		ADD_PRICE_INFO,
	};

	for (;;)
	{
		system("cls");
		cout <<
			"극장 관리 시스템\n"
			" > 가격 정보 관리\n\n"

			"1. 가격 정보 확인/삭제\n"
			"2. 가격 정보 추가\n"
			"0. 종료\n\n"

			"선택: ";
		
		int32_t function = 0;
		switch (inputPositiveInteger(function))
		{
		case FUNCTION_CANCEL:
			return;
		case FUNCTION_SUCCESS:
			switch (function)
			{
			case CHECK_N_DELETE_PRICE:
				checkAndDeletePrice();
				continue;
			case ADD_PRICE_INFO:
				addPrice();
				continue;
			}
		case FUNCTION_ERROR:
			cout << "\n잘못된 입력입니다.\n";
			system("pause");
		}
	}
}
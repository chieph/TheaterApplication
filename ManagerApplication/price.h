#ifndef PRICE_H
#define PRICE_H

#include "DB_helper.h"

class Price
{
public:
	Price() {}

	SQLSMALLINT code;
	SQLCHAR name[BUFSIZ];
	SQLINTEGER won;

	int16_t choose(DBHelper &dbHelper);
};

#endif // !PRICE_H
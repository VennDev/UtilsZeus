#pragma once

#ifndef ZSTRING_H
#define ZSTRING_H

#include <iostream>

namespace Utils
{
	class ZString
	{
	public:
		std::string str_replace(const std::string& str, const std::string& search, const std::string& replace);
	};
}

#endif
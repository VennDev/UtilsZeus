#pragma once

#ifndef TEXT_FORMAT_H
#define TEXT_FORMAT_H

#include <string>

namespace Utils
{
	class TextFormat
	{
	public:
		static const std::string ESCAPE;
		static const std::string EOL;
		static const std::string RESET;
		static const std::string RED;
		static const std::string GREEN;
		static const std::string YELLOW;
		static const std::string BLUE;
		static const std::string BLACK;
		static const std::string MAGENTA;
		static const std::string CYAN;
		static const std::string WHITE;
		static const std::string GOLD;
		static const std::string GRAY;
		static const std::string BOLD_RED;
		static const std::string BOLD_GREEN;
		static const std::string BOLD_YELLOW;
		static const std::string BOLD_BLUE;
		static const std::string BOLD_MAGENTA;
		static const std::string BOLD_CYAN;
		static const std::string BOLD_WHITE;
		static const std::string BOLD_GOLD;

		std::string colorize(std::string text);
	};
}

#endif
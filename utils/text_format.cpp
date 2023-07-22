#include "text_format.h"

namespace Utils
{

	const std::string TextFormat::ESCAPE = "&";
	const std::string TextFormat::EOL = "\n";
	const std::string TextFormat::RESET = "\033[0m";
	const std::string TextFormat::RED = "\033[31m";
	const std::string TextFormat::GREEN = "\033[32m";
	const std::string TextFormat::YELLOW = "\033[33m";
	const std::string TextFormat::BLUE = "\033[34m";
	const std::string TextFormat::BLACK = "\033[30m";
	const std::string TextFormat::MAGENTA = "\033[35m";
	const std::string TextFormat::CYAN = "\033[36m";
	const std::string TextFormat::WHITE = "\033[37m";
	const std::string TextFormat::GOLD = "\033[38;5;214m";
	const std::string TextFormat::GRAY = "\033[90m";
	const std::string TextFormat::BOLD_RED = "\033[1;31m";
	const std::string TextFormat::BOLD_GREEN = "\033[1;32m";
	const std::string TextFormat::BOLD_YELLOW = "\033[1;33m";
	const std::string TextFormat::BOLD_BLUE = "\033[1;34m";
	const std::string TextFormat::BOLD_MAGENTA = "\033[1;35m";
	const std::string TextFormat::BOLD_CYAN = "\033[1;36m";
	const std::string TextFormat::BOLD_WHITE = "\033[1;37m";
	const std::string TextFormat::BOLD_GOLD = "\033[1;38;5;214m";

	std::string TextFormat::colorize(std::string text)
	{
		return text;
	}

}
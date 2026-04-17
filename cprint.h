
#pragma once
#include <iostream>
#include "color.h"

// Custom print | C++ | v2
// 17.04.2026

// @param value [any]
// @param tag [string]
// @param level [0 - info, 1 - warn, 2 - error]
// 
// example: cprint("Hello")
// out: "[CPRINT] Hello"

template <typename T>
T cprint(T value, int level = 0, const std::string& tag = "[CPRINT]")
{
	switch (level)
	{
		case 0: // info level
			setColor(8);
			std::cout << tag << " " << value << std::endl;
			setColor(0);

			break;

		case 1: // warn level
			setColor(6);
			std::cout << tag << " " << value << std::endl;
			setColor(0);

			break;

		case 2: // error level
			setColor(4);
			std::cout << tag << " " << value << std::endl;
			setColor(0);

			break;

		default:
			throw std::invalid_argument("Wrong argument: level");
	}
}
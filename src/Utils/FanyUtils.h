#pragma once
#include <string>

namespace FanyUtuils
{
std::string GetIMEDataDirPath();
std::string GetLogFilePath();
std::wstring GetLogFilePathW();
void SendKeys(std::wstring pinyin);
} // namespace FanyUtuils
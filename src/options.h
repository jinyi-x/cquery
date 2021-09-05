#pragma once

#include <mutex>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> ParseOptions(int argc,
                                                          char** argv);

bool HasOption(const std::unordered_map<std::string, std::string>& options,
               const std::string& option);
/**
 * @file label.hpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-11
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __LABEL_HPP__
#define __LABEL_HPP__

#include <string>
#include <sqlite3.h>

class AcwLabel
{
private:
    const std::string label;

public:
    AcwLabel(const std::string &label) : label(label){};
    void addLabel(const std::string &label);
};

#endif

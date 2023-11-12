/**
 * @file label.cpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-11
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <label.hpp>
#include <glog/logging.h>

void AcwLabel::addLabel(const std::string &label)
{
    sqlite3 *db;
    if (sqlite3_open("test.db", &db))
    {
        LOG(ERROR) << "Can't open database: " << sqlite3_errmsg(db);
    }
    else
    {
        LOG(INFO) << "Opened database successfully";
    }
}

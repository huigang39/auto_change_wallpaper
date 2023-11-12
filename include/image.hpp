/**
 * @file image.hpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __IMAGE_HPP__
#define __IMAGE_HPP__

#include <string>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <curl/curl.h>
#include <glog/logging.h>

class AcwImage
{
private:
    std::string url;
    std::string label;
    std::string name;
    std::string path;

    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

public:
    AcwImage(const std::string &url, const std::string &label, const std::string &name, const std::string &path);

    void getImage(const std::string &url);
    void setDefaultFileName();
    void setUserFileName(const std::string &name);
    const std::string labelTransfer(std::string &url, const std::string &label);
};

#endif

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

class Image
{
private:
    std::string filename;
    std::string path = "../images";

    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

public:
    Image(const std::string url, const std::string &filename);
    ~Image();
    void getImage(const std::string &url);
    void setDefaultFileName();
    void setPath(const std::string &path);
    std::string getPath() const { return this->path; }
    void setUserFileName(const std::string &filename);
};

#endif

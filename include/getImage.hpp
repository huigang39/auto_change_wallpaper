/**
 * @file getImage.hpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __GETIMAGE_HPP__
#define __GETIMAGE_HPP__

#include <fstream>
#include <string>
#include <curl/curl.h>

class getImage
{
private:
    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

public:
    getImage(const std::string &url, const std::string &filename);
    ~getImage();
};

#endif

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

class Image
{
private:
    std::string url;
    std::string label;
    std::string name;
    std::string path;

    static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

public:
    Image(const std::string &url, const std::string &label, const std::string &name, const std::string &path);

    void getImage(const std::string &model);
    void setDefaultFileName();
    void setUserFileName(const std::string &name);
    const std::string labelTransfer(std::string &url, const std::string &label);
};

class ImageBuilder
{
private:
    std::string url;
    std::string label;
    std::string name;
    std::string path;

public:
    ImageBuilder &setUrl(const std::string &url);
    ImageBuilder &setLabel(const std::string &label);
    ImageBuilder &setName(const std::string &name);
    ImageBuilder &setPath(const std::string &path);

    Image build();
};

#endif
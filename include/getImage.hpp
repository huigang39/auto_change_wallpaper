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

getImage::getImage(const std::string &url, const std::string &filename)
{
    CURL *curl;
    FILE *fp;
    CURLcode res;
    curl = curl_easy_init();
    if (curl)
    {
        fp = fopen(filename.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);

        // 检查错误
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        // 清理curl
        curl_easy_cleanup(curl);
        fclose(fp);
    }
}

getImage::~getImage()
{
}

size_t getImage::WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t realsize = size * nmemb;
    FILE *fp = (FILE *)userp;
    fwrite(contents, size, nmemb, fp);
    return realsize;
}

#endif

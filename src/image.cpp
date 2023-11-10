/**
 * @file image.cpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <image.hpp>

Image::Image(const std::string url, const std::string &filename = "")
{
    if (filename == "")
    {
        setDefaultFileName();
        LOG(INFO) << "NULL"
                  << "\n";
    }
    else
    {
        setUserFileName(filename);
    }
    getImage(url);
}

Image::~Image()
{
}

void Image::getImage(const std::string &url)
{
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl)
    {
        std::string fullpath = this->path + "/" + this->filename;
        std::ofstream *fp = new std::ofstream(fullpath, std::ios::binary);
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
        delete fp;
    }
}

void Image::setDefaultFileName()
{
    auto now = std::chrono::system_clock::now();
    auto now_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_c), "%Y%m%d%H%M%S");
    this->filename = ss.str() + ".webp";
}

void Image::setPath(const std::string &path)
{
    this->path = path;
}

void Image::setUserFileName(const std::string &filename)
{
    this->filename = filename + ".webp";
}

size_t Image::WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t realsize = size * nmemb;
    std::ofstream *fp = (std::ofstream *)userp;
    fp->write((char *)contents, realsize);
    return realsize;
}

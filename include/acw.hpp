/**
 * @file Acw.hpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-11
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __Acw_HPP__
#define __Acw_HPP__

#include <image.hpp>
#include <label.hpp>

class Acw
{
private:
    std::string cmd;
    std::string url;
    std::string name;
    std::string path;
    std::string label;

    AcwImage img = AcwImage(url, label, name, path);
    AcwLabel lbl = AcwLabel(label);

public:
    Acw(const std::string &cmd, const std::string &url, const std::string &name, const std::string &path, const std::string &label)
        : cmd(cmd), url(url), name(name), path(path), label(label) {}
    inline bool isCmdEqual(const std::string &cmd) { return this->cmd == cmd; };
    void getImage();
    void addLabel();
};

class AcwBuilder
{
private:
    std::string cmd;
    std::string url;
    std::string name;
    std::string path;
    std::string label;

public:
    AcwBuilder &setCmd(const std::string &cmd);
    AcwBuilder &setUrl(const std::string &url);
    AcwBuilder &setName(const std::string &name);
    AcwBuilder &setPath(const std::string &path);
    AcwBuilder &setLabel(const std::string &label);

    Acw build();
};

#endif

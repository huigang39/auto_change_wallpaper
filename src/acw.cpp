/**
 * @file acw.cpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-11
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "acw.hpp"

AcwBuilder &AcwBuilder::setCmd(const std::string &cmd)
{
    this->cmd = cmd;
    return *this;
}

AcwBuilder &AcwBuilder::setUrl(const std::string &url)
{
    this->url = url;
    return *this;
}

AcwBuilder &AcwBuilder::setName(const std::string &name)
{
    this->name = name;
    return *this;
}

AcwBuilder &AcwBuilder::setPath(const std::string &path)
{
    this->path = path;
    return *this;
}

AcwBuilder &AcwBuilder::setLabel(const std::string &label)
{
    this->label = label;
    return *this;
}

Acw AcwBuilder::build()
{
    return Acw(cmd, url, name, path, label);
}

void Acw::getImage()
{
    if (isCmdEqual("get"))
    {
        img.getImage(img.labelTransfer(url, label));
    }
}

void Acw::addLabel()
{
    if (isCmdEqual("add"))
    {
        lbl.addLabel(label);
    }
}

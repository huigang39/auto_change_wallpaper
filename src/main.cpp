/**
 * @file main.cpp
 * @author Huigang Wang (huigang39@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-11-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <main.hpp>

int main(int argc, char *argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::SetStderrLogging(google::INFO);
    google::ParseCommandLineFlags(&argc, &argv, true);
    Acw acw = AcwBuilder().setCmd(FLAGS_cmd).setUrl(FLAGS_url).setName(FLAGS_name).setPath(FLAGS_path).setLabel(FLAGS_label).build();
    acw.getImage();
    acw.addLabel();
    return 0;
}

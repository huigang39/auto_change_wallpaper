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
#include <argpaser.hpp>
#include <image.hpp>

int main(int argc, char *argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::SetStderrLogging(google::INFO);
    google::ParseCommandLineFlags(&argc, &argv, true);
    Image image(FLAGS_url, FLAGS_name);
    return 0;
}

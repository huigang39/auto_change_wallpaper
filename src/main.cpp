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
#include <getImage.hpp>

int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    getImage img(FLAGS_get, "1.jpg");
    return 0;
}

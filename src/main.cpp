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
    // google::InitGoogleLogging(argv[0]);
    // google::SetStderrLogging(google::INFO);
    google::ParseCommandLineFlags(&argc, &argv, true);
    Acw acw = AcwBuilder().setCmd(FLAGS_cmd).setUrl(FLAGS_url).setName(FLAGS_url).setPath(FLAGS_path).setLabel(FLAGS_label).build();
    // Image img = ImageBuilder().setUrl("http://example.com/image.jpg").setFilename("my_image.jpg").setPath("/path/to/save/image").build();
    return 0;
}

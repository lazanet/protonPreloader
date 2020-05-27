#include <string>
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    std::string s(argv[0]);
    std::string path = "config.bat";
    std::size_t pos = s.rfind('\\');

    if (pos != std::string::npos)
        path = '"' + s.substr(0,pos+1) + "config.bat" + '"';

    for (int i=1; i<argc; i++)
        path+=" "+std::string(argv[i]);

    std::string command = "start \"Launcher\" cmd /c "+path;
    system(command.c_str());
    return 0;
}

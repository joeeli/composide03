#include <iostream>
// #include <IListable.h>
#include "../include/IListable.h"
#include "../include/File.hpp"

File::File(std::string nodeName)
{
   m_nodeName = nodeName;
}
File::~File()
{
}
void File::list(int depth)//operation
{
    std::string newStr(depth, '-');
    std::cout << newStr << m_nodeName << " depth: " << depth << std::endl;
}
#include <iostream>
// #include <IListable.h>
#include "../include/IListable.h"

class File : public IListable
{
    private:
        std::string m_nodeName;

    public:
        File(std::string nodeName);
        ~File();
        void list(int depth);//operation
};
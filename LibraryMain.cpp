#include "Logs.hpp"
#include "LibraryMain.hpp"
#include "stdafx.h"
#include "LibBase.hpp"
#include <boost/filesystem.hpp>
#include <boost/filesystem/path.hpp>

namespace Library
{
    namespace Main
    {
        Library::Library()
        {

        }
        Library::~Library()
        {

        }
        QString Library::GetcurrentPath()
        {
            boost::filesystem::path full_path(boost::filesystem::current_path());
            QString currentPath = full_path.string().c_str();
            return currentPath;
        }

    }
}


/*
	TODO: GetCurrentPath ¿€º∫
*/
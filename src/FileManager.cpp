#include "FileManager.h"

FileManager::FileManager()
{
  this->fileName="Default.txt"
  this->content="Demo Content";
}

FileManager::FileManager(string fileName,string content)
{
  this->fileName=fileName;
  this->content=content;
}
FileManager::~FileManager()
{
    //dtor
}

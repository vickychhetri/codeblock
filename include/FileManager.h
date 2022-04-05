#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include<fstream>

class FileManager
{
    string fileName;
    string content;
    public:
        FileManager();
        FileManager(fileName,content);
        virtual ~FileManager();

    string CreateFile(){
     ofstream MyFile(this->fileName);
        // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";
     MyFile.close();
    }

    protected:

    private:
};

#endif // FILEMANAGER_H

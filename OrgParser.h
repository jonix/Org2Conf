#ifndef __ORGPARSER_H__
#define __ORGPARSER_H__

class OrgParser {
 public:
    OrgParser();
    ~OrgParser();

    void ltrim(std::string& s) const;
    void rtrim(std::string& s) const;
    void trim(std::string& s) const;

    std::string readFileContent(const std::string& filePath) const;

 private:
    
};

#endif // __ORGPARSER_H__

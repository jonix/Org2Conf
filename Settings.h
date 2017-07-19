#ifndef __SETTINGS_H__
#define __SETTINGS_H__

class Settings {
public:
    Settings();
    virtual ~Settings();
};

class DBSettings : public Settings {
public:
    DBSettings();
    virtual ~DBSettings();

private:
};

class SSHSettings : public Settings {
public:
    SSHSettings();
    virtual ~SSHSettings();

private:
};

#endif // __SETTINGS_H__

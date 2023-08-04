#ifndef HAMMINGPLUGIN_H
#define HAMMINGPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class HammingPlugin : public Plugin
{
public: 
 std::string toString() {return "Hamming";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif

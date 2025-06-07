#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Commandlet : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    void* get_HelpDescription();
    void* get_HelpUsage();
    void* get_HelpWebLink();
    void* get_HelpParamNames();
    void* get_HelpParamDescriptions();
    bool get_IsServer();
    void set_IsServer(bool value);
    bool get_IsClient();
    void set_IsClient(bool value);
    bool get_IsEditor();
    void set_IsEditor(bool value);
    bool get_LogToConsole();
    void set_LogToConsole(bool value);
    bool get_ShowErrorCount();
    void set_ShowErrorCount(bool value);
    bool get_ShowProgress();
    void set_ShowProgress(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}

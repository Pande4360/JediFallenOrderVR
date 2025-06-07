#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsDevNetRT {
#pragma pack(push, 1)
struct RsDevNetSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_ProjectName();
    void* get_BuildName();
    void* get_DevNetHostname();
    void* get_DevNetIP();
    void* get_DevNetPort();
    bool get_DisableDevnet();
    void set_DisableDevnet(bool value);
    bool get_DisableScreenshots();
    void set_DisableScreenshots(bool value);
    bool get_DebounceErrors();
    void set_DebounceErrors(bool value);
    float& get_DebounceTimer();
    bool get_WhitelistedErrorsOnly();
    void set_WhitelistedErrorsOnly(bool value);
    bool get_AskToReport();
    void set_AskToReport(bool value);
    void* get_ErrorFilterList();
    void* get_Whitelist();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}

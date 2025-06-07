#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsProxyLODSettings : public DeveloperSettings {
    private: char pad_38[0x1b0]; public:
    float& get_ProxyMinDrawDistance();
    void* get_ProductionProxySettings();
    void* get_PreviewProxySettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e8
#pragma pack(pop)
}

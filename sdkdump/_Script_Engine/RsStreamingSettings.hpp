#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingSettings : public DeveloperSettings {
    private: char pad_38[0x40]; public:
    void* get_GlobalStreamingLevel();
    _Script_Engine::RsStreamingDefinition*& get_GlobalStreamingDefinition();
    void* get_StreamingManagerClassName();
    void* get_StreamingManagerClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}

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
struct DialogueWave : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    bool get_bMature();
    void set_bMature(bool value);
    bool get_bOverride_SubtitleOverride();
    void set_bOverride_SubtitleOverride(bool value);
    void* get_SpokenText();
    void* get_SubtitleOverride();
    void* get_ContextMappings();
    void* get_LocalizationGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}

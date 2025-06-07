#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingAreaPlayerStartList {
    private: char pad_0[0x20]; public:
    _Script_Engine::RsStreamingDefinition*& get_StreamingDef();
    void* get_PlayerStartNames();
    void* get_Status();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}

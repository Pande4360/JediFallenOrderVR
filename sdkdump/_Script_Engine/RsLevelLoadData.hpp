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
struct RsLevelLoadData {
    private: char pad_0[0x10]; public:
    _Script_Engine::RsStreamingDefinition*& get_StreamingDef();
    int32_t& get_LevelLODIndex();
    void* get_LoadType();
    bool get_bVisible();
    void set_bVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}

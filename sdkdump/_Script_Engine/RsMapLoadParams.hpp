#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_Engine {
struct LevelStreaming;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsMapLoadParams {
    private: char pad_0[0x50]; public:
    void* get_StreamingAreasToLoad();
    _Script_Engine::RsStreamingDefinition*& get_RootLevelStreamingDef();
    _Script_Engine::LevelStreaming*& get_RootLevelToLoad();
    _Script_Engine::Actor*& get_PlayerStart();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_Engine {
struct Level;
}
namespace _Script_Engine {
struct LevelStreaming;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingLevelLoader {
    private: char pad_0[0xe0]; public:
    _Script_Engine::RsStreamingDefinition*& get_StreamingDef();
    _Script_Engine::Level*& get_LoadedLevel();
    _Script_Engine::LevelStreaming*& get_StreamingObject();
    void* get_DependentAssetsToLoad();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}

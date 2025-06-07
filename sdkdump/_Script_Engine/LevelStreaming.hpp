#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreaming : public _Script_CoreUObject::Object {
    private: char pad_28[0x238]; public:
    _Script_Engine::RsStreamingDefinition*& get_StreamingDef();
    void* get_LevelLoader();
    void* get_StreamingVolumes();
    void* get_References();
    _Script_Engine::LevelStreaming*& get_PendingLODLevel();
    _Script_Engine::LevelStreaming*& get_CurrentLODLevel();
    void* get_CachedParentLevels();
    void* get_CachedChildLevels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x260
#pragma pack(pop)
}

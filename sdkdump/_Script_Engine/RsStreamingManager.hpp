#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct LevelStreaming;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x218]; public:
    void* get_StreamingLevels();
    void* get_StreamingLevelLookup();
    void* get_LevelsBeingActivated();
    void* get_LevelsBeingDeactivated();
    void* get_PendingLoadLevels();
    void* get_LevelsCurrentlyLoading();
    void* get_LevelsToDelayGCFor();
    _Script_Engine::LevelStreaming*& get_GlobalLevel();
    _Script_Engine::LevelStreaming*& get_RootLevel();
    void* get_WithinStreamingVolumes();
    void* get_PendingMapLoadParams();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x240
#pragma pack(pop)
}

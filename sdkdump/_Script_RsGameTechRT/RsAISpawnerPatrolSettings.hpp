#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsAIPatrolPath;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnerPatrolSettings {
    private: char pad_0[0x18]; public:
    _Script_RsGameTechRT::RsAIPatrolPath*& get_PatrolPath();
    void* get_PatrolMotionParm();
    void* get_PatrolSpawnPoint();
    void* get_PatrolPathUsage();
    void* get_ScriptingModeWhenDone();
    bool get_bSetHomeLocationToEnd();
    void set_bSetHomeLocationToEnd(bool value);
    bool get_bEnableCrowdAvoidance();
    void set_bEnableCrowdAvoidance(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}

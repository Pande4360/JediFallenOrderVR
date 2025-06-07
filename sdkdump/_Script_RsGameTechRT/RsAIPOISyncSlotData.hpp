#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIPOISyncSlotData {
    private: char pad_0[0xa0]; public:
    void* get_SyncSlotName();
    _Script_Engine::AnimationAsset*& get_Animation();
    void* get_SyncLocationOffset();
    void* get_MotionParmName();
    void* get_CharacterTypeFilter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}

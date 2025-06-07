#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsCharacterReactionDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHeroStateInfo {
    private: char pad_0[0x70]; public:
    void* get_State();
    void* get_StateTag();
    void* get_MotionTweaks();
    void* get_CollisionTweaks();
    void* get_CameraModeName();
    void* get_FlagSets();
    _Script_RsGameTechRT::RsCharacterReactionDefinition*& get_ReactionDefinition();
    void* get_MovementMode();
    void* get_AttributeTags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}

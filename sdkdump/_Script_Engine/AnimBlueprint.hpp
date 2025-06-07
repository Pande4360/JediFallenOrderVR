#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Blueprint.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimBlueprint : public Blueprint {
    private: char pad_e0[0x28]; public:
    _Script_Engine::Skeleton*& get_TargetSkeleton();
    void* get_Groups();
    bool get_bUseMultiThreadedAnimationUpdate();
    void set_bUseMultiThreadedAnimationUpdate(bool value);
    bool get_bWarnAboutBlueprintUsage();
    void set_bWarnAboutBlueprintUsage(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintGeneratedClass.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimBlueprintGeneratedClass : public BlueprintGeneratedClass {
    private: char pad_2e8[0x70]; public:
    void* get_BakedStateMachines();
    _Script_Engine::Skeleton*& get_TargetSkeleton();
    void* get_AnimNotifies();
    void* get_OrderedSavedPoseIndices();
    void* get_SyncGroupNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x358
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct StructProperty;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimClassData : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_BakedStateMachines();
    _Script_Engine::Skeleton*& get_TargetSkeleton();
    void* get_AnimNotifies();
    int32_t& get_RootAnimNodeIndex();
    void* get_OrderedSavedPoseIndices();
    _Script_CoreUObject::StructProperty*& get_RootAnimNodeProperty();
    void* get_AnimNodeProperties();
    void* get_SyncGroupNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}

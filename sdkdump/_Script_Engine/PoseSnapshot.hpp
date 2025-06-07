#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PoseSnapshot {
    private: char pad_0[0x38]; public:
    void* get_LocalTransforms();
    void* get_BoneNames();
    void* get_SkeletalMeshName();
    void* get_SnapshotName();
    bool get_bIsValid();
    void set_bIsValid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}

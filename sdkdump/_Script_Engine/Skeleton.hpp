#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Skeleton : public _Script_CoreUObject::Object {
    private: char pad_28[0x388]; public:
    void* get_BoneTree();
    void* get_RefLocalPoses();
    void* get_VirtualBoneGuid();
    void* get_VirtualBones();
    void* get_Sockets();
    void* get_SmartNames();
    void* get_BlendProfiles();
    void* get_SlotGroups();
    void* get_CompatibleSkeletonList();
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b0
#pragma pack(pop)
}

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
struct SkeletalMeshClothBuildParams {
    private: char pad_0[0x58]; public:
    void* get_TargetAsset();
    int32_t& get_TargetLod();
    bool get_bRemapParameters();
    void set_bRemapParameters(bool value);
    void* get_AssetName();
    int32_t& get_LODIndex();
    int32_t& get_SourceSection();
    bool get_bRemoveFromMesh();
    void set_bRemoveFromMesh(bool value);
    void* get_PhysicsAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}

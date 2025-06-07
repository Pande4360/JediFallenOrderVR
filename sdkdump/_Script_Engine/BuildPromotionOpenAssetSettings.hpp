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
struct BuildPromotionOpenAssetSettings {
    private: char pad_0[0x60]; public:
    void* get_BlueprintAsset();
    void* get_MaterialAsset();
    void* get_ParticleSystemAsset();
    void* get_SkeletalMeshAsset();
    void* get_StaticMeshAsset();
    void* get_TextureAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicsAssetCustomization : public _Script_Engine::DataAsset {
    private: char pad_30[0x28]; public:
    void* get_PhysicalAnimationCustomization();
    void* get_RagdollCustomization();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}

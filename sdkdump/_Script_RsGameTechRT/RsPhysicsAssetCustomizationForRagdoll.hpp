#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicsAssetCustomizationForRagdoll {
    private: char pad_0[0x18]; public:
    void* get_BonesToDisablePhysicsAndCollisions();
    bool get_KeepTickingPostProcessAnimInstance();
    void set_KeepTickingPostProcessAnimInstance(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}

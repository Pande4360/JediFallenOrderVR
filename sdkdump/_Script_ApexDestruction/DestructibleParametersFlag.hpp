#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleParametersFlag {
    private: char pad_0[0x4]; public:
    bool get_bAccumulateDamage();
    void set_bAccumulateDamage(bool value);
    bool get_bAssetDefinedSupport();
    void set_bAssetDefinedSupport(bool value);
    bool get_bWorldSupport();
    void set_bWorldSupport(bool value);
    bool get_bDebrisTimeout();
    void set_bDebrisTimeout(bool value);
    bool get_bDebrisMaxSeparation();
    void set_bDebrisMaxSeparation(bool value);
    bool get_bCrumbleSmallestChunks();
    void set_bCrumbleSmallestChunks(bool value);
    bool get_bAccurateRaycasts();
    void set_bAccurateRaycasts(bool value);
    bool get_bUseValidBounds();
    void set_bUseValidBounds(bool value);
    bool get_bFormExtendedStructures();
    void set_bFormExtendedStructures(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}

#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MaterialShaderQualitySettings {
#pragma pack(push, 1)
struct MaterialQualityOverrides {
    private: char pad_0[0x8]; public:
    bool get_bDiscardQualityDuringCook();
    void set_bDiscardQualityDuringCook(bool value);
    bool get_bEnableOverride();
    void set_bEnableOverride(bool value);
    bool get_bForceFullyRough();
    void set_bForceFullyRough(bool value);
    bool get_bForceNonMetal();
    void set_bForceNonMetal(bool value);
    bool get_bForceDisableLMDirectionality();
    void set_bForceDisableLMDirectionality(bool value);
    bool get_bForceLQReflections();
    void set_bForceLQReflections(bool value);
    bool get_bDisableMaterialNormalCalculation();
    void set_bDisableMaterialNormalCalculation(bool value);
    void* get_MobileCSMQuality();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}

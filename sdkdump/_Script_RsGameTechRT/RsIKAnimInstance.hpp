#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
#include "RsIKBoneTarget.hpp"
namespace _Script_RsGameTechRT {
struct RsIKCharacterDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKAnimInstance : public _Script_Engine::AnimInstance {
    private: char pad_3b0[0x50]; public:
    bool get_bActive();
    void set_bActive(bool value);
    float& get_AlphaMultiplier();
    _Script_RsGameTechRT::RsIKCharacterDefinition*& get_Definition();
    void* get_Behaviors();
    void* get_Targets();
    float& get_MinLegBendAngle();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsIKBoneTarget GetIKBoneTarget(void* BoneName);
}; // Size: 0x400
#pragma pack(pop)
}

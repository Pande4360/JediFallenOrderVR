#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIVisionSettings.hpp"
float& _Script_RsGameTechRT::RsAIVisionSettings::get_NearVisionRangeAwarenessValue() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_FarVisionRangeAwarenessValue() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_FarVisionRange() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_NearVisionRange() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_HalfVisionHeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_MultipleOfCharacterRadiusForNoLOSRequired() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_NearVisionConeHorizontalHalfAngle() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_MultipleOfCharacterHalfHeightForNoLOSRequired() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_FarVisionConeHorizontalHalfAngle() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_VisionConeVerticalHalfAngle() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_RsGameTechRT::RsAIVisionSettings::get_VisionConePitch() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIVisionSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIVisionSettings");
    return result;
}

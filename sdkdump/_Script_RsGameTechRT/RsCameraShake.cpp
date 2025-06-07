#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCameraShake.hpp"
void* _Script_RsGameTechRT::RsCameraShake::get_Shake() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsCameraShake::get_InnerRadius() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_RsGameTechRT::RsCameraShake::get_bOrientShakeTowardsEpicenter() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsCameraShake::get_OuterRadius() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsCameraShake::get_Falloff() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_RsGameTechRT::RsCameraShake::set_bOrientShakeTowardsEpicenter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCameraShake");
    return result;
}

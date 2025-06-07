#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_SpeederBike.hpp"
float& _Script_RsGameTechRT::AnimState_SpeederBike::get_CurrentForwardAccelerationTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::AnimState_SpeederBike::get_IsAccelerating() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_SpeederBike::set_IsAccelerating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_SpeederBike::get_DegreeTurn() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_SpeederBike::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_SpeederBike");
    return result;
}

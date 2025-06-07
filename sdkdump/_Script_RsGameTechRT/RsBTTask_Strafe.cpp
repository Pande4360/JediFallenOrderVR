#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_DirectMoveToBlackboardBase.hpp"
#include "RsBTTask_Strafe.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_Strafe::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_Strafe");
    return result;
}
float& _Script_RsGameTechRT::RsBTTask_Strafe::get_StrafeDistance() {
    return *(float*)((uintptr_t)this + 0xe0);
}
void* _Script_RsGameTechRT::RsBTTask_Strafe::get_StrafeDirection() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_RsGameTechRT::RsBTTask_Strafe::get_StrafeDirectionKey() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_RsGameTechRT::RsBTTask_Strafe::get_bUseStrafeDirectionBlackboardKey() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTTask_Strafe::set_bUseStrafeDirectionBlackboardKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_Strafe::get_bObserveBlackboardStrafeDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsBTTask_Strafe::set_bObserveBlackboardStrafeDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}

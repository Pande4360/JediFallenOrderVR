#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVector.hpp"
#include "DistributionVectorConstant.hpp"
void* _Script_Engine::DistributionVectorConstant::get_Constant() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::DistributionVectorConstant::get_bLockAxes() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_Engine::DistributionVectorConstant::set_bLockAxes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DistributionVectorConstant::get_LockedAxes() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionVectorConstant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVectorConstant");
    return result;
}

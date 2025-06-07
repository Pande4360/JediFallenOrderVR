#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Distribution.hpp"
#include "DistributionVector.hpp"
bool _Script_Engine::DistributionVector::get_bCanBeBaked() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::DistributionVector::set_bBakedDataSuccesfully(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::DistributionVector::set_bCanBeBaked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DistributionVector::get_bIsDirty() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void _Script_Engine::DistributionVector::set_bIsDirty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::DistributionVector::get_bBakedDataSuccesfully() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::DistributionVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVector");
    return result;
}

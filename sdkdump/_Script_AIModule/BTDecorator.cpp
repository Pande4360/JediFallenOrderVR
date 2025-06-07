#include "..\FUObjectArray.hpp"
#include "BTAuxiliaryNode.hpp"
#include "BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AIModule::BTDecorator::get_bInverseCondition() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 128 != 0;
}
void _Script_AIModule::BTDecorator::set_bInverseCondition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_AIModule::BTDecorator::get_FlowAbortMode() {
    return (void*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator");
    return result;
}

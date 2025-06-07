#include "..\FUObjectArray.hpp"
#include "BTNode.hpp"
#include "BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTTaskNode::get_Services() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_AIModule::BTTaskNode::get_bIgnoreRestartSelf() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_AIModule::BTTaskNode::set_bIgnoreRestartSelf(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTaskNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTaskNode");
    return result;
}

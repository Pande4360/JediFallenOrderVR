#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BTNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTCompositeNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTCompositeNode");
    return result;
}
void* _Script_AIModule::BTCompositeNode::get_Children() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AIModule::BTCompositeNode::get_Services() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_AIModule::BTCompositeNode::get_bApplyDecoratorScope() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_AIModule::BTCompositeNode::set_bApplyDecoratorScope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}

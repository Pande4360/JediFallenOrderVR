#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_DoesPathExist.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_DoesPathExist::get_BlackboardKeyA() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AIModule::BTDecorator_DoesPathExist::get_BlackboardKeyB() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_AIModule::BTDecorator_DoesPathExist::get_bUseSelf() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_AIModule::BTDecorator_DoesPathExist::set_bUseSelf(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::BTDecorator_DoesPathExist::get_PathQueryType() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_AIModule::BTDecorator_DoesPathExist::get_FilterClass() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_DoesPathExist::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_DoesPathExist");
    return result;
}

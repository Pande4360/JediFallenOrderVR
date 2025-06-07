#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_ConeCheck.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_ConeCheck::get_Observed() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_AIModule::BTDecorator_ConeCheck::get_ConeHalfAngle() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_AIModule::BTDecorator_ConeCheck::get_ConeOrigin() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AIModule::BTDecorator_ConeCheck::get_ConeDirection() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_ConeCheck::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_ConeCheck");
    return result;
}

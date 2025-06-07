#include "..\FUObjectArray.hpp"
#include "AIDynamicParam.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AIDynamicParam::get_ParamName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::AIDynamicParam::get_ParamType() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_AIModule::AIDynamicParam::get_Value() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_AIModule::AIDynamicParam::get_BBKey() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDynamicParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDynamicParam");
    return result;
}

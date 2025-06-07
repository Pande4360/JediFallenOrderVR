#include "..\FUObjectArray.hpp"
#include "EnvDirection.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvDirection::get_LineFrom() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::EnvDirection::get_Rotation() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AIModule::EnvDirection::get_LineTo() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_AIModule::EnvDirection::get_DirMode() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvDirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvDirection");
    return result;
}

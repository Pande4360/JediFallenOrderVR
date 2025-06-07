#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpGroupActorInfo.hpp"
void* _Script_Engine::InterpGroupActorInfo::get_ObjectName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::InterpGroupActorInfo::get_Actors() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::InterpGroupActorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InterpGroupActorInfo");
    return result;
}

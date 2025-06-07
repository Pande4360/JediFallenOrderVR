#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TransformBase.hpp"
void* _Script_Engine::TransformBase::get_Constraints() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TransformBase::get_Node() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::TransformBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TransformBase");
    return result;
}

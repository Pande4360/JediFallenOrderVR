#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NameMapping.hpp"
void* _Script_Engine::NameMapping::get_NodeName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NameMapping::get_BoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::NameMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NameMapping");
    return result;
}

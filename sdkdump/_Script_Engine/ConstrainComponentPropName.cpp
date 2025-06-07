#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstrainComponentPropName.hpp"
void* _Script_Engine::ConstrainComponentPropName::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ConstrainComponentPropName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConstrainComponentPropName");
    return result;
}

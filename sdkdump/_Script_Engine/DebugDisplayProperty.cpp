#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DebugDisplayProperty.hpp"
_Script_CoreUObject::Object*& _Script_Engine::DebugDisplayProperty::get_Obj() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DebugDisplayProperty::get_WithinClass() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DebugDisplayProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DebugDisplayProperty");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAxisConfigEntry.hpp"
void* _Script_Engine::InputAxisConfigEntry::get_AxisKeyName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::InputAxisConfigEntry::get_AxisProperties() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::InputAxisConfigEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputAxisConfigEntry");
    return result;
}

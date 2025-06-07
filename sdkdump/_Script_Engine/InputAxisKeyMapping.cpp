#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAxisKeyMapping.hpp"
void* _Script_Engine::InputAxisKeyMapping::get_AxisName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::InputAxisKeyMapping::get_Scale() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::InputAxisKeyMapping::get_Key() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::InputAxisKeyMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputAxisKeyMapping");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CustomInput.hpp"
void* _Script_Engine::CustomInput::get_InputName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CustomInput::get_Input() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::CustomInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CustomInput");
    return result;
}

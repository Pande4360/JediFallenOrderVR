#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScreenMessageString.hpp"
float& _Script_Engine::ScreenMessageString::get_TimeToDisplay() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::ScreenMessageString::get_DisplayColor() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ScreenMessageString::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ScreenMessageString::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ScreenMessageString");
    return result;
}
void* _Script_Engine::ScreenMessageString::get_ScreenMessage() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::ScreenMessageString::get_CurrentTimeDisplayed() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::ScreenMessageString::get_TextScale() {
    return (void*)((uintptr_t)this + 0x24);
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ToggleTrackKey.hpp"
float& _Script_Engine::ToggleTrackKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ToggleTrackKey::get_ToggleAction() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::ToggleTrackKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ToggleTrackKey");
    return result;
}

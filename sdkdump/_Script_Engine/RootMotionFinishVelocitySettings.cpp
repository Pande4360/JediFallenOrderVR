#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RootMotionFinishVelocitySettings.hpp"
void* _Script_Engine::RootMotionFinishVelocitySettings::get_Mode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RootMotionFinishVelocitySettings::get_SetVelocity() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RootMotionFinishVelocitySettings::get_ClampVelocity() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionFinishVelocitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionFinishVelocitySettings");
    return result;
}

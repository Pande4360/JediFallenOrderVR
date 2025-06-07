#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RootMotionSourceSettings.hpp"
void* _Script_Engine::RootMotionSourceSettings::get_Flags() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSourceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSourceSettings");
    return result;
}

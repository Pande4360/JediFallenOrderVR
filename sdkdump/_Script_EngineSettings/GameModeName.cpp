#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameModeName.hpp"
void* _Script_EngineSettings::GameModeName::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EngineSettings::GameModeName::get_GameMode() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_EngineSettings::GameModeName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineSettings.GameModeName");
    return result;
}

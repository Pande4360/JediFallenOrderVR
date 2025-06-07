#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISpawnerRoleSettings.hpp"
void* _Script_RsGameTechRT::RsAISpawnerRoleSettings::get_Role() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAISpawnerRoleSettings::get_ExitGuardRadius() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerRoleSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerRoleSettings");
    return result;
}

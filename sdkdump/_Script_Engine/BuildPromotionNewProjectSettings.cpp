#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BuildPromotionNewProjectSettings.hpp"
void* _Script_Engine::BuildPromotionNewProjectSettings::get_NewProjectFolderOverride() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::BuildPromotionNewProjectSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BuildPromotionNewProjectSettings");
    return result;
}
void* _Script_Engine::BuildPromotionNewProjectSettings::get_NewProjectNameOverride() {
    return (void*)((uintptr_t)this + 0x10);
}

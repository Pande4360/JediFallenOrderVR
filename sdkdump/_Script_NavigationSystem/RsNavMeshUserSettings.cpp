#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsNavMeshUserSettings.hpp"
void* _Script_NavigationSystem::RsNavMeshUserSettings::get_NavmeshDisplaySettings() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_NavigationSystem::RsNavMeshUserSettings::get_DrawDistance() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::RsNavMeshUserSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.RsNavMeshUserSettings");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "NavMeshBoundsVolume.hpp"
void* _Script_NavigationSystem::NavMeshBoundsVolume::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavMeshBoundsVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavMeshBoundsVolume");
    return result;
}

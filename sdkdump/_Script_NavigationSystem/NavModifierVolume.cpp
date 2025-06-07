#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "NavModifierVolume.hpp"
void _Script_NavigationSystem::NavModifierVolume::SetAreaClass(void* NewAreaClass) {
    return;
}
void* _Script_NavigationSystem::NavModifierVolume::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavModifierVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavModifierVolume");
    return result;
}

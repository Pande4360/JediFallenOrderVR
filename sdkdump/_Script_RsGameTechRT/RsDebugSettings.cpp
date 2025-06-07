#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsDebugSettings.hpp"
void* _Script_RsGameTechRT::RsDebugSettings::get_AIDebugInput() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_RsGameTechRT::RsDebugSettings::get_SelectPreviousActorKey() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsDebugSettings::get_SelectNextActorKey() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsDebugSettings::get_ShowDebugAnimationHotkey() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsDebugSettings::get_DisablePhysicalAnimationHotkey() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDebugSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsDebugSettings");
    return result;
}

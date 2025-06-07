#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsWorldSettings.hpp"
void* _Script_RsGameTechRT::RsWorldSettings::get_OnStartActorSpawns() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsWorldSettings::get_WindParameterCollection() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldSettings");
    return result;
}

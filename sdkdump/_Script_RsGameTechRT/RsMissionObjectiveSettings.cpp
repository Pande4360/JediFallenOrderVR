#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsMissionObjectiveSettings.hpp"
void* _Script_RsGameTechRT::RsMissionObjectiveSettings::get_MissionObjectiveDataTablePtr() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMissionObjectiveSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsMissionObjectiveSettings");
    return result;
}

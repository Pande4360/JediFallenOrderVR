#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsMissionObjectiveSystemBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMissionObjectiveSystemBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsMissionObjectiveSystemBase");
    return result;
}
void _Script_RsGameTechRT::RsMissionObjectiveSystemBase::SetMissionCompleted(void* MissionKey, bool bNotifyPlayer) {
    return;
}
void _Script_RsGameTechRT::RsMissionObjectiveSystemBase::SetMissionActive(void* MissionKey, bool bNotifyPlayer) {
    return;
}
void _Script_RsGameTechRT::RsMissionObjectiveSystemBase::SetMissionAcquired(void* MissionKey, bool bNotifyPlayer) {
    return;
}
void _Script_RsGameTechRT::RsMissionObjectiveSystemBase::PopulateMissionKeyList(_Script_CoreUObject::Object* ContextObject, void*& Options) {
    return;
}

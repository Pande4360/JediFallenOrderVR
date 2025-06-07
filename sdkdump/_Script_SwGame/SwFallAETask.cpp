#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityEffectTask.hpp"
#include "SwFallAETask.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwFallAETask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwFallAETask");
    return result;
}
void _Script_SwGame::SwFallAETask::OnBumperTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}

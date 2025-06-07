#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityTask.hpp"
#include "SwParticleATask.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwParticleATask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwParticleATask");
    return result;
}

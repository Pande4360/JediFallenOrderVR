#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTTask_PlayCombatStateAnimation.hpp"
#include "SwBTTask_PlayDefenseAnimation.hpp"
#include "SwDefenseState.hpp"
_Script_SwGame::SwDefenseState*& _Script_SwGame::SwBTTask_PlayDefenseAnimation::get_DefenseTemplate() {
    return *(_Script_SwGame::SwDefenseState**)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_PlayDefenseAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_PlayDefenseAnimation");
    return result;
}

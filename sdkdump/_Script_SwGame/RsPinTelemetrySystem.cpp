#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
#include "RsPinTelemetrySystem.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsPinTelemetrySystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsPinTelemetrySystem");
    return result;
}
void _Script_SwGame::RsPinTelemetrySystem::OnHeroUpgradesChanged(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags NewFlags) {
    return;
}
void _Script_SwGame::RsPinTelemetrySystem::OnPlayerPawnChanged(_Script_Engine::Pawn* NewPawn) {
    return;
}
void _Script_SwGame::RsPinTelemetrySystem::OnPlayerUsedAbility(void* AbilityType, _Script_Engine::Actor* Target, bool bHasSucceeded) {
    return;
}

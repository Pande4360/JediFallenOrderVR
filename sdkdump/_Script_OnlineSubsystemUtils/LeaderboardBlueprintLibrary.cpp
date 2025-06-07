#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "LeaderboardBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::LeaderboardBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
    return result;
}
bool _Script_OnlineSubsystemUtils::LeaderboardBlueprintLibrary::WriteLeaderboardInteger(_Script_Engine::PlayerController* PlayerController, void* StatName, int32_t StatValue) {
    return;
}

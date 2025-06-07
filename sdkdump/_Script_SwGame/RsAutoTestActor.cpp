#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAutoTestActor.hpp"
void _Script_SwGame::RsAutoTestActor::TagAdded(_Script_GameplayTags::GameplayTag& Tag) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::RsAutoTestActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAutoTestActor");
    return result;
}
void _Script_SwGame::RsAutoTestActor::TagRemoved(_Script_GameplayTags::GameplayTag& Tag) {
    return;
}

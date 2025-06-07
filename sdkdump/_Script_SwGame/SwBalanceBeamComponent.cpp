#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsBalanceBeamComponent.hpp"
#include "SwBalanceBeamComponent.hpp"
#include "SwStaminaMeterComponent.hpp"
_Script_SwGame::SwStaminaMeterComponent*& _Script_SwGame::SwBalanceBeamComponent::get_StaminaMeter() {
    return *(_Script_SwGame::SwStaminaMeterComponent**)((uintptr_t)this + 0xcf0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBalanceBeamComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBalanceBeamComponent");
    return result;
}

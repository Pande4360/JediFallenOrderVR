#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsSwimComponent.hpp"
#include "SwStaminaMeterComponent.hpp"
#include "SwSwimComponent.hpp"
_Script_SwGame::SwStaminaMeterComponent*& _Script_SwGame::SwSwimComponent::get_m_StaminaMeter() {
    return *(_Script_SwGame::SwStaminaMeterComponent**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSwimComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSwimComponent");
    return result;
}

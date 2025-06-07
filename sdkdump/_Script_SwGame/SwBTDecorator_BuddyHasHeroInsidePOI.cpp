#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTDecorator_BuddyHasHeroInsidePOI.hpp"
float& _Script_SwGame::SwBTDecorator_BuddyHasHeroInsidePOI::get_CheckRadiusCoefficient() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTDecorator_BuddyHasHeroInsidePOI::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTDecorator_BuddyHasHeroInsidePOI");
    return result;
}
float& _Script_SwGame::SwBTDecorator_BuddyHasHeroInsidePOI::get_CheckRadiusConstant() {
    return *(float*)((uintptr_t)this + 0x6c);
}

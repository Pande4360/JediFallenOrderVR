#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTService_BuddyUsePOI.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTService_BuddyUsePOI::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTService_BuddyUsePOI");
    return result;
}

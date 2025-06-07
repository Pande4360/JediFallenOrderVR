#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTDecorator_ShouldAlignToInnerFightSector.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTDecorator_ShouldAlignToInnerFightSector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTDecorator_ShouldAlignToInnerFightSector");
    return result;
}

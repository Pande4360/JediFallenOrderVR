#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTDecorator_IsAlignedToFightSector.hpp"
void* _Script_SwGame::SwBTDecorator_IsAlignedToFightSector::get_Sector() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_SwGame::SwBTDecorator_IsAlignedToFightSector::get_IgnoreAlignmentCharacterRadiusMultiplier() {
    return *(float*)((uintptr_t)this + 0x6c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTDecorator_IsAlignedToFightSector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTDecorator_IsAlignedToFightSector");
    return result;
}

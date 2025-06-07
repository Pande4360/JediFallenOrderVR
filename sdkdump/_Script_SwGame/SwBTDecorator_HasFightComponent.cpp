#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTDecorator_HasFightComponent.hpp"
void* _Script_SwGame::SwBTDecorator_HasFightComponent::get_TestActorKey() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTDecorator_HasFightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTDecorator_HasFightComponent");
    return result;
}

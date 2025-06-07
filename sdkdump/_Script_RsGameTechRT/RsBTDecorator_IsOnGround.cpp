#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_IsOnGround.hpp"
void _Script_RsGameTechRT::RsBTDecorator_IsOnGround::OnTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_IsOnGround::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_IsOnGround");
    return result;
}

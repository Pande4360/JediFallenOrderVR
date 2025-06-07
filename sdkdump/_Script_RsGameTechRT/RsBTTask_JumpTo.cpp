#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_JumpTo.hpp"
void* _Script_RsGameTechRT::RsBTTask_JumpTo::get_TargetLocationKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_RsGameTechRT::RsBTTask_JumpTo::OnTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_JumpTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_JumpTo");
    return result;
}
void* _Script_RsGameTechRT::RsBTTask_JumpTo::get_JumpAnimation() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_RsGameTechRT::RsBTTask_JumpTo::get_LandAnimation() {
    return (void*)((uintptr_t)this + 0xb0);
}

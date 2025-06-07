#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_PlayAnimationBase.hpp"
#include "RsBTTask_PlayPOIAnimation.hpp"
void* _Script_RsGameTechRT::RsBTTask_PlayPOIAnimation::get_AnimationFinishMode() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_PlayPOIAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_PlayPOIAnimation");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_PlayAnimation.hpp"
#include "RsBTTask_PlayAnimationBase.hpp"
void* _Script_RsGameTechRT::RsBTTask_PlayAnimation::get_AnimData() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_PlayAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_PlayAnimation");
    return result;
}

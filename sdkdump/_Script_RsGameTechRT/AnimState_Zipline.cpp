#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_Zipline.hpp"
float& _Script_RsGameTechRT::AnimState_Zipline::get_IdleSwingAmount() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_RsGameTechRT::AnimState_Zipline::get_MovementDirection() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_RsGameTechRT::AnimState_Zipline::get_CurrentAttachmentState() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::AnimState_Zipline::get_CurrentAnimationState() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_RsGameTechRT::AnimState_Zipline::get_EntryType() {
    return (void*)((uintptr_t)this + 0x3);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_Zipline::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_Zipline");
    return result;
}

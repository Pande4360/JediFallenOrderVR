#include "..\FUObjectArray.hpp"
#include "AkEvent_Conditional_RTPC_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC::AkEvent_Conditional_RTPC_C::get_RTPCName() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC::AkEvent_Conditional_RTPC_C::get_RTPCValueBegin() {
    return *(float*)((uintptr_t)this + 0x80);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC::AkEvent_Conditional_RTPC_C::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
float& _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC::AkEvent_Conditional_RTPC_C::get_RTPCValueEnd() {
    return *(float*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC::AkEvent_Conditional_RTPC_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Notify/AkEvent_Conditional_RTPC.AkEvent_Conditional_RTPC_C");
    return result;
}
bool _Game_Audio_Blueprint_Notify_AkEvent_Conditional_RTPC::AkEvent_Conditional_RTPC_C::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}

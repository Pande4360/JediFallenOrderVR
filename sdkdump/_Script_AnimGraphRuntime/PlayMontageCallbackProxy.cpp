#include "..\FUObjectArray.hpp"
#include "PlayMontageCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\BranchingPointNotifyPayload.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy");
    return result;
}
void* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::get_OnCompleted() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::get_OnNotifyBegin() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::get_OnBlendOut() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_AnimGraphRuntime::PlayMontageCallbackProxy::OnNotifyBeginReceived(void* NotifyName, _Script_Engine::BranchingPointNotifyPayload& BranchingPointNotifyPayload) {
    return;
}
void* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::get_OnInterrupted() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::get_OnNotifyEnd() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_AnimGraphRuntime::PlayMontageCallbackProxy::OnNotifyEndReceived(void* NotifyName, _Script_Engine::BranchingPointNotifyPayload& BranchingPointNotifyPayload) {
    return;
}
void _Script_AnimGraphRuntime::PlayMontageCallbackProxy::OnMontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Script_AnimGraphRuntime::PlayMontageCallbackProxy::OnMontageBlendingOut(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
_Script_AnimGraphRuntime::PlayMontageCallbackProxy* _Script_AnimGraphRuntime::PlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(_Script_Engine::SkeletalMeshComponent* inSkeletalMeshComponent, _Script_Engine::AnimMontage* MontageToPlay, float Playrate, float StartingPosition, void* StartingSection) {
    return;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsRopeActor.hpp"
#include "..\_Script_RsGameTechRT\RsRopeAttachmentComponent.hpp"
#include "..\_Script_RsGameTechRT\RsRopeComponent.hpp"
#include "SwPinnedRopeActor.hpp"
#include "SwRopePinComponent.hpp"
void _Script_SwGame::SwPinnedRopeActor::OnRopeAttached(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment) {
    return;
}
bool _Script_SwGame::SwPinnedRopeActor::get_bDetachRopeOnForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a4 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwPinnedRopeActor::get_OnRopeParticleDetached() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_SwGame::SwPinnedRopeActor::get_OnRopeCompletelyDetached() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_SwGame::SwPinnedRopeActor::get_RopeClass() {
    return (void*)((uintptr_t)this + 0x380);
}
_Script_SwGame::SwRopePinComponent*& _Script_SwGame::SwPinnedRopeActor::get_RopePin0() {
    return *(_Script_SwGame::SwRopePinComponent**)((uintptr_t)this + 0x390);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwPinnedRopeActor::get_RopeSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x388);
}
_Script_RsGameTechRT::RsRopeActor*& _Script_SwGame::SwPinnedRopeActor::get_RopeActor() {
    return *(_Script_RsGameTechRT::RsRopeActor**)((uintptr_t)this + 0x398);
}
float& _Script_SwGame::SwPinnedRopeActor::get_ForcePullDetachWaitTime() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
void _Script_SwGame::SwPinnedRopeActor::set_bDetachRopeOnForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPinnedRopeActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPinnedRopeActor");
    return result;
}
void _Script_SwGame::SwPinnedRopeActor::OnRopeForcePullStart(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
void _Script_SwGame::SwPinnedRopeActor::OnRopeForcePullEnd(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
void _Script_SwGame::SwPinnedRopeActor::DetachRope() {
    return;
}

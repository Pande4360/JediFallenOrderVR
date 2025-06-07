#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "SwAmbOverlapComponent.hpp"
void* _Script_SwGame::SwAmbOverlapComponent::get_OnOverlapHeroBegin() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_SwGame::SwAmbOverlapComponent::get_VolumeToOverlap() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Script_SwGame::SwAmbOverlapComponent::get_OnOverlapHeroEnd() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_SwGame::SwAmbOverlapComponent::get_PrimitiveComponent() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void _Script_SwGame::SwAmbOverlapComponent::set_bIsUsingCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwAmbOverlapComponent::get_bIsUsingCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f8 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwAmbOverlapComponent::get_DistToHero() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Script_SwGame::SwAmbOverlapComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
float& _Script_SwGame::SwAmbOverlapComponent::get_TimeElapsed() {
    return *(float*)((uintptr_t)this + 0x304);
}
bool _Script_SwGame::SwAmbOverlapComponent::get_bIsStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x308 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAmbOverlapComponent::set_bIsStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x308 + 0);
    *(uint8_t*)((uintptr_t)this + 0x308 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAmbOverlapComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAmbOverlapComponent");
    return result;
}
void _Script_SwGame::SwAmbOverlapComponent::SetVolume(_Script_Engine::Volume* Volume) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::SetRadius(float Radius) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::SetPrimitiveComponent(_Script_Engine::PrimitiveComponent* PrimitiveComp) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::SetIsUsingCamera(bool IsUsingCamera) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::SetIsStareted(bool IsStarted) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::OnComponentEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::OnComponentBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::OnActorEndOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_SwGame::SwAmbOverlapComponent::OnActorBeginOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}

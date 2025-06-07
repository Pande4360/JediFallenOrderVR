#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "CurveFloat.hpp"
#include "CurveLinearColor.hpp"
#include "CurveVector.hpp"
#include "TimelineComponent.hpp"
void _Script_Engine::TimelineComponent::SetVectorCurve(_Script_Engine::CurveVector* NewVectorCurve, void* VectorTrackName) {
    return;
}
void* _Script_Engine::TimelineComponent::get_TheTimeline() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Script_Engine::TimelineComponent::Stop() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::TimelineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TimelineComponent");
    return result;
}
bool _Script_Engine::TimelineComponent::get_bIgnoreTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 1 != 0;
}
void _Script_Engine::TimelineComponent::SetTimelineLength(float newLength) {
    return;
}
void _Script_Engine::TimelineComponent::set_bIgnoreTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::TimelineComponent::SetTimelineLengthMode(void* NewLengthMode) {
    return;
}
void _Script_Engine::TimelineComponent::SetPlayRate(float NewRate) {
    return;
}
void _Script_Engine::TimelineComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate) {
    return;
}
void _Script_Engine::TimelineComponent::SetNewTime(float NewTime) {
    return;
}
void _Script_Engine::TimelineComponent::SetLooping(bool bNewLooping) {
    return;
}
void _Script_Engine::TimelineComponent::SetLinearColorCurve(_Script_Engine::CurveLinearColor* NewLinearColorCurve, void* LinearColorTrackName) {
    return;
}
void _Script_Engine::TimelineComponent::SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation) {
    return;
}
void _Script_Engine::TimelineComponent::SetFloatCurve(_Script_Engine::CurveFloat* NewFloatCurve, void* FloatTrackName) {
    return;
}
void _Script_Engine::TimelineComponent::ReverseFromEnd() {
    return;
}
void _Script_Engine::TimelineComponent::Reverse() {
    return;
}
void _Script_Engine::TimelineComponent::PlayFromStart() {
    return;
}
void _Script_Engine::TimelineComponent::Play() {
    return;
}
void _Script_Engine::TimelineComponent::OnRep_Timeline() {
    return;
}
bool _Script_Engine::TimelineComponent::IsReversing() {
    return;
}
bool _Script_Engine::TimelineComponent::IsPlaying() {
    return;
}
bool _Script_Engine::TimelineComponent::IsLooping() {
    return;
}
float _Script_Engine::TimelineComponent::GetTimelineLength() {
    return;
}
float _Script_Engine::TimelineComponent::GetPlayRate() {
    return;
}
float _Script_Engine::TimelineComponent::GetPlaybackPosition() {
    return;
}
bool _Script_Engine::TimelineComponent::GetIgnoreTimeDilation() {
    return;
}

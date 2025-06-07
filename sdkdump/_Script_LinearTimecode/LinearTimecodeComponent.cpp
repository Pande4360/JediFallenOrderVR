#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "DropTimecode.hpp"
#include "LinearTimecodeComponent.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
void* _Script_LinearTimecode::LinearTimecodeComponent::get_OnTimecodeChange() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_MediaAssets::MediaPlayer*& _Script_LinearTimecode::LinearTimecodeComponent::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x2c8);
}
int32_t _Script_LinearTimecode::LinearTimecodeComponent::GetDropFrameNumber() {
    return;
}
void* _Script_LinearTimecode::LinearTimecodeComponent::get_DropTimecode() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Script_LinearTimecode::LinearTimecodeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LinearTimecode.LinearTimecodeComponent");
    return result;
}
void _Script_LinearTimecode::LinearTimecodeComponent::GetDropTimeCodeFrameNumber(_Script_LinearTimecode::DropTimecode& Timecode, int32_t& FrameNumber) {
    return;
}
void _Script_LinearTimecode::LinearTimecodeComponent::SetDropTimecodeFrameNumber(_Script_LinearTimecode::DropTimecode& Timecode, int32_t FrameNumber, _Script_LinearTimecode::DropTimecode& OutTimecode) {
    return;
}

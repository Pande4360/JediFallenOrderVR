#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "MovieSceneObjectBindingID.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSequencePlayer.hpp"
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPlay() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetEndTime() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnStop() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPlayReverse() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPause() {
    return (void*)((uintptr_t)this + 0x3a8);
}
bool _Script_MovieScene::MovieSceneSequencePlayer::GetDisableCameraCuts() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::set_bReversePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnFinished() {
    return (void*)((uintptr_t)this + 0x3b8);
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetLength() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_Status() {
    return (void*)((uintptr_t)this + 0x3c8);
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsPaused() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::get_bReversePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x3cc + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition) {
    return;
}
_Script_MovieScene::MovieSceneSequence*& _Script_MovieScene::MovieSceneSequencePlayer::get_Sequence() {
    return *(_Script_MovieScene::MovieSceneSequence**)((uintptr_t)this + 0x3d8);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_StartTime() {
    return (void*)((uintptr_t)this + 0x3e0);
}
int32_t& _Script_MovieScene::MovieSceneSequencePlayer::get_DurationFrames() {
    return *(int32_t*)((uintptr_t)this + 0x3e4);
}
int32_t& _Script_MovieScene::MovieSceneSequencePlayer::get_CurrentNumLoops() {
    return *(int32_t*)((uintptr_t)this + 0x3e8);
}
int32_t _Script_MovieScene::MovieSceneSequencePlayer::GetFrameDuration() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0x400);
}
void _Script_MovieScene::MovieSceneSequencePlayer::ChangePlaybackDirection() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_RootTemplateInstance() {
    return (void*)((uintptr_t)this + 0x440);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequencePlayer");
    return result;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Stop() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlayRate(float Playrate) {
    return;
}
_Script_CoreUObject::FrameRate _Script_MovieScene::MovieSceneSequencePlayer::GetFrameRate() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition, bool bForceEvaluation) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetFrameRate(_Script_CoreUObject::FrameRate FrameRate) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, bool bForceEvaluation) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::ScrubToFrame(_Script_CoreUObject::FrameTime NewPosition) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Scrub() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayToFrame(_Script_CoreUObject::FrameTime NewPosition) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayReverse() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayLooping(int32_t NumLoops) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Play() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds, bool bForceEvaluate) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Pause() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::JumpToFrame(_Script_CoreUObject::FrameTime NewPosition, bool bForceEvaluate) {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsReversed() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsPlaying() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetCurrentTime() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::GoToEndAndStop() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetStartTime() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlayRate() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlaybackStart() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlaybackEnd() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlaybackPosition() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::GetObjectBindings(_Script_CoreUObject::Object* InObject) {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetDuration() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}

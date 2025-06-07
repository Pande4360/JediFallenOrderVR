#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "WidgetAnimation.hpp"
void* _Script_UMG::WidgetAnimation::get_OnAnimationStarted() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_UMG::WidgetAnimation::get_OnAnimationFinished() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_UMG::WidgetAnimation::get_AnimationBindings() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_MovieScene::MovieScene*& _Script_UMG::WidgetAnimation::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x368);
}
bool _Script_UMG::WidgetAnimation::get_bLegacyFinishOnStop() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetAnimation::set_bLegacyFinishOnStop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetAnimation::get_DisplayLabel() {
    return (void*)((uintptr_t)this + 0x388);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetAnimation");
    return result;
}
float _Script_UMG::WidgetAnimation::GetStartTime() {
    return;
}
float _Script_UMG::WidgetAnimation::GetEndTime() {
    return;
}

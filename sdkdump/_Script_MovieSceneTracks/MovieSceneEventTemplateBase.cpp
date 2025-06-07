#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneEventTemplateBase.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventTemplateBase::get_EventReceivers() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_MovieSceneTracks::MovieSceneEventTemplateBase::set_bFireEventsWhenForwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneEventTemplateBase::get_bFireEventsWhenForwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieSceneEventTemplateBase::get_bFireEventsWhenBackwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
void _Script_MovieSceneTracks::MovieSceneEventTemplateBase::set_bFireEventsWhenBackwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventTemplateBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventTemplateBase");
    return result;
}

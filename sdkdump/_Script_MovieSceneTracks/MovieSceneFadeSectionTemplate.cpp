#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneFadeSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneFadeSectionTemplate::get_FadeCurve() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_MovieSceneTracks::MovieSceneFadeSectionTemplate::get_bFadeAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneFadeSectionTemplate::get_FadeColor() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_MovieSceneTracks::MovieSceneFadeSectionTemplate::set_bFadeAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneFadeSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneFadeSectionTemplate");
    return result;
}

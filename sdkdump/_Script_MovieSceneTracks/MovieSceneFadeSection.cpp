#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFadeSection.hpp"
#include "MovieSceneFloatSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneFadeSection::get_FadeColor() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Script_MovieSceneTracks::MovieSceneFadeSection::get_bFadeAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneFadeSection::set_bFadeAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneFadeSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneFadeSection");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneBoolSection.hpp"
bool _Script_MovieSceneTracks::MovieSceneBoolSection::get_DefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneBoolSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneBoolSection");
    return result;
}
void _Script_MovieSceneTracks::MovieSceneBoolSection::set_DefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieSceneBoolSection::get_BoolCurve() {
    return (void*)((uintptr_t)this + 0xe8);
}

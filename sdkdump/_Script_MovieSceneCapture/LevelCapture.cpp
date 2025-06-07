#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelCapture.hpp"
#include "MovieSceneCapture.hpp"
bool _Script_MovieSceneCapture::LevelCapture::get_bAutoStartCapture() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f0 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::LevelCapture::set_bAutoStartCapture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneCapture::LevelCapture::get_PrerequisiteActorId() {
    return (void*)((uintptr_t)this + 0x1fc);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::LevelCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.LevelCapture");
    return result;
}

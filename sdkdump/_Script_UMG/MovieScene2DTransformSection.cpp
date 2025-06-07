#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScene2DTransformSection.hpp"
void* _Script_UMG::MovieScene2DTransformSection::get_Shear() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Script_UMG::MovieScene2DTransformSection::get_TransformMask() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Translation() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Rotation() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Scale() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieScene2DTransformSection");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieScene2DTransformSectionTemplate.hpp"
void* _Script_UMG::MovieScene2DTransformSectionTemplate::get_Translation() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::MovieScene2DTransformSectionTemplate::get_Rotation() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_UMG::MovieScene2DTransformSectionTemplate::get_BlendType() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_UMG::MovieScene2DTransformSectionTemplate::get_Scale() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_UMG::MovieScene2DTransformSectionTemplate::get_Mask() {
    return (void*)((uintptr_t)this + 0x4ac);
}
void* _Script_UMG::MovieScene2DTransformSectionTemplate::get_Shear() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.MovieScene2DTransformSectionTemplate");
    return result;
}

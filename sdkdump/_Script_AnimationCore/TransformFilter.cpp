#include "..\FUObjectArray.hpp"
#include "TransformFilter.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::TransformFilter::get_TranslationFilter() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationCore::TransformFilter::get_RotationFilter() {
    return (void*)((uintptr_t)this + 0x3);
}
void* _Script_AnimationCore::TransformFilter::get_ScaleFilter() {
    return (void*)((uintptr_t)this + 0x6);
}
_Script_CoreUObject::Class* _Script_AnimationCore::TransformFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.TransformFilter");
    return result;
}

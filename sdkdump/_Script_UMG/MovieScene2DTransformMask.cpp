#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene2DTransformMask.hpp"
void* _Script_UMG::MovieScene2DTransformMask::get_Mask() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.MovieScene2DTransformMask");
    return result;
}

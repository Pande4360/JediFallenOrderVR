#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositionGraphCapturePasses.hpp"
void* _Script_MovieSceneCapture::CompositionGraphCapturePasses::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CompositionGraphCapturePasses::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.CompositionGraphCapturePasses");
    return result;
}

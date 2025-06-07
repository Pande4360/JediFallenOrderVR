#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsColorGradeTexture.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::RsColorGradeTexture::get_InputRange() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Engine::RsColorGradeTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsColorGradeTexture");
    return result;
}

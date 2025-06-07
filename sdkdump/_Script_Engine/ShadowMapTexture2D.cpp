#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ShadowMapTexture2D.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::ShadowMapTexture2D::get_ShadowmapFlags() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Engine::ShadowMapTexture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ShadowMapTexture2D");
    return result;
}

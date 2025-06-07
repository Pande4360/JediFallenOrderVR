#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "TextureRenderTarget.hpp"
float& _Script_Engine::TextureRenderTarget::get_TargetGamma() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_Engine::TextureRenderTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureRenderTarget");
    return result;
}

#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DrawToRenderTargetContext.hpp"
#include "TextureRenderTarget2D.hpp"
_Script_Engine::TextureRenderTarget2D*& _Script_Engine::DrawToRenderTargetContext::get_RenderTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::DrawToRenderTargetContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DrawToRenderTargetContext");
    return result;
}
